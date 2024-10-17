#ifndef LETTER_N
#define LETTER_N

#include <iostream>
#include <iomanip>
	 
void N(){
    int n = 30;
    std::cout<<std::setfill('.');
    
    std::cout<<std::right<<std::setw(n)<<"........."<<std::left<<std::setw(n)<<"........."<<std::endl;
    
    std::cout<<std::right<<std::setw(n)<<"****....."<<std::left<<std::setw(n)<<"......***"<<std::endl;
    
    std::cout<<std::right<<std::setw(n)<<"***.**..."<<std::left<<std::setw(n)<<"......***"<<std::endl;
    
    std::cout<<std::right<<std::setw(n)<<"***..**.."<<std::left<<std::setw(n)<<"......***"<<std::endl;
    
    std::cout<<std::right<<std::setw(n)<<"***...**."<<std::left<<std::setw(n)<<"......***"<<std::endl;
    
    std::cout<<std::right<<std::setw(n)<<"***....**"<<std::left<<std::setw(n)<<"......***"<<std::endl;
        
    std::cout<<std::right<<std::setw(n)<<"***.....*"<<std::left<<std::setw(n)<<"*.....***"<<std::endl;
    
    std::cout<<std::right<<std::setw(n)<<"***......"<<std::left<<std::setw(n)<<"**....***"<<std::endl;
    
     std::cout<<std::right<<std::setw(n)<<"***......"<<std::left<<std::setw(n)<<".**...***"<<std::endl;
    
      std::cout<<std::right<<std::setw(n)<<"***......"<<std::left<<std::setw(n)<<"..**..***"<<std::endl;
      
      std::cout<<std::right<<std::setw(n)<<"***......"<<std::left<<std::setw(n)<<"...**.***"<<std::endl;
      
       std::cout<<std::right<<std::setw(n)<<"........."<<std::left<<std::setw(n)<<"........."<<std::endl;
    
}

#endif