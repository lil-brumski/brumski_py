#include <brumski_py/math/grade_calculator.hpp>

namespace brumski_py::math {
        
char grade::calculator(const int& score){

            if(score >= 70 && score <= 100){
                return 'A';
                }
            else if(score >= 60 && score <= 69){
                return 'B';
                }
            else if(score >= 50 && score <= 59){
                return 'C';
                }
            else if(score >= 45 && score <= 49){
                return 'D';
                }
            else if(score >= 40 && score <= 44){
                return 'E';     
                }
            else if(score >= 0 && score <= 39){
                return 'F';
                }

              return 'X';  
}  
         
int grade::point(const char& grade, const int& course_unit){
            
            if(grade == 'A'){
                return 5 * course_unit;
                }
            else if(grade == 'B'){
                return 4 * course_unit;
                }
            else if(grade == 'C'){
                return 3 * course_unit;
                }
            else if(grade == 'D'){
                return 2 * course_unit;
                }
            else if(grade == 'E'){
                return 1 * course_unit;
                }   
            else if(grade == 'F'){
                return 0 * course_unit;
                }  
                
             return 44*23;
}

}

