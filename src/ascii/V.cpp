#include "brumski_py/ascii/__V.hpp"
	 
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
