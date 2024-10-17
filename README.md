# brumski_py

A Python Library made using C++ (pybind11)

This library is still under construction, some features and documentation are still missing. You'd also need to build this library from scratch...When I get a Windows machine I'll find a way to distribute the Python modules for the following platforms: Windows, Linux, and Android.

To get this library on your device, you'd need to get some packages first using:

```bash
   $ pkg install clang cmake python git
```

Then to download this library, do this:

```bash
   $ git clone https://github.com/lil-brumski/brumski_py.git
   $ cd brumski_py
   $ git clone https://github.com/pybind/pybind11.git

   $ cp -r pybind11/ ascii/
   $ cd ascii
   $ mkdir build 
   $ cd build
   $ cmake ..
   $ cmake --build .
   $ cd ..
   $ rm -rf pybind11
   $ cd ..

   $ cp -r pybind11/ school/cgpa/
   $ cd school/cgpa
   $ mkdir build 
   $ cd build
   $ cmake ..
   $ cmake --build .
   $ cd ..
   $ rm -rf pybind11
   $ cd ../..

   $ cp -r pybind11/ math/area2dshapes
   $ cd math/area2dshapes
   $ mkdir build 
   $ cd build
   $ cmake ..
   $ cmake --build .
   $ cd ..
   $ rm -rf pybind11
   $ cd ../..

   $ cp -r pybind11/ math/derivatives 
   $ cd math/derivatives 
   $ mkdir build 
   $ cd build
   $ cmake ..
   $ cmake --build .
   $ cd ..
   $ rm -rf pybind11
   $ cd ../..

   $ cp -r pybind11/ math/integration 
   $ cd math/integration 
   $ mkdir build 
   $ cd build
   $ cmake ..
   $ cmake --build .
   $ cd ..
   $ rm -rf pybind11
   $ cd ../..

   $ cp -r pybind11/ math/grade_calculator
   $ cd math/grade_calculator
   $ mkdir build 
   $ cd build
   $ cmake ..
   $ cmake --build .
   $ cd ..
   $ rm -rf pybind11
   $ cd ../..
```

OR

```bash
   $ git clone https://github.com/lil-brumski/brumski_py.git
   $ cd brumski_py
   $ git clone https://github.com/pybind/pybind11.git
   $ python setup.py
```

# License

This project uses the MIT License, see below for more info:

[LICENSE](https://github.com/lil-brumski/brumski_py/blob/main/LICENSE)

# ACKNOWLEDGEMENTS:

This project uses [Pybind11](https://github.com/pybind/pybind11)

**Copyright Notice**:

Copyright © 2016 Wenzel Jacob <wenzel.jacob@epfl.ch>, All rights reserved.
