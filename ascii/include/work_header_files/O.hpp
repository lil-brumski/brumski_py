#ifndef LETTER_O
#define LETTER_O

#include <iostream>
#include <iomanip>
	 
void O(){
    int o = 30;
    std::cout<<std::setfill('.');
    
    std::cout<<std::right<<std::setw(o)<<"......"<<std::left<<std::setw(o)<<"......"<<std::endl;
    
    std::cout<<std::right<<std::setw(o)<<"....****"<<std::left<<std::setw(o)<<"****...."<<std::endl;
    
    for(int x = 0; x < 8; x++){
    std::cout<<std::right<<std::setw(o)<<"..**...."<<std::left<<std::setw(o)<<"....**.."<<std::endl;
    }
    
     std::cout<<std::right<<std::setw(o)<<"....****"<<std::left<<std::setw(o)<<"****...."<<std::endl;
     
      std::cout<<std::right<<std::setw(o)<<"......"<<std::left<<std::setw(o)<<"......"<<std::endl;
}

#endif
    