#include "brumski_py/ascii/__F.hpp"
	 
void F(){
    int f = 30;
    std::cout<<std::setfill('.');
    
    std::cout<<std::right<<std::setw(f)<<"......"<<std::left<<std::setw(f)<<"......"<<std::endl;
    
     for(int x = 0; x < 2; x++){
           std::cout<<std::right<<std::setw(f)<<"*******"<<std::left<<std::setw(f)<<"*******"<<std::endl;
     }
      
      for(int x = 0; x < 2; x++){
          std::cout<<std::right<<std::setw(f)<<"***    "<<std::left<<std::setw(f)<<"       "<<std::endl;
      }
      
    for(int x = 0; x < 2; x++){
           std::cout<<std::right<<std::setw(f)<<"*******"<<std::left<<std::setw(f)<<"*****.."<<std::endl;
     }
     
     for(int x = 0; x < 3; x++){
          std::cout<<std::right<<std::setw(f)<<"***    "<<std::left<<std::setw(f)<<"       "<<std::endl;
      }
      
      std::cout<<std::right<<std::setw(f)<<"***...."<<std::left<<std::setw(f)<<"......."<<std::endl;
      
      std::cout<<std::right<<std::setw(f)<<"......"<<std::left<<std::setw(f)<<"......"<<std::endl;
    
}

