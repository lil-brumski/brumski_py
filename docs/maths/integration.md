# Documentation for the `maths/integration` subdirectory:

Functions and classes in this submodule:
* Integration- This is a class that contains the integration function. The class constructor takes in three inputs of the function to be integrated; the constant, the variable you're integrating with respect to, and the power of the function e.g 5, y, 2.

* intg()- This returns the derivative of the function inputted in the class constructor.

How to use:

```python
   from brumski_py import Integration 

   grate: Integration = Integration(5, 'z', 2)
   print(f"The integral of 5z² is {grate.intg()}.")
```
   