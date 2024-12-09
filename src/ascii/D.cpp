#include "brumski_py/ascii/__D.hpp"
	 
void D(){
    int d = 30;
    std::cout<<std::setfill('.');
    
     std::cout<<std::right<<std::setw(d)<<"......"<<std::left<<std::setw(d)<<"......"<<std::endl;
     
      std::cout<<std::right<<std::setw(d)<<"*******"<<std::left<<std::setw(d)<<"****** "<<std::endl;
    
    for(int x = 0; x < 8; x++){
        std::cout<<std::right<<std::setw(d)<<"**     "<<std::left<<std::setw(d)<<"      ***"<<std::endl;    
    }
    
    std::cout<<std::right<<std::setw(d)<<"*******"<<std::left<<std::setw(d)<<"*******"<<std::endl;
    
    std::cout<<std::right<<std::setw(d)<<"......"<<std::left<<std::setw(d)<<"......"<<std::endl;
}
