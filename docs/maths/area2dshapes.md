# Documentation for the `maths/area2dshapes` subdirectory:

Functions and classes in this submodule:
* square()- Takes in the length of each side of a square {a single integer or double}, and returns the area.
* rectangle()- Takes in the length and width of a rectangle {two integer or double}, and returns the area.
* circle()- Takes in the radius of the circle {an integer or double}, and returns the area.

How to use:

```python
   from brumski_py import area2dshapes
  
   square_length = int(input("Enter the length of each side of the square: "))
   square_area = area2dshapes.square(square_length)
   print(f"The area of this square is {square_area}.")

   rectangle_length = int(input("Enter the length of the rectangle: "))
   rectangle_width = int(input("Enter the length of the rectangle: "))
   rectangle_area = area2dshapes.rectangle(rectangle_length, rectangle_width)
   print(f"The area of this rectangle is {rectangle_area}.")

   circle_radius = int(input("Enter the radius of the circle: "))
   circle_area = area2dshapes.square(circle_radius)
   print(f"The area of this circle is {circle_area}.")
```
