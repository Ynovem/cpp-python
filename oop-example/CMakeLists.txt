cmake_minimum_required(VERSION 3.19)
project(python_cpp)

set(CMAKE_CXX_STANDARD 17)

find_package(pybind11 CONFIG REQUIRED)
find_package(Qt5 COMPONENTS
	Core REQUIRED
)

pybind11_add_module(patient
	SHARED base.cpp data.cpp patient.cpp
)

target_link_libraries(patient
	PUBLIC Qt5::Core
)

set_target_properties(patient
	PROPERTIES
	ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/artifact"
	LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/artifact"
	RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/artifact"
)
