# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /home/thanhtuyen/Tools/clion-2018.2.5/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/thanhtuyen/Tools/clion-2018.2.5/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/thanhtuyen/C-exercises/bai_7/BT7_3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/thanhtuyen/C-exercises/bai_7/BT7_3/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BT7_3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BT7_3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BT7_3.dir/flags.make

CMakeFiles/BT7_3.dir/main.c.o: CMakeFiles/BT7_3.dir/flags.make
CMakeFiles/BT7_3.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/thanhtuyen/C-exercises/bai_7/BT7_3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/BT7_3.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/BT7_3.dir/main.c.o   -c /home/thanhtuyen/C-exercises/bai_7/BT7_3/main.c

CMakeFiles/BT7_3.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/BT7_3.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/thanhtuyen/C-exercises/bai_7/BT7_3/main.c > CMakeFiles/BT7_3.dir/main.c.i

CMakeFiles/BT7_3.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/BT7_3.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/thanhtuyen/C-exercises/bai_7/BT7_3/main.c -o CMakeFiles/BT7_3.dir/main.c.s

# Object files for target BT7_3
BT7_3_OBJECTS = \
"CMakeFiles/BT7_3.dir/main.c.o"

# External object files for target BT7_3
BT7_3_EXTERNAL_OBJECTS =

BT7_3: CMakeFiles/BT7_3.dir/main.c.o
BT7_3: CMakeFiles/BT7_3.dir/build.make
BT7_3: CMakeFiles/BT7_3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/thanhtuyen/C-exercises/bai_7/BT7_3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable BT7_3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BT7_3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BT7_3.dir/build: BT7_3

.PHONY : CMakeFiles/BT7_3.dir/build

CMakeFiles/BT7_3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BT7_3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BT7_3.dir/clean

CMakeFiles/BT7_3.dir/depend:
	cd /home/thanhtuyen/C-exercises/bai_7/BT7_3/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/thanhtuyen/C-exercises/bai_7/BT7_3 /home/thanhtuyen/C-exercises/bai_7/BT7_3 /home/thanhtuyen/C-exercises/bai_7/BT7_3/cmake-build-debug /home/thanhtuyen/C-exercises/bai_7/BT7_3/cmake-build-debug /home/thanhtuyen/C-exercises/bai_7/BT7_3/cmake-build-debug/CMakeFiles/BT7_3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BT7_3.dir/depend

