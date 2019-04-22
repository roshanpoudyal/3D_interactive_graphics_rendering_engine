# This cmake is written with reference from Glitter project : https://github.com/Polytonic/Glitter/blob/master/CMakeLists.txt ---> (ref.A)
# and learnopengl.org project : https://github.com/JoeyDeVries/LearnOpenGL/blob/master/CMakeLists.txt ---> (ref.B), cmake files.

cmake_minimum_required(VERSION 3.0)
project(opengl_playground)

# althought this finding OpenGL and X11 will be also done by glfw library during its compilation
# I am mentioning it here just for mentioning sake and show what if glfw was not used
# ---> (ref.B)
find_package(OpenGL REQUIRED)
add_definitions(${OPENGL_DEFINITIONS})
find_package(X11 REQUIRED)

# build GLFW library from source ---> (ref.A)
option(GLFW_BUILD_DOCS OFF) # we do not need to build GLFW docs
option(GLFW_BUILD_EXAMPLES OFF) # we do not need to build GLFW examples
option(GLFW_BUILD_TESTS OFF) # we do not need to build GLFW tests
add_subdirectory(includes/glfw) # add glfw subdirectory which contains cmake files used to build GLFW, see add_subdirectory() cmake docs for more info 

# include the includes directory which contains required libraries for building this OpenGL application
# ---> (ref.A)
include_directories(includes/)

file(GLOB VENDORS_SOURCES src/glad.c) # sources from dependency libraries
file(GLOB PROJECT_HEADERS header/*.h) # headers for this project
file(GLOB PROJECT_SOURCES src/*/src/*.cpp) # sources for this project
file(GLOB PROJECT_SHADERS src/*/shaders/*) # shaders for this project

# set chapters and sub chapters to be used for generating specific binaries later
# ---> (ref.B)

# chapters
set(CHAPTERS
    getting_started
    # lighting
    # model_loading
    # advanced_opengl
    # advanced_lighting
    # pbr
    # in_practice
)

# sub chapters
set(getting_started
    hello_window
    hello_triangle
    hello_triangle_indexed
    hello_triangle_exercise1
    hello_triangle_exercise2
    hello_triangle_exercise3
    shaders_ins_outs
    shaders_uniforms
    shaders_more_attributes
    shaders_more_attributes_source_using_shader_class
#    textures
#    textures_combined
#    textures_exercise2
#    textures_exercise3
#    textures_exercise4
#    transformations
#    transformations_exercise2
#    coordinate_systems
#    coordinate_systems_depth
#    coordinate_systems_multiple
#    camera_circle
#    camera_keyboard_dt
#    camera_mouse_zoom
#    camera_class
)


# then create a project file per tutorial
# ---> (ref.B)
foreach(CHAPTER ${CHAPTERS})
    foreach(DEMO ${${CHAPTER}})
        set(NAME "${CHAPTER}_${DEMO}")
        add_executable(${NAME} src/${CHAPTER}_chapter/src/${DEMO}.cpp ${PROJECT_HEADERS} ${VENDORS_SOURCES})
        target_link_libraries(${NAME} glfw ${GLFW_LIBRARIES} ${GLAD_LIBRARIES})
    endforeach(DEMO)
endforeach(CHAPTER)