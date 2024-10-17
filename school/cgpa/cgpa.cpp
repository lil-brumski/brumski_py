#include "grade_calculator.hpp"
#include <cmath>
#include <iomanip>
#include <stdexcept>
#include <pybind11/pybind11.h>

namespace brumski_cpp::school{
    
    //A char function that takes in the course's name and returns its grade.'
    char course_grade(const std::string& name){    
         
        //Score is  less than 0 so the user will be in the while loop below.
        float score = -5.0f;
    
        while(true){           
            if(score < 0 || score > 100){
                //This makes sure the user enters correct data type which is float.
                score = brumski_cpp::math::input<float>("Enter your "+name+" score: ");
             }
             else{
                 //When the score is greater than 0 or less than 100 the loop will be broken.
                 break;
             }
        }    
         
        //Rounds the score to the nearest whole number.
        score = std::round(score);    
        
        //The function that this variable takes in converts the numerical score into an alphabetic grade (A-F).
        char grade = brumski_cpp::math::grade::calculator(score);    
    
        return grade;
    
        }
    
    //This function takes in the user's grade for that course and the course's course units.
    //It returns the grade point of that course.'
    int course_grade_point(const char& grade, const int& course_units){
        //This function below does the actual work. Read the documentation for "grade_point.hpp."
        return brumski_cpp::math::grade::point(grade, course_units);
    }
    
    //This function takes in the total cumulative units and total course units and then returns the GPA or CGPA of the student.
    float semester_GPA(const float& cumulative_units, const int& total_course_units){
        
        float gpa = 0.0f;
        
        try{
            //If the total course unit is 0 it will lead to a runtime error. E.g 100/0.
            if(total_course_units <= 0){
                throw std::runtime_error("Total course units cannot be zero!");
            }
            //If the total course units isn't 0 then this code below will run.
            gpa = cumulative_units / total_course_units;
        }
        catch(const std::exception& error){
            std::cerr << "Error: " << error.what() << std::endl;
        }                
        
        //This line makes sure the GPA/CGPA value is in two decimal places.
        std::cout << std::fixed << std::setprecision(2) << std::endl;
        
        //Note, if the total course units is 0 then the GPA/CGPA will be 0.00! Be careful not to do that.
        return gpa;
    }
    
}

PYBIND11_MODULE(cgpa, m){
   m.def("course_grade", &brumski_cpp::school::course_grade);
   m.def("course_grade_point", &brumski_cpp::school::course_grade_point);
   m.def("semester_GPA", &brumski_cpp::school::semester_GPA);
}
