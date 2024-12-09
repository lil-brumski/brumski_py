#include <brumski_py/math/derivatives.hpp>

namespace brumski_py{

std::string Differential::diff(){
      std::string result;
  
      if(power != 2){
        result = std::to_string(power * number) + "" + variable + "^" + std::to_string(power - 1);  
      }
      else{
        result = std::to_string(power * number) + "" + variable;
      }
    
      return result;
}

}