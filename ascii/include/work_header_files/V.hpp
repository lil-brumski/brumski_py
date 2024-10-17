#ifndef LETTER_V
#define LETTER_V

#include <iostream>
#include <iomanip>
	 
void V(){
    int v = 30;
    std::cout<<std::setfill('.');
    
    std::cout<<std::right<<std::setw(v)<<".........."<<std::left<<std::setw(v)<<".........."<<std::endl;
    
    std::cout<<std::right<<std::setw(v)<<"**........."<<std::left<<std::setw(v)<<".........**"<<std::endl;
    
    
    std::cout<<std::right<<std::setw(v)<<"**........"<<std::left<<std::setw(v)<<"........**"<<std::endl;
    
    std::cout<<std::right<<std::setw(v)<<".**......."<<std::left<<std::setw(v)<<".......**."<<std::endl;
    
     std::cout<<std::right<<std::setw(v)<<"..**......"<<std::left<<std::setw(v)<<"......**.."<<std::endl;
     
       std::cout<<std::right<<std::setw(v)<<"...**....."<<std::left<<std::setw(v)<<".....**..."<<std::endl;
       
       std::cout<<std::right<<std::setw(v)<<"....**...."<<std::left<<std::setw(v)<<"....**...."<<std::endl;
       
        std::cout<<std::right<<std::setw(v)<<".....**..."<<std::left<<std::setw(v)<<"...**....."<<std::endl;
       
        std::cout<<std::right<<std::setw(v)<<"......**.."<<std::left<<std::setw(v)<<"..**......"<<std::endl;
       
       std::cout<<std::right<<std::setw(v)<<".......**."<<std::left<<std::setw(v)<<".**......."<<std::endl;
       
       std::cout<<std::right<<std::setw(v)<<"........**"<<std::left<<std::setw(v)<<"**........"<<std::endl;      
       
        std::cout<<std::right<<std::setw(v)<<".........."<<std::left<<std::setw(v)<<".........."<<std::endl;
     
}

#endif