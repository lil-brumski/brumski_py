#include "brumski_py/ascii/__SPACE.hpp"
	 
void SPACES(){
    int spaces = 30;
    std::cout<<std::setfill('.');
    
    for(int x = 0; x < 12; x++){
          std::cout<<std::right<<std::setw(spaces)<<"......"<<std::left<<std::setw(spaces)<<"......"<<std::endl;
    }
    
}