# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug

# Include any dependencies generated for this target.
include Subtraction/CMakeFiles/Substraction.dir/depend.make

# Include the progress variables for this target.
include Subtraction/CMakeFiles/Substraction.dir/progress.make

# Include the compile flags for this target's objects.
include Subtraction/CMakeFiles/Substraction.dir/flags.make

Subtraction/CMakeFiles/Substraction.dir/Subtraction.cpp.o: Subtraction/CMakeFiles/Substraction.dir/flags.make
Subtraction/CMakeFiles/Substraction.dir/Subtraction.cpp.o: ../Subtraction/Subtraction.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Subtraction/CMakeFiles/Substraction.dir/Subtraction.cpp.o"
	cd /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/Subtraction && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Substraction.dir/Subtraction.cpp.o -c /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/Subtraction/Subtraction.cpp

Subtraction/CMakeFiles/Substraction.dir/Subtraction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Substraction.dir/Subtraction.cpp.i"
	cd /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/Subtraction && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/Subtraction/Subtraction.cpp > CMakeFiles/Substraction.dir/Subtraction.cpp.i

Subtraction/CMakeFiles/Substraction.dir/Subtraction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Substraction.dir/Subtraction.cpp.s"
	cd /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/Subtraction && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/Subtraction/Subtraction.cpp -o CMakeFiles/Substraction.dir/Subtraction.cpp.s

Subtraction/CMakeFiles/Substraction.dir/Subtraction.cpp.o.requires:

.PHONY : Subtraction/CMakeFiles/Substraction.dir/Subtraction.cpp.o.requires

Subtraction/CMakeFiles/Substraction.dir/Subtraction.cpp.o.provides: Subtraction/CMakeFiles/Substraction.dir/Subtraction.cpp.o.requires
	$(MAKE) -f Subtraction/CMakeFiles/Substraction.dir/build.make Subtraction/CMakeFiles/Substraction.dir/Subtraction.cpp.o.provides.build
.PHONY : Subtraction/CMakeFiles/Substraction.dir/Subtraction.cpp.o.provides

Subtraction/CMakeFiles/Substraction.dir/Subtraction.cpp.o.provides.build: Subtraction/CMakeFiles/Substraction.dir/Subtraction.cpp.o


# Object files for target Substraction
Substraction_OBJECTS = \
"CMakeFiles/Substraction.dir/Subtraction.cpp.o"

# External object files for target Substraction
Substraction_EXTERNAL_OBJECTS =

Subtraction/libSubstraction.a: Subtraction/CMakeFiles/Substraction.dir/Subtraction.cpp.o
Subtraction/libSubstraction.a: Subtraction/CMakeFiles/Substraction.dir/build.make
Subtraction/libSubstraction.a: Subtraction/CMakeFiles/Substraction.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libSubstraction.a"
	cd /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/Subtraction && $(CMAKE_COMMAND) -P CMakeFiles/Substraction.dir/cmake_clean_target.cmake
	cd /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/Subtraction && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Substraction.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Subtraction/CMakeFiles/Substraction.dir/build: Subtraction/libSubstraction.a

.PHONY : Subtraction/CMakeFiles/Substraction.dir/build

Subtraction/CMakeFiles/Substraction.dir/requires: Subtraction/CMakeFiles/Substraction.dir/Subtraction.cpp.o.requires

.PHONY : Subtraction/CMakeFiles/Substraction.dir/requires

Subtraction/CMakeFiles/Substraction.dir/clean:
	cd /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/Subtraction && $(CMAKE_COMMAND) -P CMakeFiles/Substraction.dir/cmake_clean.cmake
.PHONY : Subtraction/CMakeFiles/Substraction.dir/clean

Subtraction/CMakeFiles/Substraction.dir/depend:
	cd /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/Subtraction /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/Subtraction /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/Subtraction/CMakeFiles/Substraction.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Subtraction/CMakeFiles/Substraction.dir/depend

