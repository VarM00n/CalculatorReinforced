# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /mnt/d/Projekty/CR_RELEASED/CalculatorReinforced

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/Projekty/CR_RELEASED/CalculatorReinforced/cmake-build-debug

# Include any dependencies generated for this target.
include Number/CMakeFiles/Number.dir/depend.make

# Include the progress variables for this target.
include Number/CMakeFiles/Number.dir/progress.make

# Include the compile flags for this target's objects.
include Number/CMakeFiles/Number.dir/flags.make

Number/CMakeFiles/Number.dir/Number.cpp.o: Number/CMakeFiles/Number.dir/flags.make
Number/CMakeFiles/Number.dir/Number.cpp.o: ../Number/Number.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Projekty/CR_RELEASED/CalculatorReinforced/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Number/CMakeFiles/Number.dir/Number.cpp.o"
	cd /mnt/d/Projekty/CR_RELEASED/CalculatorReinforced/cmake-build-debug/Number && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Number.dir/Number.cpp.o -c /mnt/d/Projekty/CR_RELEASED/CalculatorReinforced/Number/Number.cpp

Number/CMakeFiles/Number.dir/Number.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Number.dir/Number.cpp.i"
	cd /mnt/d/Projekty/CR_RELEASED/CalculatorReinforced/cmake-build-debug/Number && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/Projekty/CR_RELEASED/CalculatorReinforced/Number/Number.cpp > CMakeFiles/Number.dir/Number.cpp.i

Number/CMakeFiles/Number.dir/Number.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Number.dir/Number.cpp.s"
	cd /mnt/d/Projekty/CR_RELEASED/CalculatorReinforced/cmake-build-debug/Number && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/Projekty/CR_RELEASED/CalculatorReinforced/Number/Number.cpp -o CMakeFiles/Number.dir/Number.cpp.s

Number/CMakeFiles/Number.dir/NumberValidation.cpp.o: Number/CMakeFiles/Number.dir/flags.make
Number/CMakeFiles/Number.dir/NumberValidation.cpp.o: ../Number/NumberValidation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Projekty/CR_RELEASED/CalculatorReinforced/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Number/CMakeFiles/Number.dir/NumberValidation.cpp.o"
	cd /mnt/d/Projekty/CR_RELEASED/CalculatorReinforced/cmake-build-debug/Number && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Number.dir/NumberValidation.cpp.o -c /mnt/d/Projekty/CR_RELEASED/CalculatorReinforced/Number/NumberValidation.cpp

Number/CMakeFiles/Number.dir/NumberValidation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Number.dir/NumberValidation.cpp.i"
	cd /mnt/d/Projekty/CR_RELEASED/CalculatorReinforced/cmake-build-debug/Number && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/Projekty/CR_RELEASED/CalculatorReinforced/Number/NumberValidation.cpp > CMakeFiles/Number.dir/NumberValidation.cpp.i

Number/CMakeFiles/Number.dir/NumberValidation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Number.dir/NumberValidation.cpp.s"
	cd /mnt/d/Projekty/CR_RELEASED/CalculatorReinforced/cmake-build-debug/Number && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/Projekty/CR_RELEASED/CalculatorReinforced/Number/NumberValidation.cpp -o CMakeFiles/Number.dir/NumberValidation.cpp.s

# Object files for target Number
Number_OBJECTS = \
"CMakeFiles/Number.dir/Number.cpp.o" \
"CMakeFiles/Number.dir/NumberValidation.cpp.o"

# External object files for target Number
Number_EXTERNAL_OBJECTS =

Number/libNumber.a: Number/CMakeFiles/Number.dir/Number.cpp.o
Number/libNumber.a: Number/CMakeFiles/Number.dir/NumberValidation.cpp.o
Number/libNumber.a: Number/CMakeFiles/Number.dir/build.make
Number/libNumber.a: Number/CMakeFiles/Number.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/Projekty/CR_RELEASED/CalculatorReinforced/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libNumber.a"
	cd /mnt/d/Projekty/CR_RELEASED/CalculatorReinforced/cmake-build-debug/Number && $(CMAKE_COMMAND) -P CMakeFiles/Number.dir/cmake_clean_target.cmake
	cd /mnt/d/Projekty/CR_RELEASED/CalculatorReinforced/cmake-build-debug/Number && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Number.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Number/CMakeFiles/Number.dir/build: Number/libNumber.a

.PHONY : Number/CMakeFiles/Number.dir/build

Number/CMakeFiles/Number.dir/clean:
	cd /mnt/d/Projekty/CR_RELEASED/CalculatorReinforced/cmake-build-debug/Number && $(CMAKE_COMMAND) -P CMakeFiles/Number.dir/cmake_clean.cmake
.PHONY : Number/CMakeFiles/Number.dir/clean

Number/CMakeFiles/Number.dir/depend:
	cd /mnt/d/Projekty/CR_RELEASED/CalculatorReinforced/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/Projekty/CR_RELEASED/CalculatorReinforced /mnt/d/Projekty/CR_RELEASED/CalculatorReinforced/Number /mnt/d/Projekty/CR_RELEASED/CalculatorReinforced/cmake-build-debug /mnt/d/Projekty/CR_RELEASED/CalculatorReinforced/cmake-build-debug/Number /mnt/d/Projekty/CR_RELEASED/CalculatorReinforced/cmake-build-debug/Number/CMakeFiles/Number.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Number/CMakeFiles/Number.dir/depend

