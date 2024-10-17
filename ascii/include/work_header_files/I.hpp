#ifndef LETTER_I
#define LETTER_I

#include <iostream>
#include <iomanip>
	 
void I(){
    int i = 30;
    std::cout<<std::setfill('.');
    
    std::cout<<std::right<<std::setw(i)<<"......"<<std::left<<std::setw(i)<<"......"<<std::endl;
    
    std::cout<<std::right<<std::setw(i)<<"******"<<std::left<<std::setw(i)<<"******"<<std::endl;
    
    for(int x = 0; x < 8; x++){
    std::cout<<std::right<<std::setw(i)<<".....*"<<std::left<<std::setw(i)<<"*....."<<std::endl;
    }
    
     std::cout<<std::right<<std::setw(i)<<"******"<<std::left<<std::setw(i)<<"******"<<std::endl;
     
     std::cout<<std::right<<std::setw(i)<<"......"<<std::left<<std::setw(i)<<"......"<<std::endl;
    
    
}

#endif
    
    