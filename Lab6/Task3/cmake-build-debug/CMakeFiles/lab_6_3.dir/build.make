# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/igor/Загрузки/clion-2020.2.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/igor/Загрузки/clion-2020.2.4/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/igor/desktop/MietStudy/assembler/forcked_labs/FirstAssemblySteps/Lab6/Task3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/igor/desktop/MietStudy/assembler/forcked_labs/FirstAssemblySteps/Lab6/Task3/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab_6_3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab_6_3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab_6_3.dir/flags.make

CMakeFiles/lab_6_3.dir/main.cpp.o: CMakeFiles/lab_6_3.dir/flags.make
CMakeFiles/lab_6_3.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/igor/desktop/MietStudy/assembler/forcked_labs/FirstAssemblySteps/Lab6/Task3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab_6_3.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab_6_3.dir/main.cpp.o -c /home/igor/desktop/MietStudy/assembler/forcked_labs/FirstAssemblySteps/Lab6/Task3/main.cpp

CMakeFiles/lab_6_3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab_6_3.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/igor/desktop/MietStudy/assembler/forcked_labs/FirstAssemblySteps/Lab6/Task3/main.cpp > CMakeFiles/lab_6_3.dir/main.cpp.i

CMakeFiles/lab_6_3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab_6_3.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/igor/desktop/MietStudy/assembler/forcked_labs/FirstAssemblySteps/Lab6/Task3/main.cpp -o CMakeFiles/lab_6_3.dir/main.cpp.s

# Object files for target lab_6_3
lab_6_3_OBJECTS = \
"CMakeFiles/lab_6_3.dir/main.cpp.o"

# External object files for target lab_6_3
lab_6_3_EXTERNAL_OBJECTS =

lab_6_3: CMakeFiles/lab_6_3.dir/main.cpp.o
lab_6_3: CMakeFiles/lab_6_3.dir/build.make
lab_6_3: CMakeFiles/lab_6_3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/igor/desktop/MietStudy/assembler/forcked_labs/FirstAssemblySteps/Lab6/Task3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lab_6_3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab_6_3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab_6_3.dir/build: lab_6_3

.PHONY : CMakeFiles/lab_6_3.dir/build

CMakeFiles/lab_6_3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab_6_3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab_6_3.dir/clean

CMakeFiles/lab_6_3.dir/depend:
	cd /home/igor/desktop/MietStudy/assembler/forcked_labs/FirstAssemblySteps/Lab6/Task3/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/igor/desktop/MietStudy/assembler/forcked_labs/FirstAssemblySteps/Lab6/Task3 /home/igor/desktop/MietStudy/assembler/forcked_labs/FirstAssemblySteps/Lab6/Task3 /home/igor/desktop/MietStudy/assembler/forcked_labs/FirstAssemblySteps/Lab6/Task3/cmake-build-debug /home/igor/desktop/MietStudy/assembler/forcked_labs/FirstAssemblySteps/Lab6/Task3/cmake-build-debug /home/igor/desktop/MietStudy/assembler/forcked_labs/FirstAssemblySteps/Lab6/Task3/cmake-build-debug/CMakeFiles/lab_6_3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab_6_3.dir/depend

