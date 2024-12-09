#ifndef DERIVATIVES 
#define DERIVATIVES 

#include <string>

namespace brumski_py{

  class Differential{
  private:
    int number = 0;
    char variable;
    int power = 0;

  public:
    Differential(const int& number, const char& variable, const int& power){
      this->number = number;
      this->variable = variable;
      this->power = power;
    }

    std::string diff();
       
};

}
#endif