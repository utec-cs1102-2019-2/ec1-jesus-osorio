# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2019.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2019.2.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\session6a

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\session6a\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/session6a.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/session6a.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/session6a.dir/flags.make

CMakeFiles/session6a.dir/main.cpp.obj: CMakeFiles/session6a.dir/flags.make
CMakeFiles/session6a.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\session6a\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/session6a.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\session6a.dir\main.cpp.obj -c C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\session6a\main.cpp

CMakeFiles/session6a.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/session6a.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\session6a\main.cpp > CMakeFiles\session6a.dir\main.cpp.i

CMakeFiles/session6a.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/session6a.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\session6a\main.cpp -o CMakeFiles\session6a.dir\main.cpp.s

# Object files for target session6a
session6a_OBJECTS = \
"CMakeFiles/session6a.dir/main.cpp.obj"

# External object files for target session6a
session6a_EXTERNAL_OBJECTS =

session6a.exe: CMakeFiles/session6a.dir/main.cpp.obj
session6a.exe: CMakeFiles/session6a.dir/build.make
session6a.exe: CMakeFiles/session6a.dir/linklibs.rsp
session6a.exe: CMakeFiles/session6a.dir/objects1.rsp
session6a.exe: CMakeFiles/session6a.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\session6a\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable session6a.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\session6a.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/session6a.dir/build: session6a.exe

.PHONY : CMakeFiles/session6a.dir/build

CMakeFiles/session6a.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\session6a.dir\cmake_clean.cmake
.PHONY : CMakeFiles/session6a.dir/clean

CMakeFiles/session6a.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\session6a C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\session6a C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\session6a\cmake-build-debug C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\session6a\cmake-build-debug C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\session6a\cmake-build-debug\CMakeFiles\session6a.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/session6a.dir/depend

