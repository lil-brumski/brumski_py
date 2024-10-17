//.This product is open to the public for use, no payment required, just giving of credits is required.
//Made by David Tamaratare Oghenebrume, a Computer Engineering student of Rivers State University. First published on the 13th of May, 2024.

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


