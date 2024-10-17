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


#pragma once

#include <string>
#include <iostream>
#include <sstream>
#include <limits>

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

    class grade{       
    public:
         
        static char calculator(const int& score){

            if(score >= 70 && score <= 100){
                return 'A';
                }
            else if(score >= 60 && score <= 69){
                return 'B';
                }
            else if(score >= 50 && score <= 59){
                return 'C';
                }
            else if(score >= 45 && score <= 49){
                return 'D';
                }
            else if(score >= 40 && score <= 44){
                return 'E';     
                }
            else if(score >= 0 && score <= 39){
                return 'F';
                }

              return 'X';  
            }  
         
         static int point(const char& grade, const int& course_unit){
            
            if(grade == 'A'){
                return 5 * course_unit;
                }
            else if(grade == 'B'){
                return 4 * course_unit;
                }
            else if(grade == 'C'){
                return 3 * course_unit;
                }
            else if(grade == 'D'){
                return 2 * course_unit;
                }
            else if(grade == 'E'){
                return 1 * course_unit;
                }   
            else if(grade == 'F'){
                return 0 * course_unit;
                }  
                
             return 44*23;
            }

        };

    }


