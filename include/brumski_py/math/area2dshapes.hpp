//Free to use but you must give credit and link/tag this repository.
//Made by David Tamaratare Oghenebrume.

#pragma once

#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <limits>

namespace brumski_py::math {
    
    template <class T>
        T areainput(const std::string& prompt) {
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
    
        static double square(double length);
        
        static double rectangle(double length, double width);
        
        static double triangle(double base, double height);
        
        static double circle(double radius);
        
        static double ellipse(double major_axis, double minor_axis);
      
        static double parallelogram(double base, double height);
         
       static double trapezoid(double base1, double base2, double height);
      
      static double rhombus(double diagonal1, double diagonal2);
     
     static double kite(double diagonal1, double diagonal2);
         
   };
    
} 