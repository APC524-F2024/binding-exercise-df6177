#include <pybind11/eigen.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "integrator.hpp"

namespace py = pybind11;

PYBIND11_MODULE(_core, m) {
    py::class_<HarmonicOscillator>(m, "HarmonicOscillator")
        .def(py::init<>())
        .def("f", &HarmonicOscillator::f, py::arg("t"), py::arg("y"))
        .def("compute_step", &HarmonicOscillator::compute_step, py::arg("t_n"), py::arg("y_n"), py::arg("h"))
        .def("integrate", &HarmonicOscillator::integrate, py::arg("stepsize"), py::arg("steps"), py::arg("init_y"));
}
