//.This product is open to the public for use, no payment required, just giving of credits is required.
//Made by David Tamaratare Oghenebrume, a Computer Engineering student of Rivers State University. First published on the 13th of May, 2024.


#pragma once

#include <string>
#include <iostream>
#include <sstream>
#include <limits>

namespace brumski_py::math {

     template <class T>
        T gradeinput(const std::string& prompt) {
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

    class grade{       
    public:        
        static char calculator(const int& score);                 
        static int point(const char& grade, const int& course_unit);                      
    };

 }

