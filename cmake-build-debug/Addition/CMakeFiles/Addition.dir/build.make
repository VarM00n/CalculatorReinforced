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
CMAKE_SOURCE_DIR = /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug

# Include any dependencies generated for this target.
include Addition/CMakeFiles/Addition.dir/depend.make

# Include the progress variables for this target.
include Addition/CMakeFiles/Addition.dir/progress.make

# Include the compile flags for this target's objects.
include Addition/CMakeFiles/Addition.dir/flags.make

Addition/CMakeFiles/Addition.dir/Addition.cpp.o: Addition/CMakeFiles/Addition.dir/flags.make
Addition/CMakeFiles/Addition.dir/Addition.cpp.o: ../Addition/Addition.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Addition/CMakeFiles/Addition.dir/Addition.cpp.o"
	cd /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/Addition && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Addition.dir/Addition.cpp.o -c /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/Addition/Addition.cpp

Addition/CMakeFiles/Addition.dir/Addition.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Addition.dir/Addition.cpp.i"
	cd /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/Addition && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/Addition/Addition.cpp > CMakeFiles/Addition.dir/Addition.cpp.i

Addition/CMakeFiles/Addition.dir/Addition.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Addition.dir/Addition.cpp.s"
	cd /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/Addition && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/Addition/Addition.cpp -o CMakeFiles/Addition.dir/Addition.cpp.s

# Object files for target Addition
Addition_OBJECTS = \
"CMakeFiles/Addition.dir/Addition.cpp.o"

# External object files for target Addition
Addition_EXTERNAL_OBJECTS =

Addition/libAddition.a: Addition/CMakeFiles/Addition.dir/Addition.cpp.o
Addition/libAddition.a: Addition/CMakeFiles/Addition.dir/build.make
Addition/libAddition.a: Addition/CMakeFiles/Addition.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libAddition.a"
	cd /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/Addition && $(CMAKE_COMMAND) -P CMakeFiles/Addition.dir/cmake_clean_target.cmake
	cd /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/Addition && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Addition.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Addition/CMakeFiles/Addition.dir/build: Addition/libAddition.a

.PHONY : Addition/CMakeFiles/Addition.dir/build

Addition/CMakeFiles/Addition.dir/clean:
	cd /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/Addition && $(CMAKE_COMMAND) -P CMakeFiles/Addition.dir/cmake_clean.cmake
.PHONY : Addition/CMakeFiles/Addition.dir/clean

Addition/CMakeFiles/Addition.dir/depend:
	cd /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/Addition /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/Addition /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/Addition/CMakeFiles/Addition.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Addition/CMakeFiles/Addition.dir/depend

