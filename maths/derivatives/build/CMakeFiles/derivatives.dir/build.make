# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /data/data/com.termux/files/usr/bin/sh

# The CMake executable.
CMAKE_COMMAND = /data/data/com.termux/files/usr/bin/cmake

# The command to remove a file.
RM = /data/data/com.termux/files/usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /storage/emulated/0/Documents/Cxxdroid/BRUMSKI_LIBRARIES/brumski_py/math/derivatives

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /storage/emulated/0/Documents/Cxxdroid/BRUMSKI_LIBRARIES/brumski_py/math/derivatives/build

# Include any dependencies generated for this target.
include CMakeFiles/derivatives.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/derivatives.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/derivatives.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/derivatives.dir/flags.make

CMakeFiles/derivatives.dir/derivatives.cpp.o: CMakeFiles/derivatives.dir/flags.make
CMakeFiles/derivatives.dir/derivatives.cpp.o: /storage/emulated/0/Documents/Cxxdroid/BRUMSKI_LIBRARIES/brumski_py/math/derivatives/derivatives.cpp
CMakeFiles/derivatives.dir/derivatives.cpp.o: CMakeFiles/derivatives.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/storage/emulated/0/Documents/Cxxdroid/BRUMSKI_LIBRARIES/brumski_py/math/derivatives/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/derivatives.dir/derivatives.cpp.o"
	/data/data/com.termux/files/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/derivatives.dir/derivatives.cpp.o -MF CMakeFiles/derivatives.dir/derivatives.cpp.o.d -o CMakeFiles/derivatives.dir/derivatives.cpp.o -c /storage/emulated/0/Documents/Cxxdroid/BRUMSKI_LIBRARIES/brumski_py/math/derivatives/derivatives.cpp

CMakeFiles/derivatives.dir/derivatives.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/derivatives.dir/derivatives.cpp.i"
	/data/data/com.termux/files/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /storage/emulated/0/Documents/Cxxdroid/BRUMSKI_LIBRARIES/brumski_py/math/derivatives/derivatives.cpp > CMakeFiles/derivatives.dir/derivatives.cpp.i

CMakeFiles/derivatives.dir/derivatives.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/derivatives.dir/derivatives.cpp.s"
	/data/data/com.termux/files/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /storage/emulated/0/Documents/Cxxdroid/BRUMSKI_LIBRARIES/brumski_py/math/derivatives/derivatives.cpp -o CMakeFiles/derivatives.dir/derivatives.cpp.s

# Object files for target derivatives
derivatives_OBJECTS = \
"CMakeFiles/derivatives.dir/derivatives.cpp.o"

# External object files for target derivatives
derivatives_EXTERNAL_OBJECTS =

derivatives.cpython-312.so: CMakeFiles/derivatives.dir/derivatives.cpp.o
derivatives.cpython-312.so: CMakeFiles/derivatives.dir/build.make
derivatives.cpython-312.so: /data/data/com.termux/files/usr/lib/libpython3.12.so
derivatives.cpython-312.so: CMakeFiles/derivatives.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/storage/emulated/0/Documents/Cxxdroid/BRUMSKI_LIBRARIES/brumski_py/math/derivatives/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared module derivatives.cpython-312.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/derivatives.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/derivatives.dir/build: derivatives.cpython-312.so
.PHONY : CMakeFiles/derivatives.dir/build

CMakeFiles/derivatives.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/derivatives.dir/cmake_clean.cmake
.PHONY : CMakeFiles/derivatives.dir/clean

CMakeFiles/derivatives.dir/depend:
	cd /storage/emulated/0/Documents/Cxxdroid/BRUMSKI_LIBRARIES/brumski_py/math/derivatives/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /storage/emulated/0/Documents/Cxxdroid/BRUMSKI_LIBRARIES/brumski_py/math/derivatives /storage/emulated/0/Documents/Cxxdroid/BRUMSKI_LIBRARIES/brumski_py/math/derivatives /storage/emulated/0/Documents/Cxxdroid/BRUMSKI_LIBRARIES/brumski_py/math/derivatives/build /storage/emulated/0/Documents/Cxxdroid/BRUMSKI_LIBRARIES/brumski_py/math/derivatives/build /storage/emulated/0/Documents/Cxxdroid/BRUMSKI_LIBRARIES/brumski_py/math/derivatives/build/CMakeFiles/derivatives.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/derivatives.dir/depend
