# Documentation for the `maths/derivatives` subdirectory:

Functions and classes in this submodule:
* Differential- This is a class that contains the differentiating function. The class constructor takes in three inputs of the function to be differentiated; the constant, the variable you're differentiating with respect to, and the power of the function e.g 5, y, 2.

* diff()- This returns the derivative of the function inputted in the class constructor.

How to use:

```python
   from brumski_py import Differential

   derive: Differential = Differential(5, 'z', 2)
   print(f"The derivative of 5z² is {derive.diff()}.")
```
   
