cmake_minimum_required(VERSION 3.15)
project(CPP-Repository)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS "-pthread")

add_executable(${PROJECT_NAME} ExtendedMatrix.cpp Logger.cpp main.cpp Matrix.cpp PointCharge.cpp smartMutex.cpp Vector.cpp main.cpp)