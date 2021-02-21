set(LESSON1_1_SRCS
        main.cpp
#        OldProject/TriangleWindow.cpp
#        OldProject/TriangleWindow.hpp
        MainWindow.cpp MainWindow.h
        geometryengine.cpp geometryengine.h

        shaders.qrc
        Shaders/vshader.glsl
        Shaders/fshader.glsl

        textures.qrc
        cube.png
        cube.pro
#        Shaders/triangle.fs
#        Shaders/triangle.vs
        )

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(lesson1_1 ${LESSON1_1_SRCS})

target_link_libraries(lesson1_1
    PRIVATE
        Qt5::Widgets
        FGL::Base
)

