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
CMAKE_SOURCE_DIR = "/mnt/d/OneDrive - Office/File/Project/CLion/CS205 Projects/Project 3"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/d/OneDrive - Office/File/Project/CLion/CS205 Projects/Project 3/cmake-build-release"

# Include any dependencies generated for this target.
include CMakeFiles/Project_3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Project_3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project_3.dir/flags.make

CMakeFiles/Project_3.dir/main.c.o: CMakeFiles/Project_3.dir/flags.make
CMakeFiles/Project_3.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/d/OneDrive - Office/File/Project/CLion/CS205 Projects/Project 3/cmake-build-release/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Project_3.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Project_3.dir/main.c.o   -c "/mnt/d/OneDrive - Office/File/Project/CLion/CS205 Projects/Project 3/main.c"

CMakeFiles/Project_3.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Project_3.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/d/OneDrive - Office/File/Project/CLion/CS205 Projects/Project 3/main.c" > CMakeFiles/Project_3.dir/main.c.i

CMakeFiles/Project_3.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Project_3.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/d/OneDrive - Office/File/Project/CLion/CS205 Projects/Project 3/main.c" -o CMakeFiles/Project_3.dir/main.c.s

CMakeFiles/Project_3.dir/src/matrix.c.o: CMakeFiles/Project_3.dir/flags.make
CMakeFiles/Project_3.dir/src/matrix.c.o: ../src/matrix.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/d/OneDrive - Office/File/Project/CLion/CS205 Projects/Project 3/cmake-build-release/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Project_3.dir/src/matrix.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Project_3.dir/src/matrix.c.o   -c "/mnt/d/OneDrive - Office/File/Project/CLion/CS205 Projects/Project 3/src/matrix.c"

CMakeFiles/Project_3.dir/src/matrix.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Project_3.dir/src/matrix.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/d/OneDrive - Office/File/Project/CLion/CS205 Projects/Project 3/src/matrix.c" > CMakeFiles/Project_3.dir/src/matrix.c.i

CMakeFiles/Project_3.dir/src/matrix.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Project_3.dir/src/matrix.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/d/OneDrive - Office/File/Project/CLion/CS205 Projects/Project 3/src/matrix.c" -o CMakeFiles/Project_3.dir/src/matrix.c.s

CMakeFiles/Project_3.dir/src/timer.c.o: CMakeFiles/Project_3.dir/flags.make
CMakeFiles/Project_3.dir/src/timer.c.o: ../src/timer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/d/OneDrive - Office/File/Project/CLion/CS205 Projects/Project 3/cmake-build-release/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Project_3.dir/src/timer.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Project_3.dir/src/timer.c.o   -c "/mnt/d/OneDrive - Office/File/Project/CLion/CS205 Projects/Project 3/src/timer.c"

CMakeFiles/Project_3.dir/src/timer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Project_3.dir/src/timer.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/d/OneDrive - Office/File/Project/CLion/CS205 Projects/Project 3/src/timer.c" > CMakeFiles/Project_3.dir/src/timer.c.i

CMakeFiles/Project_3.dir/src/timer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Project_3.dir/src/timer.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/d/OneDrive - Office/File/Project/CLion/CS205 Projects/Project 3/src/timer.c" -o CMakeFiles/Project_3.dir/src/timer.c.s

CMakeFiles/Project_3.dir/src/util.c.o: CMakeFiles/Project_3.dir/flags.make
CMakeFiles/Project_3.dir/src/util.c.o: ../src/util.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/d/OneDrive - Office/File/Project/CLion/CS205 Projects/Project 3/cmake-build-release/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Project_3.dir/src/util.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Project_3.dir/src/util.c.o   -c "/mnt/d/OneDrive - Office/File/Project/CLion/CS205 Projects/Project 3/src/util.c"

CMakeFiles/Project_3.dir/src/util.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Project_3.dir/src/util.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/d/OneDrive - Office/File/Project/CLion/CS205 Projects/Project 3/src/util.c" > CMakeFiles/Project_3.dir/src/util.c.i

CMakeFiles/Project_3.dir/src/util.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Project_3.dir/src/util.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/d/OneDrive - Office/File/Project/CLion/CS205 Projects/Project 3/src/util.c" -o CMakeFiles/Project_3.dir/src/util.c.s

# Object files for target Project_3
Project_3_OBJECTS = \
"CMakeFiles/Project_3.dir/main.c.o" \
"CMakeFiles/Project_3.dir/src/matrix.c.o" \
"CMakeFiles/Project_3.dir/src/timer.c.o" \
"CMakeFiles/Project_3.dir/src/util.c.o"

# External object files for target Project_3
Project_3_EXTERNAL_OBJECTS =

../bin/Project_3: CMakeFiles/Project_3.dir/main.c.o
../bin/Project_3: CMakeFiles/Project_3.dir/src/matrix.c.o
../bin/Project_3: CMakeFiles/Project_3.dir/src/timer.c.o
../bin/Project_3: CMakeFiles/Project_3.dir/src/util.c.o
../bin/Project_3: CMakeFiles/Project_3.dir/build.make
../bin/Project_3: CMakeFiles/Project_3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/d/OneDrive - Office/File/Project/CLion/CS205 Projects/Project 3/cmake-build-release/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable ../bin/Project_3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Project_3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project_3.dir/build: ../bin/Project_3

.PHONY : CMakeFiles/Project_3.dir/build

CMakeFiles/Project_3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Project_3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Project_3.dir/clean

CMakeFiles/Project_3.dir/depend:
	cd "/mnt/d/OneDrive - Office/File/Project/CLion/CS205 Projects/Project 3/cmake-build-release" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/d/OneDrive - Office/File/Project/CLion/CS205 Projects/Project 3" "/mnt/d/OneDrive - Office/File/Project/CLion/CS205 Projects/Project 3" "/mnt/d/OneDrive - Office/File/Project/CLion/CS205 Projects/Project 3/cmake-build-release" "/mnt/d/OneDrive - Office/File/Project/CLion/CS205 Projects/Project 3/cmake-build-release" "/mnt/d/OneDrive - Office/File/Project/CLion/CS205 Projects/Project 3/cmake-build-release/CMakeFiles/Project_3.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Project_3.dir/depend

