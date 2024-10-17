#ifndef LETTER_G
#define LETTER_G

#include <iostream>
#include <iomanip>
	 
void G(){
    int g = 30;
    std::cout<<std::setfill('.');
    
    
    std::cout<<std::right<<std::setw(g)<<"......"<<std::left<<std::setw(g)<<"......"<<std::endl;
    
     std::cout<<std::right<<std::setw(g)<<"  *****"<<std::left<<std::setw(g)<<"*******"<<std::endl;
     
     for(int x = 0; x < 3; x++){
          std::cout<<std::right<<std::setw(g)<<"**    "<<std::left<<std::setw(g)<<"       "<<std::endl;
     }
          
     std::cout<<std::right<<std::setw(g)<<"**    "<<std::left<<std::setw(g)<<"  *****"<<std::endl;
     
     std::cout<<std::right<<std::setw(g)<<" **    "<<std::left<<std::setw(g)<<"  **  **"<<std::endl;
     
     for(int x = 0; x < 3; x++){
     std::cout<<std::right<<std::setw(g)<<" **    "<<std::left<<std::setw(g)<<"      **"<<std::endl;
     }
     
      std::cout<<std::right<<std::setw(g)<<"  *****"<<std::left<<std::setw(g)<<"*******"<<std::endl;
     
      std::cout<<std::right<<std::setw(g)<<"......"<<std::left<<std::setw(g)<<"......"<<std::endl;
}

#endif