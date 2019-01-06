# Define a project if this file wasn't included.
if(NOT CMAKE_PROJECT_NAME OR "${CMAKE_PROJECT_NAME}" MATCHES "^RF_UI$")
    cmake_minimum_required(VERSION 2.8.11)
    project(RF_UI)
    # put the libraries to the dist directory
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/dist)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/dist)
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/dist)    
endif()

include("Integrate.cmake")
rcf_addpackage(radonframework)
rcf_addpackage(libtess2)

set(DiagFiles src/Drawing/Forms/GPUInfoGraph.cpp)
SET_SOURCE_FILES_PROPERTIES(${DiagFiles} PROPERTIES HEADER_FILE_ONLY ON)

set(WindowsFiles src/System/Drawing/Forms/Shared.cpp
    src/System/Drawing/Forms/WindowsApplication.cpp
    src/System/Drawing/Forms/WindowsWindow.cpp
    src/System/Drawing/Forms/WindowsWindowService.cpp
    src/System/Drawing/SystemTrayServiceWindows.cpp
    src/System/Drawing/OpenGL/Shared.cpp
    src/System/Drawing/OpenGL/WDMOpenGLCanvas3D.cpp
    src/System/Drawing/OpenGL/WDMOpenGLCanvas3DService.cpp
    src/System/Drawing/OpenGL/WindowsOpenGL.cpp)
set(UnixFiles src/System/Drawing/Forms/X11Application.cpp
    src/System/Drawing/Forms/X11Window.cpp
    src/System/Drawing/Forms/X11WindowService.cpp
    src/System/Drawing/OpenGL/OpenGLX.cpp
    src/System/Drawing/OpenGL/X11OpenGL1Canvas3D.cpp
    src/System/Drawing/OpenGL/X11OpenGL2Canvas3D.cpp
    src/System/Drawing/OpenGL/X11OpenGL3Canvas3D.cpp
    src/System/Drawing/OpenGL/X11OpenGL1Canvas3DService.cpp
    src/System/Drawing/OpenGL/X11OpenGL2Canvas3DService.cpp
    src/System/Drawing/OpenGL/X11OpenGL3Canvas3DService.cpp)

if(WIN32)
	SET_SOURCE_FILES_PROPERTIES(${UnixFiles} PROPERTIES HEADER_FILE_ONLY ON)
endif()
if(UNIX)
	SET_SOURCE_FILES_PROPERTIES(${WindowsFiles} PROPERTIES HEADER_FILE_ONLY ON)
endif(UNIX)	

rcf_generate(module RF_UI RadonFrameworkUI "Framework")
    rcf_add_recursive("src/" "Source")
    rcf_add_recursive("include/RadonFramework/" "Includes")
    rcf_add_public_include("${CMAKE_CURRENT_SOURCE_DIR}/include/")
    rcf_dependencies(RadonFramework libtess2)
rcf_endgenerate()