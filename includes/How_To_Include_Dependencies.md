## As you can see we do not have the required libraries in this includes folder.
## This instructions are to download, compile, build and use the basic libraries to set up and develop an OpenGL Software Developmet Kit (SDK) specifically for Linux environment.

### My system environment while this document was written.
| System Properties  | Description |
| ------------- | ------------- |
| OS  | Linux - Ubuntu 18.04 LTS |
| Inbuilt GPU | Intel |
| Dedicated GPU  | AMD |
| IDE | [VSCode](https://code.visualstudio.com/) |
| Software for application compilation process | [CMake](https://cmake.org/) |
| Building the application | [Make](https://www.gnu.org/software/make/)|

### Libraries mentioned here are used as it is mentioned in the tutorials on learnopengl.com
1. [GLFW](https://www.glfw.org/) : as mentioned on learnopengl.com in [creating a window chapter](https://learnopengl.com/Getting-started/Creating-a-window).
2. [GLAD](https://glad.dav1d.de/) : as mentioned on learnopengl.com in [creating a window chapter](https://learnopengl.com/Getting-started/Creating-a-window).

### Instructions to compile, build and use each library mentioned above such that we can include them for our OpenGL (C/C++) application:
1. How to include [GLFW](https://www.glfw.org/) in our application:
    1. Althouh the instructions on learnopengl.com in [creating a window chapter](https://learnopengl.com/Getting-started/Creating-a-window) are for windows operating system we can use the instructions in [GLFW](https://www.glfw.org/)'s website to use it in our application for Linux OS.
    2. First [download GLFW source package](https://www.glfw.org/download.html) as instructed in the **Linux and macOS binaries** section in this page.
    3. Note that we are using cmake and make to compile and build the applications.
    4. We will follow this instruction on how to use [GLFW for building application](https://www.glfw.org/docs/latest/build_guide.html#build_link_cmake_source), which use it.
    5. The basic idea is the following piece of code we put in the [CMakeLists.txt](../CMakeLists.txt) file used to compile our application.
        ```cmake
        # build GLFW library from source
        option(GLFW_BUILD_DOCS OFF) # we do not need to build GLFW docs
        option(GLFW_BUILD_EXAMPLES OFF) # we do not need to build GLFW examples
        option(GLFW_BUILD_TESTS OFF) # we do not need to build GLFW tests
        add_subdirectory(includes/glfw) # add glfw subdirectory which contains cmake files used to build GLFW, see add_subdirectory() cmake docs for more info 
        ```
    6. Thus, the basic thing we need to do for GLFW library is download as instructed in step 2 above and then copy the whole folder to `includes` folder in our project tree.
    7. _(This step can be fully skipped)_ Some notable documentation in regards to GLFW are:
        1. [Compiling GLFW](https://www.glfw.org/docs/latest/compile.html).
        2. [CMake options/flags for GLFW compilation](https://www.glfw.org/docs/latest/compile.html#compile_options).
        3. [Dependencies for Linux and X11](https://www.glfw.org/docs/latest/compile_guide.html#compile_deps_x11).
        4. [Generating build files with CMake](https://www.glfw.org/docs/latest/compile_guide.html#compile_generate).
        5. [Compiling the library](https://www.glfw.org/docs/latest/compile_guide.html#compile_compile).
        6. [Building applications with GLFW - number of ways to do it](https://www.glfw.org/docs/latest/build_guide.html).
            1. [This is how we built GLFW with our application - With CMake and GLFW source](https://www.glfw.org/docs/latest/build_guide.html#build_link_cmake_source).
            2. [Another way - With CMake and installed GLFW binaries](https://www.glfw.org/docs/latest/build_guide.html#build_link_cmake_package).

2. How to include [GLAD](https://glad.dav1d.de/) in our application:
    1. The instructions pretty much straight forward on learnopengl.com in [creating a window chapter](https://learnopengl.com/Getting-started/Creating-a-window) - look section **Setting up GLAD** in the same.
        1. Just to mention, I choose OpenGL 4.5 in the [GLAD web service](https://glad.dav1d.de/). Other options are same as instructed.