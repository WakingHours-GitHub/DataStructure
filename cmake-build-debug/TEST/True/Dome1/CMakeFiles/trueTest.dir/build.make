# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\CLion\DataStructure

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\CLion\DataStructure\cmake-build-debug

# Include any dependencies generated for this target.
include TEST/True/Dome1/CMakeFiles/trueTest.dir/depend.make

# Include the progress variables for this target.
include TEST/True/Dome1/CMakeFiles/trueTest.dir/progress.make

# Include the compile flags for this target's objects.
include TEST/True/Dome1/CMakeFiles/trueTest.dir/flags.make

TEST/True/Dome1/CMakeFiles/trueTest.dir/trueTest.c.obj: TEST/True/Dome1/CMakeFiles/trueTest.dir/flags.make
TEST/True/Dome1/CMakeFiles/trueTest.dir/trueTest.c.obj: ../TEST/True/Dome1/trueTest.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLion\DataStructure\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object TEST/True/Dome1/CMakeFiles/trueTest.dir/trueTest.c.obj"
	cd /d D:\CLion\DataStructure\cmake-build-debug\TEST\True\Dome1 && D:\PATH\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\trueTest.dir\trueTest.c.obj   -c D:\CLion\DataStructure\TEST\True\Dome1\trueTest.c

TEST/True/Dome1/CMakeFiles/trueTest.dir/trueTest.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/trueTest.dir/trueTest.c.i"
	cd /d D:\CLion\DataStructure\cmake-build-debug\TEST\True\Dome1 && D:\PATH\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\CLion\DataStructure\TEST\True\Dome1\trueTest.c > CMakeFiles\trueTest.dir\trueTest.c.i

TEST/True/Dome1/CMakeFiles/trueTest.dir/trueTest.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/trueTest.dir/trueTest.c.s"
	cd /d D:\CLion\DataStructure\cmake-build-debug\TEST\True\Dome1 && D:\PATH\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\CLion\DataStructure\TEST\True\Dome1\trueTest.c -o CMakeFiles\trueTest.dir\trueTest.c.s

# Object files for target trueTest
trueTest_OBJECTS = \
"CMakeFiles/trueTest.dir/trueTest.c.obj"

# External object files for target trueTest
trueTest_EXTERNAL_OBJECTS =

TEST/True/Dome1/trueTest.exe: TEST/True/Dome1/CMakeFiles/trueTest.dir/trueTest.c.obj
TEST/True/Dome1/trueTest.exe: TEST/True/Dome1/CMakeFiles/trueTest.dir/build.make
TEST/True/Dome1/trueTest.exe: TEST/True/Dome1/CMakeFiles/trueTest.dir/linklibs.rsp
TEST/True/Dome1/trueTest.exe: TEST/True/Dome1/CMakeFiles/trueTest.dir/objects1.rsp
TEST/True/Dome1/trueTest.exe: TEST/True/Dome1/CMakeFiles/trueTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CLion\DataStructure\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable trueTest.exe"
	cd /d D:\CLion\DataStructure\cmake-build-debug\TEST\True\Dome1 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\trueTest.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
TEST/True/Dome1/CMakeFiles/trueTest.dir/build: TEST/True/Dome1/trueTest.exe

.PHONY : TEST/True/Dome1/CMakeFiles/trueTest.dir/build

TEST/True/Dome1/CMakeFiles/trueTest.dir/clean:
	cd /d D:\CLion\DataStructure\cmake-build-debug\TEST\True\Dome1 && $(CMAKE_COMMAND) -P CMakeFiles\trueTest.dir\cmake_clean.cmake
.PHONY : TEST/True/Dome1/CMakeFiles/trueTest.dir/clean

TEST/True/Dome1/CMakeFiles/trueTest.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CLion\DataStructure D:\CLion\DataStructure\TEST\True\Dome1 D:\CLion\DataStructure\cmake-build-debug D:\CLion\DataStructure\cmake-build-debug\TEST\True\Dome1 D:\CLion\DataStructure\cmake-build-debug\TEST\True\Dome1\CMakeFiles\trueTest.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : TEST/True/Dome1/CMakeFiles/trueTest.dir/depend

