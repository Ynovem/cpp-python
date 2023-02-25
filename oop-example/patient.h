#pragma once

#include "base.h"
#include "data.h"

#include <pybind11/pybind11.h>

class Patient {
	public:
		static Patient& getInstance();

	public:
		Patient() = default;
		virtual ~Patient() = default;

		void setName(std::string name);
		void setAge(int age);

		Data getData();

	protected:
		Data data;
};

/* ... binding code ... */
namespace py = pybind11;
PYBIND11_MODULE(patient, m) {
	py::class_<Base>(m, "base")
	    .def(py::init<unsigned int>())
		.def("set_name", &Base::setName)
		.def("get_name", &Base::getName)
		.def("get_id", &Base::getId);

	py::class_<Data>(m, "data")
	    .def(py::init())
		.def("set_name", &Data::setName)
		.def("set_age", &Data::setAge)
		.def("get_id", &Data::getId)
		.def("get_name", &Data::getName)
		.def("get_age", &Data::getAge);

	py::class_<Patient>(m, "patient")
//		.def_static("__init__", []() { return 42;})
//		.def("__new__", [](py::object){return Patient::getInstance();}, py::return_value_policy::reference_internal)
//		.def_static("__new__", [](py::object){return Patient::getInstance();}, py::return_value_policy::reference_internal)
		.def(py::init([](){
			return Patient::getInstance(); // Unfortunately not working under python
		}), py::return_value_policy::reference_internal)
		.def("set_name", &Patient::setName)
		.def("set_age", &Patient::setAge)
		.def("get_data", &Patient::getData);
}
