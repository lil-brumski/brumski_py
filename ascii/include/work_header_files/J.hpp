#ifndef LETTER_J
#define LETTER_J

#include <iostream>
#include <iomanip>
	 
void J(){
    int j = 30;
    std::cout<<std::setfill('.');
    
    std::cout<<std::right<<std::setw(j)<<"......"<<std::left<<std::setw(j)<<"......"<<std::endl;
    
    std::cout<<std::right<<std::setw(j)<<"******"<<std::left<<std::setw(j)<<"******"<<std::endl;
    
    for(int x = 0; x < 8; x++){
    std::cout<<std::right<<std::setw(j)<<".....*"<<std::left<<std::setw(j)<<"*....."<<std::endl;
    }
    
     std::cout<<std::right<<std::setw(j)<<"******"<<std::left<<std::setw(j)<<"*....."<<std::endl;
     
     std::cout<<std::right<<std::setw(j)<<"......"<<std::left<<std::setw(j)<<"......"<<std::endl;
    
    
}

#endif
    
    