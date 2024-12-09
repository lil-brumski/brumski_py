#include "brumski_py/ascii/__X.hpp"
	 
void X(){
    int x = 30;
    std::cout<<std::setfill('.');
    
    std::cout<<std::right<<std::setw(x)<<"........"<<std::left<<std::setw(x)<<"........"<<std::endl;
    
     std::cout<<std::right<<std::setw(x)<<"**......"<<std::left<<std::setw(x)<<"......**"<<std::endl;
    
     std::cout<<std::right<<std::setw(x)<<".**....."<<std::left<<std::setw(x)<<".....**."<<std::endl;
    
    std::cout<<std::right<<std::setw(x)<<"..**...."<<std::left<<std::setw(x)<<"....**.."<<std::endl;
      
    std::cout<<std::right<<std::setw(x)<<"...**..."<<std::left<<std::setw(x)<<"...**....."<<std::endl;
    
    int deez = 0;
    while(deez < 2){
         std::cout<<std::right<<std::setw(x)<<".....***"<<std::left<<std::setw(x)<<"***......."<<std::endl;
         deez++;
    }
    
     std::cout<<std::right<<std::setw(x)<<".....**..."<<std::left<<std::setw(x)<<"...**....."<<std::endl;
    
     std::cout<<std::right<<std::setw(x)<<"..**...."<<std::left<<std::setw(x)<<"....**.."<<std::endl;
    
     std::cout<<std::right<<std::setw(x)<<".**....."<<std::left<<std::setw(x)<<".....**."<<std::endl;
    
    std::cout<<std::right<<std::setw(x)<<"**......"<<std::left<<std::setw(x)<<"......**"<<std::endl;
    
    std::cout<<std::right<<std::setw(x)<<"........"<<std::left<<std::setw(x)<<"........"<<std::endl;
}

    