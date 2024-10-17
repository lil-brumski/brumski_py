#ifndef LETTER_W
#define LETTER_W

#include <iostream>
#include <iomanip>
	 
void W(){
    int w = 30;
    std::cout<<std::setfill('.');
    
    std::cout<<std::right<<std::setw(w)<<"........"<<std::left<<std::setw(w)<<"........"<<std::endl;
    
    for(int x = 0; x < 5; x++){
          std::cout<<std::right<<std::setw(w)<<"***....."<<std::left<<std::setw(w)<<".....***"<<std::endl;
    }
    
    std::cout<<std::right<<std::setw(w)<<"**.....*"<<std::left<<std::setw(w)<<"*.....**"<<std::endl;
    
    std::cout<<std::right<<std::setw(w)<<"**....**"<<std::left<<std::setw(w)<<"**....**"<<std::endl;
    
    std::cout<<std::right<<std::setw(w)<<"**...**."<<std::left<<std::setw(w)<<".**...**"<<std::endl;
  
     std::cout<<std::right<<std::setw(w)<<"**..**.."<<std::left<<std::setw(w)<<"..**..**"<<std::endl;
     
    std::cout<<std::right<<std::setw(w)<<"***....."<<std::left<<std::setw(w)<<".....***"<<std::endl;
        
    std::cout<<std::right<<std::setw(w)<<"........"<<std::left<<std::setw(w)<<"........"<<std::endl;
    
}

#endif