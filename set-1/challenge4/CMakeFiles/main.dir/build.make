# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.26.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.26.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/taisonfragao/Documents/crypto-challenge/set-1/challenge4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/taisonfragao/Documents/crypto-challenge/set-1/challenge4

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/main.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/main.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/main.c.o: main.c
CMakeFiles/main.dir/main.c.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/taisonfragao/Documents/crypto-challenge/set-1/challenge4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/main.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/main.dir/main.c.o -MF CMakeFiles/main.dir/main.c.o.d -o CMakeFiles/main.dir/main.c.o -c /Users/taisonfragao/Documents/crypto-challenge/set-1/challenge4/main.c

CMakeFiles/main.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/taisonfragao/Documents/crypto-challenge/set-1/challenge4/main.c > CMakeFiles/main.dir/main.c.i

CMakeFiles/main.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/taisonfragao/Documents/crypto-challenge/set-1/challenge4/main.c -o CMakeFiles/main.dir/main.c.s

CMakeFiles/main.dir/Users/taisonfragao/Documents/crypto-challenge/set-1/commons/helpers.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/Users/taisonfragao/Documents/crypto-challenge/set-1/commons/helpers.c.o: /Users/taisonfragao/Documents/crypto-challenge/set-1/commons/helpers.c
CMakeFiles/main.dir/Users/taisonfragao/Documents/crypto-challenge/set-1/commons/helpers.c.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/taisonfragao/Documents/crypto-challenge/set-1/challenge4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/main.dir/Users/taisonfragao/Documents/crypto-challenge/set-1/commons/helpers.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/main.dir/Users/taisonfragao/Documents/crypto-challenge/set-1/commons/helpers.c.o -MF CMakeFiles/main.dir/Users/taisonfragao/Documents/crypto-challenge/set-1/commons/helpers.c.o.d -o CMakeFiles/main.dir/Users/taisonfragao/Documents/crypto-challenge/set-1/commons/helpers.c.o -c /Users/taisonfragao/Documents/crypto-challenge/set-1/commons/helpers.c

CMakeFiles/main.dir/Users/taisonfragao/Documents/crypto-challenge/set-1/commons/helpers.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/Users/taisonfragao/Documents/crypto-challenge/set-1/commons/helpers.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/taisonfragao/Documents/crypto-challenge/set-1/commons/helpers.c > CMakeFiles/main.dir/Users/taisonfragao/Documents/crypto-challenge/set-1/commons/helpers.c.i

CMakeFiles/main.dir/Users/taisonfragao/Documents/crypto-challenge/set-1/commons/helpers.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/Users/taisonfragao/Documents/crypto-challenge/set-1/commons/helpers.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/taisonfragao/Documents/crypto-challenge/set-1/commons/helpers.c -o CMakeFiles/main.dir/Users/taisonfragao/Documents/crypto-challenge/set-1/commons/helpers.c.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/main.c.o" \
"CMakeFiles/main.dir/Users/taisonfragao/Documents/crypto-challenge/set-1/commons/helpers.c.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

main: CMakeFiles/main.dir/main.c.o
main: CMakeFiles/main.dir/Users/taisonfragao/Documents/crypto-challenge/set-1/commons/helpers.c.o
main: CMakeFiles/main.dir/build.make
main: lib/libgtest_main.a
main: lib/libgtest.a
main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/taisonfragao/Documents/crypto-challenge/set-1/challenge4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)
	/usr/local/Cellar/cmake/3.26.3/bin/cmake -D TEST_TARGET=main -D TEST_EXECUTABLE=/Users/taisonfragao/Documents/crypto-challenge/set-1/challenge4/main -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/Users/taisonfragao/Documents/crypto-challenge/set-1/challenge4 -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=main_TESTS -D CTEST_FILE=/Users/taisonfragao/Documents/crypto-challenge/set-1/challenge4/main[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /usr/local/Cellar/cmake/3.26.3/share/cmake/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main
.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /Users/taisonfragao/Documents/crypto-challenge/set-1/challenge4 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/taisonfragao/Documents/crypto-challenge/set-1/challenge4 /Users/taisonfragao/Documents/crypto-challenge/set-1/challenge4 /Users/taisonfragao/Documents/crypto-challenge/set-1/challenge4 /Users/taisonfragao/Documents/crypto-challenge/set-1/challenge4 /Users/taisonfragao/Documents/crypto-challenge/set-1/challenge4/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend

