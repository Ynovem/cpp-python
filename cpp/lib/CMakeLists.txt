# pybind11 method:
pybind11_add_module(patient
	SHARED patient.cpp
)
target_link_libraries(patient
	PRIVATE Qt5::Core
)

## pybind11 method:
#pybind11_add_module(MyModule1 src1.cpp)

## Python method:
#Python_add_library(MyModule2 src2.cpp)
#target_link_libraries(MyModule2 pybind11::headers)
#set_target_properties(MyModule2 PROPERTIES
#	INTERPROCEDURAL_OPTIMIZATION ON
#	CXX_VISIBILITY_PRESET ON
#	VISIBILITY_INLINES_HIDDEN ON)
