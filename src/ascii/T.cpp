#include "brumski_py/ascii/__T.hpp"

void T(){
    int t = 30;
    std::cout<<std::setfill('.');

    std::cout<<std::right<<std::setw(t)<<"......"<<std::left<<std::setw(t)<<"......"<<std::endl;

    std::cout<<std::right<<std::setw(t)<<"******"<<std::left<<std::setw(t)<<"******"<<std::endl;

    for(int x = 0; x < 9; x++){
    std::cout<<std::right<<std::setw(t)<<".....*"<<std::left<<std::setw(t)<<"*....."<<std::endl;
    }
     std::cout<<std::right<<std::setw(t)<<"......"<<std::left<<std::setw(t)<<"......"<<std::endl;


}
