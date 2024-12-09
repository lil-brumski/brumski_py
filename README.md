# brumski_py

A Python Library made using C++ (pybind11)

This library is still under construction, some features and documentation are still missing. You'd also need to build this library from scratch...When I get a Windows machine I'll find a way to distribute the Python modules for the following platforms: Windows, Linux, and Android.

To get this library on your device, you'd need to get some packages first using:

Ubuntu/Debian
```bash
   $ apt install clang cmake python git
```

Arch
```bash
   $ pacman install clang cmake python git
```
Then to download this library, do this:

```bash
   $ git clone https://github.com/lil-brumski/brumski_py.git
   $ cd brumski_py
   $ mkdir build && cd build
   $ cmake .. -DADD_DER_INT=ON
   $ make
```

Code example:

```python
   import brumski_py


   brumski_py.name()

   area = brumski_py.area2dshapes.square(3)
   print(f"The area is {area}")

   derive = brumski_py.Differential(5, 'x', 2)
   print(f"The derivative of 5x² is {derive.diff()}")

   print(f"You had a/an {brumski_py.calculator(75)}")

   result = brumski_py.course_grade("MTH101")
   print(f"You had a/an {result}")
```

You download and place this repo in the directory of your project.

# License

This project uses the MIT License, see below for more info:

[LICENSE](https://github.com/lil-brumski/brumski_py/blob/main/LICENSE)

# ACKNOWLEDGEMENTS:

This project uses [Pybind11](https://github.com/pybind/pybind11)

**Copyright Notice**:

Copyright © 2016 Wenzel Jacob <wenzel.jacob@epfl.ch>, All rights reserved.
