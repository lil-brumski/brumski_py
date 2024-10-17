#ifndef LETTER_C
#define LETTER_C

#include <iostream>
#include <iomanip>
	 
void C(){
    int c = 30;
    std::cout<<std::setfill('.');
    
    std::cout<<std::right<<std::setw(c)<<"........"<<std::left<<std::setw(c)<<"........"<<std::endl;
    
    //Beginning 
    
    std::cout<<std::right<<std::setw(c)<<"  ******"<<std::left<<std::setw(c)<<"************"<<std::endl;
     
     std::cout<<std::right<<std::setw(c)<<" ****"<<std::left<<std::setw(c)<<"              "<<std::endl;
    
    for(int x = 0; x < 5; x++){
           std::cout<<std::right<<std::setw(c)<<"****"<<std::left<<std::setw(c)<<"               "<<std::endl;
    }
    
    for(int x = 0; x < 2; x++){
          std::cout<<std::right<<std::setw(c)<<" ****"<<std::left<<std::setw(c)<<"               "<<std::endl;
    }
    
    std::cout<<std::right<<std::setw(c)<<"  *******"<<std::left<<std::setw(c)<<"************"<<std::endl;
     
       std::cout<<std::right<<std::setw(c)<<"........"<<std::left<<std::setw(c)<<"........"<<std::endl;
    
}

#endif