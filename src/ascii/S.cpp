#include "brumski_py/ascii/__S.hpp"
	 
void S(){
    int s = 30;
    std::cout<<std::setfill('.');
    
    std::cout<<std::right<<std::setw(s)<<"......"<<std::left<<std::setw(s)<<"......"<<std::endl;
    
    std::cout<<std::right<<std::setw(s)<<"..******"<<std::left<<std::setw(s)<<"****...."<<std::endl;
    
     std::cout<<std::right<<std::setw(s)<<"**......"<<std::left<<std::setw(s)<<"....**"<<std::endl;
     
    for(int x = 0; x < 2; x++){
    std::cout<<std::right<<std::setw(s)<<"**......"<<std::left<<std::setw(s)<<"........"<<std::endl;
    }
    
    std::cout<<std::right<<std::setw(s)<<"..******"<<std::left<<std::setw(s)<<"****...."<<std::endl;
    
    for(int x = 0; x < 3; x++){
    std::cout<<std::right<<std::setw(s)<<"........"<<std::left<<std::setw(s)<<"....**"<<std::endl;
    }
    
    std::cout<<std::right<<std::setw(s)<<"**......"<<std::left<<std::setw(s)<<"....**"<<std::endl;
    
    std::cout<<std::right<<std::setw(s)<<"..******"<<std::left<<std::setw(s)<<"****...."<<std::endl;
    
     std::cout<<std::right<<std::setw(s)<<"......"<<std::left<<std::setw(s)<<"......"<<std::endl;
    
}

    