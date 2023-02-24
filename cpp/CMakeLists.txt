cmake_minimum_required(VERSION 3.19)
project(python_cpp)

set(CMAKE_CXX_STANDARD 17)

find_package(pybind11 CONFIG REQUIRED)
find_package(Qt5 COMPONENTS
	Core REQUIRED
)

add_subdirectory(lib)
