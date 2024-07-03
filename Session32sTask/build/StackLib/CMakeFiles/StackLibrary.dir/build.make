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
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = D:/Programs/Cmake/cmake-3.30.0-rc2-windows-x86_64/bin/cmake.exe

# The command to remove a file.
RM = D:/Programs/Cmake/cmake-3.30.0-rc2-windows-x86_64/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:/Robotics Corner/Tasks/RC_Tasks/Session32sTask"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:/Robotics Corner/Tasks/RC_Tasks/Session32sTask/build"

# Include any dependencies generated for this target.
include StackLib/CMakeFiles/StackLibrary.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include StackLib/CMakeFiles/StackLibrary.dir/compiler_depend.make

# Include the progress variables for this target.
include StackLib/CMakeFiles/StackLibrary.dir/progress.make

# Include the compile flags for this target's objects.
include StackLib/CMakeFiles/StackLibrary.dir/flags.make

StackLib/CMakeFiles/StackLibrary.dir/Stack.cpp.obj: StackLib/CMakeFiles/StackLibrary.dir/flags.make
StackLib/CMakeFiles/StackLibrary.dir/Stack.cpp.obj: D:/Robotics\ Corner/Tasks/RC_Tasks/Session32sTask/StackLib/Stack.cpp
StackLib/CMakeFiles/StackLibrary.dir/Stack.cpp.obj: StackLib/CMakeFiles/StackLibrary.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:/Robotics Corner/Tasks/RC_Tasks/Session32sTask/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object StackLib/CMakeFiles/StackLibrary.dir/Stack.cpp.obj"
	cd "D:/Robotics Corner/Tasks/RC_Tasks/Session32sTask/build/StackLib" && C:/msys64/ucrt64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT StackLib/CMakeFiles/StackLibrary.dir/Stack.cpp.obj -MF CMakeFiles/StackLibrary.dir/Stack.cpp.obj.d -o CMakeFiles/StackLibrary.dir/Stack.cpp.obj -c "D:/Robotics Corner/Tasks/RC_Tasks/Session32sTask/StackLib/Stack.cpp"

StackLib/CMakeFiles/StackLibrary.dir/Stack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/StackLibrary.dir/Stack.cpp.i"
	cd "D:/Robotics Corner/Tasks/RC_Tasks/Session32sTask/build/StackLib" && C:/msys64/ucrt64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:/Robotics Corner/Tasks/RC_Tasks/Session32sTask/StackLib/Stack.cpp" > CMakeFiles/StackLibrary.dir/Stack.cpp.i

StackLib/CMakeFiles/StackLibrary.dir/Stack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/StackLibrary.dir/Stack.cpp.s"
	cd "D:/Robotics Corner/Tasks/RC_Tasks/Session32sTask/build/StackLib" && C:/msys64/ucrt64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:/Robotics Corner/Tasks/RC_Tasks/Session32sTask/StackLib/Stack.cpp" -o CMakeFiles/StackLibrary.dir/Stack.cpp.s

# Object files for target StackLibrary
StackLibrary_OBJECTS = \
"CMakeFiles/StackLibrary.dir/Stack.cpp.obj"

# External object files for target StackLibrary
StackLibrary_EXTERNAL_OBJECTS =

StackLib/libStackLibrary.a: StackLib/CMakeFiles/StackLibrary.dir/Stack.cpp.obj
StackLib/libStackLibrary.a: StackLib/CMakeFiles/StackLibrary.dir/build.make
StackLib/libStackLibrary.a: StackLib/CMakeFiles/StackLibrary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="D:/Robotics Corner/Tasks/RC_Tasks/Session32sTask/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libStackLibrary.a"
	cd "D:/Robotics Corner/Tasks/RC_Tasks/Session32sTask/build/StackLib" && $(CMAKE_COMMAND) -P CMakeFiles/StackLibrary.dir/cmake_clean_target.cmake
	cd "D:/Robotics Corner/Tasks/RC_Tasks/Session32sTask/build/StackLib" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/StackLibrary.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
StackLib/CMakeFiles/StackLibrary.dir/build: StackLib/libStackLibrary.a
.PHONY : StackLib/CMakeFiles/StackLibrary.dir/build

StackLib/CMakeFiles/StackLibrary.dir/clean:
	cd "D:/Robotics Corner/Tasks/RC_Tasks/Session32sTask/build/StackLib" && $(CMAKE_COMMAND) -P CMakeFiles/StackLibrary.dir/cmake_clean.cmake
.PHONY : StackLib/CMakeFiles/StackLibrary.dir/clean

StackLib/CMakeFiles/StackLibrary.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "D:/Robotics Corner/Tasks/RC_Tasks/Session32sTask" "D:/Robotics Corner/Tasks/RC_Tasks/Session32sTask/StackLib" "D:/Robotics Corner/Tasks/RC_Tasks/Session32sTask/build" "D:/Robotics Corner/Tasks/RC_Tasks/Session32sTask/build/StackLib" "D:/Robotics Corner/Tasks/RC_Tasks/Session32sTask/build/StackLib/CMakeFiles/StackLibrary.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : StackLib/CMakeFiles/StackLibrary.dir/depend
