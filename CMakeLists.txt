cmake_minimum_required(VERSION 3.16)

project(CinemaTicketManager LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(cinema_app
    src/main.cpp
    src/MovieTicket.cpp
)

target_include_directories(cinema_app PRIVATE include)
