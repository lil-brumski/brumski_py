#include <brumski_py/ascii/name.hpp>

//Main function where the program starts running.
namespace brumski_py::ascii{
    
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

     