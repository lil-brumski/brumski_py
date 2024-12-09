#pragma once

#include <string>
#include <sstream>
#include <iomanip>

namespace brumski_py{

 class Integration{
 private:
   float number = 0.0f;
   char variable;
   float power = 0.0f;
 public:
   Integration(const float& number, const char& variable, const float& power){
      this->number = number;
      this->variable = variable;
      this->power = power;
   }
   std::string intg();
 };

}
