#ifndef LETTER_A
#define LETTER_A

#include <iostream>
#include <iomanip>

void A(){
    int a = 30;
    std::cout<<std::setfill('.');
    
    std::cout<<std::right<<std::setw(a)<<"......"<<std::left<<std::setw(a)<<"......"<<std::endl;
              
    //Beginning
    std::cout<<std::right<<std::setw(a)<<"*"<<std::left<<std::setw(a)<<"*"<<std::endl;
    
     std::cout<<std::right<<std::setw(a)<<"**"<<std::left<<std::setw(a)<<"**"<<std::endl;
     
      std::cout<<std::right<<std::setw(a)<<"***"<<std::left<<std::setw(a)<<"***"<<std::endl;
      
       std::cout<<std::right<<std::setw(a)<<"*** "<<std::left<<std::setw(a)<<" ***"<<std::endl;
       
        std::cout<<std::right<<std::setw(a)<<"***  "<<std::left<<std::setw(a)<<"  ***"<<std::endl;
        
       std::cout<<std::right<<std::setw(a)<<"******"<<std::left<<std::setw(a)<<"******"<<std::endl; 
       
       for(int x = 0; x < 4; x++){
             std::cout<<std::right<<std::setw(a)<<"****  "<<std::left<<std::setw(a)<<"  ****"<<std::endl;
       }       
       //End
       
       std::cout<<std::right<<std::setw(a)<<"......"<<std::left<<std::setw(a)<<"......"<<std::endl;
       
}

#endif