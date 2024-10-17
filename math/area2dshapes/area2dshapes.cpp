//Free to use but you must give credit and link/tag this repository.
//Made by David Tamaratare Oghenebrume.

#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <limits>
#include <pybind11/pybind11.h>

namespace brumski_cpp::math {
    
    template <class T>
        T input(const std::string& prompt) {
          T value;
          std::string input;
         while (true) {
            std::cout << prompt;
            std::getline(std::cin, input);
            std::istringstream stream(input);
            if (stream >> value && stream.eof()) {
                 break;
            } else {
                 std::cerr << "Wrong data type, try again!\n";
              }
        }
        return value;
     }
           
    class area2dshapes {  
    public:         
    
        static double square(double length) {
            return std::pow(length, 2);   
        }
        
        static double rectangle(double length, double width) {
            return length * width;
        }
        
        static double triangle(double base, double height) {
            return 0.5 * base * height;
        }
        
        static double circle(double radius) {
            return M_PI * std::pow(radius, 2);
        }
        
        static double ellipse(double major_axis, double minor_axis) {
            return M_PI * major_axis * minor_axis;
        }
      
        static double parallelogram(double base, double height){
            return base * height;
        }
     
       static double trapezoid(double base1, double base2, double height){
           return 0.5 * (base1 + base2) * height;
       }
      
      static double rhombus(double diagonal1, double diagonal2){
          return 0.5 * diagonal1 * diagonal2;
      }
     
     static double kite(double diagonal1, double diagonal2){
         return 0.5 * diagonal1 * diagonal2;
     }
           
    };
    
} 

namespace py = pybind11;

PYBIND11_MODULE(area2dshapes, m){

   m.def("input", &brumski_cpp::math::input<double>);
   m.def("square", &brumski_cpp::math::area2dshapes::square);
   m.def("rectangle", &brumski_cpp::math::area2dshapes::rectangle);
   m.def("triangle", &brumski_cpp::math::area2dshapes::triangle);
   m.def("circle", &brumski_cpp::math::area2dshapes::circle);

}






