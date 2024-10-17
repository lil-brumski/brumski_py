/*
MIT License

Copyright (c) 2024 David Tamaratare Oghenebrume

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/


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

