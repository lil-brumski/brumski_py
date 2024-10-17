#ifndef LETTER_R
#define LETTER_R

#include <iostream>
#include <iomanip>

void R(){
    int r = 30;
    std::cout<<std::setfill('.');
    
    std::cout<<std::right<<std::setw(r)<<"......"<<std::left<<std::setw(r)<<"......"<<std::endl;
    
    //Beginning
    
    std::cout<<std::right<<std::setw(r)<<"*****"<<std::left<<std::setw(r)<<"**** "<<std::endl;
    
    std::cout<<std::right<<std::setw(r)<<"*****"<<std::left<<std::setw(r)<<"*****"<<std::endl;
    
    for(int x = 0; x < 2; x++){
     std::cout<<std::right<<std::setw(r)<<"***  "<<std::left<<std::setw(r)<<"  ***"<<std::endl;
    }
    
    std::cout<<std::right<<std::setw(r)<<"*****"<<std::left<<std::setw(r)<<"**** "<<std::endl;
    
    std::cout<<std::right<<std::setw(r)<<"*****"<<std::left<<std::setw(r)<<"*****"<<std::endl;
    
    for(int x = 0; x < 4; x++){
    std::cout<<std::right<<std::setw(r)<<"***  "<<std::left<<std::setw(r)<<"   ***"<<std::endl;
    }    
    
   std::cout<<std::right<<std::setw(r)<<"......"<<std::left<<std::setw(r)<<"......"<<std::endl; 
    
}

#endif