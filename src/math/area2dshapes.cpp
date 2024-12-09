#include <brumski_py/math/area2dshapes.hpp>

namespace brumski_py::math {
 
double area2dshapes::square(double length) {
     return std::pow(length, 2);   
}
        
double area2dshapes::rectangle(double length, double width) {
     return length * width;
}
        
double area2dshapes::triangle(double base, double height) {
     return 0.5 * base * height;
}
        
double area2dshapes::circle(double radius) {
     return M_PI * std::pow(radius, 2);
}
        
double area2dshapes::ellipse(double major_axis, double minor_axis) {
     return M_PI * major_axis * minor_axis;
        }
      
double area2dshapes::parallelogram(double base, double height){
     return base * height;
}
     
double area2dshapes::trapezoid(double base1, double base2, double height){
     return 0.5 * (base1 + base2) * height;
}
      
double area2dshapes::rhombus(double diagonal1, double diagonal2){
     return 0.5 * diagonal1 * diagonal2;
}
     
double area2dshapes::kite(double diagonal1, double diagonal2){
    return 0.5 * diagonal1 * diagonal2;
}
    
} 