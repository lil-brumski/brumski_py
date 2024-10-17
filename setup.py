"""
MIT License

Copyright (c) 2024 David Tamaratare Oghenebrume

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
"""
import os
import subprocess 

if not os.path.exists('pybind11'):
   print("'pybind11' isn't downloaded, downloading it now.")
   subprocess.run(["git", "clone", "https://github.com/pybind/pybind11.git"])
   print("Process complete!")
else:
   print("'pybind11' is already installed, nice, proceeding to next task...")  
    

#For ascii    
if not os.path.exists('ascii/pybind11'):
   subprocess.run(["cp", "-rf", "pybind11/", "ascii/"])
   if not os.path.exists('ascii/build'):
      subprocess.run(["mkdir", "build"], cwd = "ascii")
      subprocess.run(["cmake", ".."], cwd = "ascii/build")
      subprocess.run(["cmake", "--build", "."], cwd = "ascii/build")
      subprocess.run(["rm", "-rf", "pybind11"], cwd = "ascii")
   else:  
      subprocess.run(["rm", "-rf", "build"], cwd = "ascii")
      subprocess.run(["mkdir", "build"], cwd = "ascii")
      subprocess.run(["cmake", ".."], cwd = "ascii/build")
      subprocess.run(["cmake", "--build", "."], cwd = "ascii/build")
      subprocess.run(["rm", "-rf", "pybind11"], cwd = "ascii")
else:
   if not os.path.exists('ascii/build'):
      subprocess.run(["mkdir", "build"], cwd = "ascii")
      subprocess.run(["rm", "-rf", "build"], cwd = "ascii")
      subprocess.run(["mkdir", "build"], cwd = "ascii")
      subprocess.run(["cmake", ".."], cwd = "ascii/build")
      subprocess.run(["cmake", "--build", "."], cwd = "ascii/build")
      subprocess.run(["rm", "-rf", "pybind11"], cwd = "ascii")
   else:  
      subprocess.run(["rm", "-rf", "build"], cwd = "ascii")
      subprocess.run(["mkdir", "build"], cwd = "ascii")
      subprocess.run(["cmake", ".."], cwd = "ascii/build")
      subprocess.run(["cmake", "--build", "."], cwd = "ascii/build")
      subprocess.run(["rm", "-rf", "pybind11"], cwd = "ascii")


#For school   
if not os.path.exists('school/cgpa/pybind11'):
   subprocess.run(["cp", "-rf", "pybind11", "school/cgpa"])
   if not os.path.exists('school/cgpa/build'):
      subprocess.run(["mkdir", "build"], cwd = "school/cgpa")
      subprocess.run(["cmake", ".."], cwd = "school/cgpa/build")
      subprocess.run(["cmake", "--build", "."], cwd = "school/cgpa/build")
      subprocess.run(["rm", "-rf", "pybind11"], cwd = "school/cgpa")
   else:  
      subprocess.run(["rm", "-rf", "build"], cwd = "school/cgpa")
      subprocess.run(["mkdir", "build"], cwd = "school/cgpa")
      subprocess.run(["cmake", ".."], cwd = "school/cgpa/build")
      subprocess.run(["cmake", "--build", "."], cwd = "school/cgpa/build")
      subprocess.run(["rm", "-rf", "pybind11"], cwd = "school/cgpa")
else:
   if not os.path.exists('school/cgpa/build'):
      subprocess.run(["mkdir", "build"], cwd = "school/cgpa")
      subprocess.run(["cmake", ".."], cwd = "school/cgpa/build")
      subprocess.run(["cmake", "--build", "."], cwd = "school/cgpa/build")
      subprocess.run(["rm", "-rf", "pybind11"], cwd = "school/cgpa")
   else:  
      subprocess.run(["rm", "-rf", "build"], cwd = "school/cgpa")
      subprocess.run(["mkdir", "build"], cwd = "school/cgpa")
      subprocess.run(["cmake", ".."], cwd = "school/cgpa/build")
      subprocess.run(["cmake", "--build", "."], cwd = "school/cgpa/build")
      subprocess.run(["rm", "-rf", "pybind11"], cwd = "school/cgpa")
      
      
#For maths.area2dshapes 
if not os.path.exists('maths/area2dshapes/pybind11'):
   subprocess.run(["cp", "-rf", "pybind11", "maths/area2dshapes"])
   if not os.path.exists('maths/area2dshapes/build'):
      subprocess.run(["mkdir", "build"], cwd = "maths/area2dshapes")
      subprocess.run(["cmake", ".."], cwd = "maths/area2dshapes/build")
      subprocess.run(["cmake", "--build", "."], cwd = "maths/area2dshapes/build")
      subprocess.run(["rm", "-rf", "pybind11"], cwd = "maths/area2dshapes")
   else:  
      subprocess.run(["rm", "-rf", "build"], cwd = "maths/area2dshapes")
      subprocess.run(["mkdir", "build"], cwd = "maths/area2dshapes")
      subprocess.run(["cmake", ".."], cwd = "maths/area2dshapes/build")
      subprocess.run(["cmake", "--build", "."], cwd = "maths/area2dshapes/build")
      subprocess.run(["rm", "-rf", "pybind11"], cwd = "maths/area2dshapes")
else:
   if not os.path.exists('maths/area2dshapes/build'):
      subprocess.run(["mkdir", "build"], cwd = "maths/area2dshapes")
      subprocess.run(["cmake", ".."], cwd = "maths/area2dshapes/build")
      subprocess.run(["cmake", "--build", "."], cwd = "maths/area2dshapes/build")
      subprocess.run(["rm", "-rf", "pybind11"], cwd = "maths/area2dshapes")
   else:  
      subprocess.run(["rm", "-rf", "build"], cwd = "maths/area2dshapes")
      subprocess.run(["mkdir", "build"], cwd = "maths/area2dshapes")
      subprocess.run(["cmake", ".."], cwd = "maths/area2dshapes/build")
      subprocess.run(["cmake", "--build", "."], cwd = "maths/area2dshapes/build")
      subprocess.run(["rm", "-rf", "pybind11"], cwd = "maths/area2dshapes")
      
      
#For maths.grade_calculator
if not os.path.exists('maths/grade_calculator/pybind11'):
   subprocess.run(["cp", "-rf", "pybind11", "maths/grade_calculator"])
   if not os.path.exists('maths/grade_calculator/build'):
      subprocess.run(["mkdir", "build"], cwd = "maths/grade_calculator")
      subprocess.run(["cmake", ".."], cwd = "maths/grade_calculator/build")
      subprocess.run(["cmake", "--build", "."], cwd = "maths/grade_calculator/build")
      subprocess.run(["rm", "-rf", "pybind11"], cwd = "maths/grade_calculator")
   else:  
      subprocess.run(["rm", "-rf", "build"], cwd = "maths/grade_calculator")
      subprocess.run(["mkdir", "build"], cwd = "maths/grade_calculator")
      subprocess.run(["cmake", ".."], cwd = "maths/grade_calculator/build")
      subprocess.run(["cmake", "--build", "."], cwd = "maths/grade_calculator/build")
      subprocess.run(["rm", "-rf", "pybind11"], cwd = "maths/grade_calculator")
else:
   if not os.path.exists('maths/calculator/build'):
      subprocess.run(["mkdir", "build"], cwd = "maths/grade_calculator")
      subprocess.run(["cmake", ".."], cwd = "maths/grade_calculator/build")
      subprocess.run(["cmake", "--build", "."], cwd = "maths/grade_calculator/build")
      subprocess.run(["rm", "-rf", "pybind11"], cwd = "maths/grade_calculator")
   else:  
      subprocess.run(["rm", "-rf", "build"], cwd = "maths/grade_calculator")
      subprocess.run(["mkdir", "build"], cwd = "maths/grade_calculator")
      subprocess.run(["cmake", ".."], cwd = "maths/grade_calculator/build")
      subprocess.run(["cmake", "--build", "."], cwd = "maths/grade_calculator/build")
      subprocess.run(["rm", "-rf", "pybind11"], cwd = "maths/grade_calculator")
      
      
#For maths.derivatives
if not os.path.exists('maths/derivatives/pybind11'):
   subprocess.run(["cp", "-rf", "pybind11", "maths/derivatives"])
   if not os.path.exists('maths/derivatives/build'):
      subprocess.run(["mkdir", "build"], cwd = "maths/derivatives")
      subprocess.run(["cmake", ".."], cwd = "maths/derivatives/build")
      subprocess.run(["cmake", "--build", "."], cwd = "maths/derivatives/build")
      subprocess.run(["rm", "-rf", "pybind11"], cwd = "maths/derivatives")
   else:  
      subprocess.run(["rm", "-rf", "build"], cwd = "maths/derivatives")
      subprocess.run(["mkdir", "build"], cwd = "maths/derivatives")
      subprocess.run(["cmake", ".."], cwd = "maths/derivatives/build")
      subprocess.run(["cmake", "--build", "."], cwd = "maths/derivatives/build")
      subprocess.run(["rm", "-rf", "pybind11"], cwd = "maths/derivatives")
else:
   if not os.path.exists('maths/derivatives/build'):
      subprocess.run(["mkdir", "build"], cwd = "maths/derivatives")
      subprocess.run(["cmake", ".."], cwd = "maths/derivatives/build")
      subprocess.run(["cmake", "--build", "."], cwd = "maths/derivatives/build")
      subprocess.run(["rm", "-rf", "pybind11"], cwd = "maths/derivatives")
   else:  
      subprocess.run(["rm", "-rf", "build"], cwd = "maths/derivatives")
      subprocess.run(["mkdir", "build"], cwd = "maths/derivatives")
      subprocess.run(["cmake", ".."], cwd = "maths/derivatives/build")
      subprocess.run(["cmake", "--build", "."], cwd = "maths/derivatives/build")
      subprocess.run(["rm", "-rf", "pybind11"], cwd = "maths/derivatives")
      
      
#For math.integration
if not os.path.exists('maths/integration/pybind11'):
   subprocess.run(["cp", "-rf", "pybind11", "maths/integration"])
   if not os.path.exists('maths/integration/build'):
      subprocess.run(["mkdir", "build"], cwd = "maths/integration")
      subprocess.run(["cmake", ".."], cwd = "maths/integration/build")
      subprocess.run(["cmake", "--build", "."], cwd = "maths/integration/build")
      subprocess.run(["rm", "-rf", "pybind11"], cwd = "maths/integration")
   else:  
      subprocess.run(["rm", "-rf", "build"], cwd = "maths/integration")
      subprocess.run(["mkdir", "build"], cwd = "maths/integration")
      subprocess.run(["cmake", ".."], cwd = "maths/integration/build")
      subprocess.run(["cmake", "--build", "."], cwd = "maths/integration/build")
      subprocess.run(["rm", "-rf", "pybind11"], cwd = "maths/integration")
else:
   if not os.path.exists('maths/integration/build'):
      subprocess.run(["mkdir", "build"], cwd = "maths/integration")
      subprocess.run(["cmake", ".."], cwd = "maths/integration/build")
      subprocess.run(["cmake", "--build", "."], cwd = "maths/integration/build")
      subprocess.run(["rm", "-rf", "pybind11"], cwd = "maths/integration")
   else:  
      subprocess.run(["rm", "-rf", "build"], cwd = "maths/integration")
      subprocess.run(["mkdir", "build"], cwd = "maths/integration")
      subprocess.run(["cmake", ".."], cwd = "maths/integration/build")
      subprocess.run(["cmake", "--build", "."], cwd = "maths/integration/build")
      subprocess.run(["rm", "-rf", "pybind11"], cwd = "maths/integration")