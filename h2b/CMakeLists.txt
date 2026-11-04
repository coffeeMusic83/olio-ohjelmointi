cmake_minimum_required(VERSION 3.16)

project(h2b LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(h2b main.cpp
    car.h car.cpp)

include(GNUInstallDirs)
install(TARGETS h2b
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
