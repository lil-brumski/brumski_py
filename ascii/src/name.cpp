

#include "work_header_files/A.hpp"
#include "work_header_files/B.hpp"
#include "work_header_files/C.hpp"
#include "work_header_files/D.hpp"
#include "work_header_files/E.hpp"
#include "work_header_files/F.hpp"
#include "work_header_files/G.hpp"
#include "work_header_files/H.hpp"
#include "work_header_files/I.hpp"
#include "work_header_files/J.hpp"
#include "work_header_files/K.hpp"
#include "work_header_files/L.hpp"
#include "work_header_files/M.hpp"
#include "work_header_files/N.hpp"
#include "work_header_files/O.hpp"
#include "work_header_files/P.hpp"
#include "work_header_files/Q.hpp"
#include "work_header_files/R.hpp"
#include "work_header_files/S.hpp"
#include "work_header_files/T.hpp"
#include "work_header_files/U.hpp"
#include "work_header_files/V.hpp"
#include "work_header_files/W.hpp"
#include "work_header_files/X.hpp"
#include "work_header_files/Y.hpp"
#include "work_header_files/Z.hpp"
#include "work_header_files/SPACE.hpp"
#include "work_header_files/boolean_functions.hpp"
#include <string>
#include <cctype>
#include <pybind11/pybind11.h>

//Main function where the program starts running.
namespace brumski_cpp::ascii{
    
    void name(){
        
        std::string name;
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
        //This loop converts the input to lowercase.
        for (size_t x = 0; x < name.length(); x++) {
            name[x] = std::tolower(name[x]);
        }

        //This while loop checks if the user entered an empty input or input that contains numbers or input that has two or more consecutive spaces.
        while (name.empty() || !isLettersOnly(name) ||   hasConsecutiveSpaces(name)) {
            std::cout << "Invalid input. Please enter a valid name: ";
            std::getline(std::cin, name);
            for (size_t x = 0; x < name.length(); x++) {
            name[x] = std::tolower(name[x]);
            }
        }

       //For loop gets the ASCII character for each letter in the user's name.
      for(int x = 0; x < name.length(); x++){             
         switch(name[x]){
            case 'a':
                A();
                break;
            case 'b':
                B();
                break;
            case 'c':
                C();
                break;                  
            case 'd':
                D();
                break;
            case 'e':
                E();
                break;
            case 'f':
                F();
                break;
            case 'g':
                G();
                break;
            case 'h':
                H();
                break;
            case 'i':
                I();
                break;
            case 'j':
                J();
                break;
            case 'k':
                K();
                break;
            case 'l':
                L();
                break;
            case 'm':
                M();
                break;
            case 'n':
                N();
                break;
            case 'o':
                O();
                break;
            case 'p':
                P();
                break;
            case 'q':
                Q();
                break;
            case 'r':
                R();
                break;
            case 's':
                S();
                break;
            case 't':
                T();
                break;
            case 'u':
                U();
                break;
            case 'v':
                V();
                break;
            case 'w':
                W();
                break;
            case 'x':
                X();
                break;
            case 'y':
                Y();
                break;
            case 'z':
                Z();
                break;  
            case ' ':
                SPACES();
                break;
            default:
                std::cout<<"Invalid character"<<std::endl;                                 
             }
       }
   }
 
}

namespace py = pybind11;

PYBIND11_MODULE(ascii, b){
  b.def("name", &brumski_cpp::ascii::name);
}

     