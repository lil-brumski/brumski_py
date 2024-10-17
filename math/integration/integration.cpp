#include <pybind11/pybind11.h>
#include <string>

namespace brumski_cpp{

 class Integration{
 private:
   int number = 0;
   char variable;
   int power = 0;

 public:
   Integration(const int& number, const char& variable, const int& power){
      this->number = number;
      this->variable = variable;
      this->power = power;
   }

   std::string intg(){
     std::string result;

      if((number % (power + 1)) != 0 ){
        result = std::to_string(number/(power + 1)) + variable + "^" + std::to_string(power + 1) + " +C";
      }
      else{
        result = variable + std::string("^") + std::to_string(power + 1) + " +C";
      }

      return result;
   } 
  
 };

}

namespace py = pybind11;

PYBIND11_MODULE(integration, s){
  s.doc() = "Just for fun lil bro";
  
  py::class_<brumski_cpp::Integration>(s, "Integration")
    .def(py::init<const int&, const char&, const int&>())
    .def("intg", &brumski_cpp::Integration::intg);
}

