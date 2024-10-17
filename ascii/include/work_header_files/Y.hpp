#ifndef LETTER_Y
#define LETTER_Y

#include <iostream>
#include <iomanip>
	 
void Y(){
    int y = 30;
    std::cout<<std::setfill('.');
    
    std::cout<<std::right<<std::setw(y)<<"......"<<std::left<<std::setw(y)<<"......"<<std::endl;
    
    for(int x = 0; x < 4; x++){
    std::cout<<std::right<<std::setw(y)<<"**...."<<std::left<<std::setw(y)<<"....**"<<std::endl;
    }
    
    for(int x = 0; x < 2; x++){
    std::cout<<std::right<<std::setw(y)<<"******"<<std::left<<std::setw(y)<<"******"<<std::endl;
    }
    
    for(int x = 0; x < 4; x++){
    std::cout<<std::right<<std::setw(y)<<"....**"<<std::left<<std::setw(y)<<"**...."<<std::endl;
    }
    
     std::cout<<std::right<<std::setw(y)<<"......"<<std::left<<std::setw(y)<<"......"<<std::endl;
    
}

#endif