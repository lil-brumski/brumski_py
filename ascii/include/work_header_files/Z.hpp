#ifndef LETTER_Z
#define LETTER_Z

#include <iostream>
#include <iomanip>
	 
void Z(){
    int z = 30;
    std::cout<<std::setfill('.');
    
    std::cout<<std::right<<std::setw(z)<<"......"<<std::left<<std::setw(z)<<"......"<<std::endl;
    
    std::cout<<std::right<<std::setw(z)<<"******"<<std::left<<std::setw(z)<<"******"<<std::endl;
    
    std::cout<<std::right<<std::setw(z)<<"******"<<std::left<<std::setw(z)<<"******"<<std::endl;
    
    std::cout<<std::right<<std::setw(z)<<"......"<<std::left<<std::setw(z)<<"...**."<<std::endl;
    
    std::cout<<std::right<<std::setw(z)<<"......"<<std::left<<std::setw(z)<<"..**.."<<std::endl;
    
    std::cout<<std::right<<std::setw(z)<<"......"<<std::left<<std::setw(z)<<".**..."<<std::endl;
    
    std::cout<<std::right<<std::setw(z)<<"......"<<std::left<<std::setw(z)<<"**...."<<std::endl;
    
     std::cout<<std::right<<std::setw(z)<<"......**"<<std::left<<std::setw(z)<<"...."<<std::endl;
    
     std::cout<<std::right<<std::setw(z)<<"...**."<<std::left<<std::setw(z)<<"......"<<std::endl;
    
    std::cout<<std::right<<std::setw(z)<<"..****"<<std::left<<std::setw(z)<<"******"<<std::endl;        
    
    std::cout<<std::right<<std::setw(z)<<"******"<<std::left<<std::setw(z)<<"******"<<std::endl;
    
    std::cout<<std::right<<std::setw(z)<<"......"<<std::left<<std::setw(z)<<"......"<<std::endl;
    
}

#endif