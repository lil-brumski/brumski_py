#include <brumski_py/math/integration.hpp>

namespace brumski_py{

std::string Integration::intg(){
     std::string result;
     float var = number / (power + 1);
     std::stringstream ss;
     ss << std::fixed << std::setprecision(2) << var;
     std::string holder = ss.str();
      
     if (power + 1 == 1){
        result = holder + variable + " +C";
     }
     else{
        result = holder + variable + "^" + std::to_string(static_cast<int>(power + 1)) + " +C";    
     }  

      return result;
} 

}
