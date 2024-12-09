#include "../math/grade_calculator.hpp"
#include <cmath>
#include <iomanip>
#include <stdexcept>

namespace brumski_py::school{
  
  char course_grade(const std::string& name);
  
  int course_grade_point(const char& grade, const int& course_units);
  
  float semester_GPA(const float& cumulative_units, const int& total_course_units);
  
}