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
include Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/depend.make

# Include the progress variables for this target.
include Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/progress.make

# Include the compile flags for this target's objects.
include Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/flags.make

Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o: Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/flags.make
Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o: ../Google_Tests/lib/googlemock/src/gmock_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o"
	cd /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/Google_Tests/lib/googlemock && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gmock_main.dir/src/gmock_main.cc.o -c /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/Google_Tests/lib/googlemock/src/gmock_main.cc

Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gmock_main.dir/src/gmock_main.cc.i"
	cd /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/Google_Tests/lib/googlemock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/Google_Tests/lib/googlemock/src/gmock_main.cc > CMakeFiles/gmock_main.dir/src/gmock_main.cc.i

Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gmock_main.dir/src/gmock_main.cc.s"
	cd /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/Google_Tests/lib/googlemock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/Google_Tests/lib/googlemock/src/gmock_main.cc -o CMakeFiles/gmock_main.dir/src/gmock_main.cc.s

Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o.requires:

.PHONY : Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o.requires

Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o.provides: Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o.requires
	$(MAKE) -f Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/build.make Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o.provides.build
.PHONY : Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o.provides

Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o.provides.build: Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o


# Object files for target gmock_main
gmock_main_OBJECTS = \
"CMakeFiles/gmock_main.dir/src/gmock_main.cc.o"

# External object files for target gmock_main
gmock_main_EXTERNAL_OBJECTS =

lib/libgmock_maind.a: Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o
lib/libgmock_maind.a: Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/build.make
lib/libgmock_maind.a: Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../lib/libgmock_maind.a"
	cd /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/Google_Tests/lib/googlemock && $(CMAKE_COMMAND) -P CMakeFiles/gmock_main.dir/cmake_clean_target.cmake
	cd /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/Google_Tests/lib/googlemock && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gmock_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/build: lib/libgmock_maind.a

.PHONY : Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/build

Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/requires: Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o.requires

.PHONY : Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/requires

Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/clean:
	cd /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/Google_Tests/lib/googlemock && $(CMAKE_COMMAND) -P CMakeFiles/gmock_main.dir/cmake_clean.cmake
.PHONY : Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/clean

Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/depend:
	cd /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/Google_Tests/lib/googlemock /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/Google_Tests/lib/googlemock /mnt/d/Projekty/CalculatorReinfored/CalculatorReinforced/cmake-build-debug/Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Google_Tests/lib/googlemock/CMakeFiles/gmock_main.dir/depend

