#include <pybind11/pybind11.h>

#include <QString>

#define STRINGIFY(x) #x
#define MACRO_STRINGIFY(x) STRINGIFY(x)

int add(int i, int j) {
	return i + j;
}

std::string greeting(const std::string& name) {
	return QStringLiteral("Hello %1!").arg(QString::fromStdString(name)).toStdString();
}

namespace py = pybind11;

PYBIND11_MODULE(patient, m) {
	m.doc() = R"pbdoc(
        Pybind11 example plugin
        -----------------------
        .. currentmodule:: patient
        .. autosummary::
           :toctree: _generate
           add
           subtract
           greet
    )pbdoc";

	m.def("add", &add, R"pbdoc(
        Add two numbers
        Some other explanation about the add function.
    )pbdoc");

	m.def("subtract", [](int i, int j) { return i - j; }, R"pbdoc(
        Subtract two numbers
        Some other explanation about the subtract function.
    )pbdoc");

	m.def("greeting", &greeting, R"pbdoc(
        Greeting by the name
        Some other explanation about the greeting function.
    )pbdoc");

#ifdef VERSION_INFO
	m.attr("__version__") = MACRO_STRINGIFY(VERSION_INFO);
#else
	m.attr("__version__") = "dev";
#endif
}
