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
CMAKE_COMMAND = "F:\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "F:\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\tsh40\Desktop\Emulators SRC\Tobsi\CHIP-8\CLion\TC8E"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\tsh40\Desktop\Emulators SRC\Tobsi\CHIP-8\CLion\TC8E\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/TC8E.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TC8E.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TC8E.dir/flags.make

CMakeFiles/TC8E.dir/main.cpp.obj: CMakeFiles/TC8E.dir/flags.make
CMakeFiles/TC8E.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\tsh40\Desktop\Emulators SRC\Tobsi\CHIP-8\CLion\TC8E\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TC8E.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\TC8E.dir\main.cpp.obj -c "C:\Users\tsh40\Desktop\Emulators SRC\Tobsi\CHIP-8\CLion\TC8E\main.cpp"

CMakeFiles/TC8E.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TC8E.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\tsh40\Desktop\Emulators SRC\Tobsi\CHIP-8\CLion\TC8E\main.cpp" > CMakeFiles\TC8E.dir\main.cpp.i

CMakeFiles/TC8E.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TC8E.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\tsh40\Desktop\Emulators SRC\Tobsi\CHIP-8\CLion\TC8E\main.cpp" -o CMakeFiles\TC8E.dir\main.cpp.s

# Object files for target TC8E
TC8E_OBJECTS = \
"CMakeFiles/TC8E.dir/main.cpp.obj"

# External object files for target TC8E
TC8E_EXTERNAL_OBJECTS =

TC8E.exe: CMakeFiles/TC8E.dir/main.cpp.obj
TC8E.exe: CMakeFiles/TC8E.dir/build.make
TC8E.exe: CMakeFiles/TC8E.dir/linklibs.rsp
TC8E.exe: CMakeFiles/TC8E.dir/objects1.rsp
TC8E.exe: CMakeFiles/TC8E.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\tsh40\Desktop\Emulators SRC\Tobsi\CHIP-8\CLion\TC8E\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TC8E.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TC8E.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TC8E.dir/build: TC8E.exe

.PHONY : CMakeFiles/TC8E.dir/build

CMakeFiles/TC8E.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TC8E.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TC8E.dir/clean

CMakeFiles/TC8E.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\tsh40\Desktop\Emulators SRC\Tobsi\CHIP-8\CLion\TC8E" "C:\Users\tsh40\Desktop\Emulators SRC\Tobsi\CHIP-8\CLion\TC8E" "C:\Users\tsh40\Desktop\Emulators SRC\Tobsi\CHIP-8\CLion\TC8E\cmake-build-debug" "C:\Users\tsh40\Desktop\Emulators SRC\Tobsi\CHIP-8\CLion\TC8E\cmake-build-debug" "C:\Users\tsh40\Desktop\Emulators SRC\Tobsi\CHIP-8\CLion\TC8E\cmake-build-debug\CMakeFiles\TC8E.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/TC8E.dir/depend

