cmake_minimum_required(VERSION 3.16)

project(h3b LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(h3b main.cpp
    animal.h animal.cpp
    dog.h dog.cpp)

include(GNUInstallDirs)
install(TARGETS h3b
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
