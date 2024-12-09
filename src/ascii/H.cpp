#include "brumski_py/ascii/__H.hpp"
	 
void H(){
    int h = 30;
    std::cout<<std::setfill('.');
    
    std::cout<<std::right<<std::setw(h)<<"......"<<std::left<<std::setw(h)<<"......"<<std::endl;
    
    for(int x = 0; x < 4; x++){
        std::cout<<std::right<<std::setw(h)<<"**...."<<std::left<<std::setw(h)<<"....**"<<std::endl;
    }
    
    for(int x = 0; x < 2; x++){
        std::cout<<std::right<<std::setw(h)<<"******"<<std::left<<std::setw(h)<<"******"<<std::endl;
    }
    
      for(int x = 0; x < 4; x++){
        std::cout<<std::right<<std::setw(h)<<"**...."<<std::left<<std::setw(h)<<"....**"<<std::endl;
    }
    
     std::cout<<std::right<<std::setw(h)<<"......"<<std::left<<std::setw(h)<<"......"<<std::endl;
}

