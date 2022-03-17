cmake_minimum_required(VERSION 3.10.2)
project(OpenGl-SolarSystem)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(HEADERS
        code/input/input.hpp
        code/texture/texture.hpp
        code/model/rawmodel.hpp
        code/model/texturedmodel.hpp
        code/model/loader.hpp
        code/model/objectloader.hpp
        code/display/display.hpp
        code/entity/camera.hpp
        code/gui/gui.hpp code/entity/light.hpp
        code/util/math.hpp
        code/util/constants.hpp
        code/entity/entity.hpp
        code/entity/skybox.hpp
        code/util/resources.hpp
        code/entity/sphere.hpp
        code/audio/audiosource.hpp
        code/audio/audiomaster.hpp
        code/util/util.hpp
        code/shader/shader.hpp
        code/shader/regularshader.hpp
        code/shader/sunshader.hpp
        code/shader/planetshader.hpp
        code/render/renderer.hpp
        code/entity/planets/earth.hpp
        code/entity/planets/mercury.hpp
        code/entity/planets/venus.hpp
        code/entity/planets/mars.hpp
        code/entity/planets/jupiter.hpp
        code/entity/planets/saturn.hpp
        code/entity/planets/saturnrings.hpp
        code/entity/planets/uranus.hpp
        code/entity/planets/neptune.hpp
        code/entity/planets/sun.hpp
        code/solarsystem/solarsystem.hpp
        libraries/stb_image/stb_image.h
        libraries/imgui/imconfig.h
        libraries/imgui/imgui.h
        libraries/imgui/imgui_internal.h
        libraries/imgui/imgui_impl_glfw.h
        libraries/imgui/imgui_impl_opengl3.h
        libraries/imgui/imstb_rectpack.h
        libraries/imgui/imstb_textedit.h
        libraries/imgui/imstb_truetype.h)

set(SOURCES
        code/input/input.cpp
        code/texture/texture.cpp
        code/model/rawmodel.cpp
        code/model/texturedmodel.cpp
        code/model/loader.cpp
        code/model/objectloader.cpp
        code/display/display.cpp
        code/entity/camera.cpp
        code/gui/gui.cpp
        code/entity/light.cpp
        code/util/math.cpp
        code/entity/entity.cpp
        code/entity/skybox.cpp
        code/entity/sphere.cpp
        code/audio/audiosource.cpp
        code/audio/audiomaster.cpp
        code/util/util.cpp
        code/shader/shader.cpp
        code/shader/regularshader.cpp
        code/shader/sunshader.cpp
        code/shader/planetshader.cpp
        code/render/renderer.cpp
        code/entity/planets/earth.cpp
        code/entity/planets/mercury.cpp
        code/entity/planets/venus.cpp
        code/entity/planets/mars.cpp
        code/entity/planets/jupiter.cpp
        code/entity/planets/saturn.cpp
        code/entity/planets/saturnrings.cpp
        code/entity/planets/uranus.cpp
        code/entity/planets/neptune.cpp
        code/entity/planets/sun.cpp
        code/solarsystem/solarsystem.cpp
        libraries/stb_image/stb_image.cpp
        libraries/imgui/imgui.cpp
        libraries/imgui/imgui_demo.cpp
        libraries/imgui/imgui_draw.cpp
        libraries/imgui/imgui_impl_glfw.cpp
        libraries/imgui/imgui_impl_opengl3.cpp
        libraries/imgui/imgui_widgets.cpp
        code/run.cpp)

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})

find_package(PkgConfig REQUIRED)
pkg_search_module(GLFW REQUIRED glfw3)
pkg_search_module(GLEW REQUIRED glew)
pkg_search_module(OPENAL REQUIRED openal)
pkg_search_module(ALUT REQUIRED freealut)

include_directories(${GLEW_INCLUDE_DIRS} ${GLFW_INCLUDE_DIRS} ${OPENAL_INCLUDE_DIRS} ${ALUT_INCLUDE_DIRS})

target_link_libraries(${PROJECT_NAME} ${GLEW_STATIC_LIBRARIES} ${GLFW_STATIC_LIBRARIES} ${OPENAL_STATIC_LIBRARIES} ${ALUT_STATIC_LIBRARIES})