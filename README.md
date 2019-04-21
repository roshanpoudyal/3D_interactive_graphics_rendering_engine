
> **If I can visualize it, I can understand it.**

#### 3D Interactive Graphics Rendering Engine / Game Engine
    - Develop a 3D interactive graphics rendering engine which can also be used as game engine.
    - A C++ and OpenGL/Shader programming playground (in linux)

-------------------------------------------------------

### Resources on Computer Graphics and OpenGL:

##### The red book of OpenGL
* [The red book of OpenGL](http://www.opengl-redbook.com/). Here is the [online version](https://www.glprogramming.com/red/) of this book. Is also available [here](https://www.cs.utexas.edu/users/fussell/courses/cs354/handouts/Addison.Wesley.OpenGL.Programming.Guide.8th.Edition.Mar.2013.ISBN.0321773039.pdf).
    - Another, very much similar to above mentioned book with a comprehensive tutorial and reference on OpenGL, shaders and mathematical foundation for the same - [OpenGL Superbible](http://www.openglsuperbible.com/).

##### A beautiful book open sourced - for physically based rendering:
* Photorealistic computer graphics is ubiquitous today, with applications that include entertainment—notably, movies and video games; product design; and architecture. Donald Knuth wrote “This book has deservedly won an Academy Award. I believe it should also be nominated for a Pulitzer Prize.” Read about the book [Physically Based Rendering](http://www.pbr-book.org/), which will link you to the contents of the book to [Physically Based Rendering:Contents](http://www.pbr-book.org/3ed-2018/contents.html).
And more fun - here is the [source code used by the book](https://github.com/mmp/pbrt-v3).

##### Another great piece of literature on computer graphics:
* [Real Time Rendering](http://www.realtimerendering.com/) is a legend which focuses on modern techniques used to generate synthetic three-dimensional images in a fraction of a second. With the advent of programmable shaders, a wide variety of new algorithms have arisen and evolved over the past few years. This edition discusses current, practical rendering methods used in games and other applications. It also presents a solid theoretical framework and relevant mathematics for the field of interactive computer graphics, all in an approachable style. They also list a helluva lot of [graphics books resources](http://www.realtimerendering.com/books.html) except their own book on their website. And here is their [blog](http://www.realtimerendering.com/blog/).

##### Great online resource for Computer Graphics techniques &/on GPU programming from NVIDIA - [GPU Gems Series](https://developer.nvidia.com/gpugems/GPUGems/gpugems_pref01.html).

##### Another bulk of Computer Graphics resources from [SigGraph](https://www.siggraph.org/about/about-acm-siggraph) - [Advances in Real-Time Rendering in 3D Graphics and Games](http://advances.realtimerendering.com/).

##### A course on photorealistic rendering, ray tracing and global illumination at the TU Wien. The entire course is now available [here on YouTube as a playlist](https://www.youtube.com/playlist?list=PLujxSBD-JXgnGmsn7gEyN28P1DnRZG7qi) at [Two minutes paper](https://www.youtube.com/channel/UCbfYPyITQ-7l4upoX8nvctg) youtube channel. This channel publishes videos on papers from field of visual computing (AI, computer graphics, etc.).

------------------------------------------------

#### Computer Graphics Learning Resources::
* A very helpful and all in one [C++ Game Engine Series](https://www.youtube.com/watch?v=JxIZbV_XjAs&list=PLlrATfBNZ98dC-V-N3m0Go4deliWHPFwT) to get started with, by [TheCherno](https://twitter.com/TheCherno?ref_src=twsrc%5Egoogle%7Ctwcamp%5Eserp%7Ctwgr%5Eauthor). Here is it's [github link](https://github.com/TheCherno/Hazel.git).
* A set of related course on Khanacademy; [Pixar in a box](https://www.khanacademy.org/partner-content/pixar).
* [UC Davis MOOC on Computer Graphics](https://www.youtube.com/playlist?list=PL_w_qWAQZtAZhtzPI5pkAtcUVgmzdAP8g).
* Get started with [Ogre3D tutorials](http://wiki.ogre3d.org/Tutorials). This will help you understand 3D Graphics programming as well as help you shine your C++ skills.

------------------------------------------------

#### Mathematics for Computer Graphics learning resources:
1. Learn [essence of Linear Algebra](https://www.youtube.com/playlist?list=PLZHQObOWTQDPD3MizzM2xVFitgF8hE_ab) from [3Blue1Brown youtube channel](https://www.youtube.com/channel/UCYO_jab_esuFRV4b17AJtAw).
    - Also learn [essence of Calculus](https://www.youtube.com/playlist?list=PLZHQObOWTQDMsr9K-rj53DwVRMYO3t5Yr).
2. Learn [linear algebra](https://www.youtube.com/playlist?list=PLE7DDD91010BC51F8) and [Computational science and engineering](https://www.youtube.com/playlist?list=PLF706B428FB7BD52C) from [Gilbert strang](http://www-math.mit.edu/~gs/).
    - Follow his other lectures and books from [his website](http://www-math.mit.edu/~gs/).
    
##### Painting with math - an Inspiration - the beauty of math and shaders :
1. [Íñigo Quílez](https://www.iquilezles.org/) uses mathematics and shaders to create beautiful computer graphics like [this](http://www.iquilezles.org/www/articles/sdfmodeling/sdfmodeling.htm). Visit his [articles](https://www.iquilezles.org/www/index.htm) page for tutorials on the techniques he developed for his computer graphics experiments, demos, shadertoys and movies. For video tutorials, code and other useful resources visit his [productions](https://www.iquilezles.org/prods/index.htm).
    - He is one of the most profilic writers on the subject [signed distance function](https://iquilezles.org/www/articles/distfunctions/distfunctions.htm). The same concept also blogged [here](https://www.alanzucconi.com/2016/07/01/signed-distance-functions/) and [here](http://jamie-wong.com/2016/07/15/ray-marching-signed-distance-functions/).
2. Beautiful piece of literature on [procedeural modellling with signed distance functions](http://aka-san.halcy.de/distance_fields_prefinal.pdf). WOW!!!

------------------------------------------------

#### Noteworthy open source libraries for developing C++ OpenGL applications:
1. [Dear **ImGui**](https://github.com/ocornut/imgui) is a bloat-free graphical user interface library for C++. It outputs optimized vertex buffers that you can render anytime in your 3D-pipeline enabled application. It is fast, portable, renderer agnostic and self-contained (no external dependencies).
2. [spdlog](https://github.com/gabime/spdlog) is very fast, header only, C++ logging library.
3. [Open Asset Import Library (assimp)](https://github.com/assimp/assimp) : A library to import and export various 3d-model-formats including scene-post-processing to generate missing render data.
4. [GLAD](https://github.com/ValtoLibraries/GLAD) is a C++ (multi-Language) GL/GLES/EGL/GLX/WGL Loader-Generator based on the official specs. Here is the [online GLAD generator](https://glad.dav1d.de/).
5. [GLFW](https://www.glfw.org/index.html) is an Open Source, multi-platform library for OpenGL, OpenGL ES and Vulkan development on the desktop. It provides a simple API for creating windows, contexts and surfaces, receiving input and events.
6. [OpenGL Mathematics (GLM)](https://glm.g-truc.net/0.9.9/index.html) is a header only C++ mathematics library for graphics software based on the [OpenGL Shading Language (GLSL) specifications](https://www.khronos.org/registry/OpenGL/specs/gl/GLSLangSpec.4.50.pdf). Here is [its github repository](https://github.com/g-truc/glm).

------------------------------------------------

### OpenGL and Shaders Learning Resources:
* [Guide as learning Path for a Game Engine Programmer](https://miloyip.github.io/game-programmer/game-programmer.pdf).
* [Great Start for learning OpenGL.](https://learnopengl.com/Getting-started/OpenGL)
* [Wow! A book of Shaders, Learn Shading Language. It has a whole content from shading, 3D Graphics, simulation etc.](https://thebookofshaders.com/)
* [OpenGL introduction from TheCherno Project - youtube playlist](https://www.youtube.com/playlist?list=PLlrATfBNZ98foTJPJ_Ev03o2oq3-GGOS2).
* [Another place to learn openGL.](http://www.opengl-tutorial.org/beginners-tutorials/)
* [Yet another place to learn openGL.](http://ogldev.atspace.co.uk/)
* [Yet yet another place to learn openGL.](https://open.gl/)
* [OpenGL Khronos Group man page and other beautiful related references.](https://www.khronos.org/registry/OpenGL-Refpages/)
* [OpenGL and Computer Graphics Resources](http://www.lighthouse3d.com/about/)
* [Learn Computer Graphics using **WebGL**](http://webgl.brown37.net/index.html) : This interactive textbook will teach you how to create interactive 3D computer graphics content that can be viewed and manipulated in a web browser. As you learn computer graphic concepts you will apply them using WebGL – a version of OpenGL (Open Graphics Library) that works in most web browsers.
* Nice conceptual [articles on computer graphics in codinglabs website](http://www.codinglabs.net/article_world_view_projection_matrix.aspx).
* [Computer Graphics Tutorial](https://www.tutorialspoint.com/computer_graphics/) from tutorialspoint gives you hands on experience with basic and advanced concepts and their implementation.
* [Efficient shader tricks](http://web.engr.oregonstate.edu/~mjb/cs519/Projects/Papers/ShaderTricks.pdf).
* [Shader tricks from ATI & power of maths etc.](https://developer.amd.com/wordpress/media/2012/10/03_Clever_Shader_Tricks.pdf).
* [Avoiding shader conditionals](http://theorangeduck.com/page/avoiding-shader-conditionals)
* [GLSL optimizations](https://www.khronos.org/opengl/wiki/GLSL_Optimizations).
* [What is GPU computing](https://www.boston.co.uk/info/nvidia-kepler/what-is-gpu-computing.aspx).
    - Learn about [Compute Shaders](https://www.youtube.com/watch?v=0DLOJPSxJEg) : how they work and why to use them.
    - Resources for parallel and GPU computing with OpenCL.
        - [OpenCL learning resources and much more from Khronos Group](https://github.com/KhronosGroup/Khronosdotorg/blob/master/api/opencl/resources.md#learning-opencl).
        - [OpenCL user guide](http://developer.amd.com/wordpress/media/2013/12/AMD_OpenCL_Programming_User_Guide2.pdf).

------------------------------------------------

#### Getting Started with OpenGL application development on Linux:

##### Setup OpenGL environment on Linux:
* [Steps for OpenGL Installation on Linux -> Step 2 : install all dependencies](https://medium.com/@Plimsky/how-to-install-a-opengl-environment-on-ubuntu-e3918cf5ab6c).
  - (Recommended) Also if you want to automatically install and update [mesa](https://www.mesa3d.org/faq.html) follow [these instructions to add it to your PPA](https://www.omgubuntu.co.uk/2018/06/mesa-18-1-1-ubuntu-18-04-ppa).
* Then use [these instructions](https://stackoverflow.com/a/16740622) to know version and other OpenGL specific information.
* If you have any dedicated graphics processor (NVIDIA or AMD) you may install their respective driver for linux.
    - **For AMD follow the instructions here** : [Installing and Uninstalling AMDGPU driver in Linux](https://github.com/roshanpoudyal/Linux/wiki/Installing-and-Uninstalling-AMDGPU-driver-in-Linux)

------------------------------------------------

#### Setup an OpenGL application Software Development Kit (SDK) on Linux:
* Follow the [instruction documented here](includes/How_To_Include_Dependencies.md) to compile, build and use the libraries mentioned in learnopengl.com to develop OpenGL application SDK framework in Linux.

----------------------------------------------

##### How to build this OpenGL application :
* It should be already noted that we use `cmake` and `make` to compile and build our application. Following easy to follow steps guide the same:
    1. Create a `build` folder in root directory of our project : `mkdir build`
    2. Enter this `build` folder : `cd build`
    3. Run `cmake` pointing the correct CMakeLists.txt file in root directory of our project to compile it : `cmake ..`
    4. Run `make` to build our project : `make`
    5. You will get the executables built in this `build` folder.
    
------------------------------------------------

#### More of my related and future possible projects:
1. Learn building rendering engine : [related project](https://github.com/roshanpoudyal/3D_interactive_graphics_rendering_engine)
2. Learn building physics engine : [related project](https://github.com/roshanpoudyal/Game-physics-engine-development) and [this as well](https://github.com/roshanpoudyal/Fluid-Simulation-and-Physics-Based-Animation)
3. Learn building math engine
4. Learn building AI for your game : [related project](https://github.com/roshanpoudyal/Reinforcement_Learning_tic_tac_toe)
5. Build a simple game with it

------------------------------------------------

#### Future direction:
1. Implement [catlikecoding tutorials](https://catlikecoding.com/unity/tutorials/) by using only shaders in the basic OpenGL framework you built here. **If it is possible to do [this](http://www.iquilezles.org/www/articles/sdfmodeling/sdfmodeling.htm) just using shaders, why don't you give it a try as well.**
2. Do all of this OpenGL project to [display graphics in Android (mobile) platform using Android Studio](https://developer.android.com/training/graphics/opengl/).


