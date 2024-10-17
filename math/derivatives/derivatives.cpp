#include <pybind11/pybind11.h>
#include <string>

namespace brumski_cpp{

  class Differential{
  private:
    int number = 0;
    char variable;
    int power = 0;

  public:
    Differential(const int& number, const char& variable, const int& power){
      this->number = number;
      this->variable = variable;
      this->power = power;
    }

    std::string diff(){
      std::string result;
  
      if(power != 2){
        result = std::to_string(power * number) + "" + variable + "^" + std::to_string(power - 1);  
      }
      else{
        result = std::to_string(power * number) + "" + variable;
      }
    
      return result;
    }
  
};

}

namespace py = pybind11;

PYBIND11_MODULE(derivatives, m){
   py::class_<brumski_cpp::Differential>(m, "Differential")
     .def(py::init<const int&, const char&, const int&>())
     .def("diff", &brumski_cpp::Differential::diff);
}
