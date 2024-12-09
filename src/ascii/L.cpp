#include "brumski_py/ascii/__L.hpp"
	 
void L(){
    int l = 30;
    std::cout<<std::setfill('.');
    
    std::cout<<std::right<<std::setw(l)<<"......"<<std::left<<std::setw(l)<<"......"<<std::endl;
    
    for(int x = 0; x < 8; x++){
         std::cout<<std::right<<std::setw(l)<<"***..."<<std::left<<std::setw(l)<<"......"<<std::endl;
    }
    
    for(int x = 0; x < 2; x++){
         std::cout<<std::right<<std::setw(l)<<"******"<<std::left<<std::setw(l)<<"********"<<std::endl;
    }
    
    std::cout<<std::right<<std::setw(l)<<"......"<<std::left<<std::setw(l)<<"......"<<std::endl;
}