cmake_minimum_required(VERSION 3.16)

project(CinemaManagement VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(CinemaManagement
    main.cpp
    Film.cpp
    SalaCinema.cpp
    Bilet.cpp
)

target_compile_options(CinemaManagement PRIVATE
    -Wall
    -Wextra
    -Wpedantic
)