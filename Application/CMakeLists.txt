cmake_minimum_required(VERSION 3.1.0)

project(Workout)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_library(db STATIC
	dbhelper.h
	dbhelper.cpp
)

add_library(components STATIC
	exercise.h
	exercise.cpp
)

add_executable(main
    mainwindow.ui
    mainwindow.cpp
    main.cpp
)

target_link_libraries(main PUBLIC Qt5::Widgets)
target_link_libraries(main PUBLIC db)
target_link_libraries(main PUBLIC components)
