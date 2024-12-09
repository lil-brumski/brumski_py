#include <pybind11/pybind11.h>
#include <brumski_py/ascii/name.hpp>
#include <brumski_py/math/area2dshapes.hpp>
#include <brumski_py/math/grade_calculator.hpp>

#ifdef ADD_DER_INT
  #include <brumski_py/math/derivatives.hpp>
  #include <brumski_py/math/integration.hpp>
#endif

#include <brumski_py/school/cgpa.hpp>

namespace py = pybind11;

PYBIND11_MODULE(brumski_py, m){
    m.doc() = "A pybind11 python library.";
    
    m.def("name", &brumski_py::ascii::name);
    
    m.def("areainput", &brumski_py::math::areainput<double>);
    py::class_<brumski_py::math::area2dshapes>(m, "area2dshapes")
        .def_static("square", &brumski_py::math::area2dshapes::square)
        .def_static("rectangle", &brumski_py::math::area2dshapes::rectangle)
        .def_static("triangle", &brumski_py::math::area2dshapes::triangle)
        .def_static("circle", &brumski_py::math::area2dshapes::circle);
        /*.def_static("");
        .def_static("");
        .def_static("");
        .def_static("");
        .def_static("");*/    
    
    #ifdef ADD_DER_INT
    py::class_<brumski_py::Differential>(m, "Differential")
        .def(py::init<const int&, const char&, const int&>())
        .def("diff", &brumski_py::Differential::diff);
        
    py::class_<brumski_py::Integration>(m, "Integration")
        .def(py::init<const float&, const char&, const float&>())
        .def("intg", &brumski_py::Integration::intg);
    #endif
    
    m.def("gradeinput", &brumski_py::math::gradeinput<double>);   
    py::class_<brumski_py::math::grade>(m, "grade")
        .def_static("calculator", &brumski_py::math::grade::calculator)
        .def_static("point", &brumski_py::math::grade::point);
    
    m.def("course_grade", &brumski_py::school::course_grade);
    m.def("course_grade_point", &brumski_py::school::course_grade_point);
    m.def("semesta_GPA", &brumski_py::school::semester_GPA);   
    
}