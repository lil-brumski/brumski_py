#ifndef LETTER_K
#define LETTER_K

#include <iostream>
#include <iomanip>
	 
void K(){
    int k = 30;
    std::cout<<std::setfill('.');
    
    std::cout<<std::right<<std::setw(k)<<"......"<<std::left<<std::setw(k)<<"......"<<std::endl;
    
    std::cout<<std::right<<std::setw(k)<<"**...."<<std::left<<std::setw(k)<<"......**"<<std::endl;
    
     std::cout<<std::right<<std::setw(k)<<"**...."<<std::left<<std::setw(k)<<"....**.."<<std::endl;
     
     std::cout<<std::right<<std::setw(k)<<"**...."<<std::left<<std::setw(k)<<"..**...."<<std::endl;
     
       std::cout<<std::right<<std::setw(k)<<"**...."<<std::left<<std::setw(k)<<"**......"<<std::endl;
       
       std::cout<<std::right<<std::setw(k)<<"******"<<std::left<<std::setw(k)<<"........"<<std::endl;
       
     std::cout<<std::right<<std::setw(k)<<"**...."<<std::left<<std::setw(k)<<"**........"<<std::endl;
     
    std::cout<<std::right<<std::setw(k)<<"**...."<<std::left<<std::setw(k)<<"..**......"<<std::endl;
     
     std::cout<<std::right<<std::setw(k)<<"**...."<<std::left<<std::setw(k)<<"....**...."<<std::endl;
     
       std::cout<<std::right<<std::setw(k)<<"**...."<<std::left<<std::setw(k)<<"......**.."<<std::endl;

        std::cout<<std::right<<std::setw(k)<<"**...."<<std::left<<std::setw(k)<<"........**"<<std::endl;
        
       std::cout<<std::right<<std::setw(k)<<"......"<<std::left<<std::setw(k)<<"......"<<std::endl; 
        
}

#endif