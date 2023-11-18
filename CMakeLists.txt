cmake_minimum_required(VERSION 3.22.1)

project(opengl_window_project)
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
#si je trouve plusieurs versions de opengl: 
#cmake_policy(SET CMP0072 NEW)

add_executable(${PROJECT_NAME} 
#src/glad.h
#src/glad.c # on a besoin de ça pour utiliser glad
src/main.cpp
)

target_link_libraries(${PROJECT_NAME} 
${GLEW_LIBRARIES}
glfw
${OPENGL_LIBRARIES})
#OpenGL::GL
#target_link_libraries après les  executables