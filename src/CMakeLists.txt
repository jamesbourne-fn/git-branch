cmake_minimum_required(VERSION 3.13)

project(MyTestConanPackage VERSION 1.0 LANGUAGES CXX)

add_executable(MyTestConanPackage main.cpp)

install(TARGETS MyTestConanPackage DESTINATION bin)


