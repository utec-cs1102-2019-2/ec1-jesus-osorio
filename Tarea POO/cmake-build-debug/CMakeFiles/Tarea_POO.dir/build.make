# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\Tarea POO"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\Tarea POO\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Tarea_POO.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Tarea_POO.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Tarea_POO.dir/flags.make

CMakeFiles/Tarea_POO.dir/main.cpp.obj: CMakeFiles/Tarea_POO.dir/flags.make
CMakeFiles/Tarea_POO.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\Tarea POO\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Tarea_POO.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Tarea_POO.dir\main.cpp.obj -c "C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\Tarea POO\main.cpp"

CMakeFiles/Tarea_POO.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tarea_POO.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\Tarea POO\main.cpp" > CMakeFiles\Tarea_POO.dir\main.cpp.i

CMakeFiles/Tarea_POO.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tarea_POO.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\Tarea POO\main.cpp" -o CMakeFiles\Tarea_POO.dir\main.cpp.s

CMakeFiles/Tarea_POO.dir/Tablero.cpp.obj: CMakeFiles/Tarea_POO.dir/flags.make
CMakeFiles/Tarea_POO.dir/Tablero.cpp.obj: ../Tablero.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\Tarea POO\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Tarea_POO.dir/Tablero.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Tarea_POO.dir\Tablero.cpp.obj -c "C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\Tarea POO\Tablero.cpp"

CMakeFiles/Tarea_POO.dir/Tablero.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tarea_POO.dir/Tablero.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\Tarea POO\Tablero.cpp" > CMakeFiles\Tarea_POO.dir\Tablero.cpp.i

CMakeFiles/Tarea_POO.dir/Tablero.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tarea_POO.dir/Tablero.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\Tarea POO\Tablero.cpp" -o CMakeFiles\Tarea_POO.dir\Tablero.cpp.s

# Object files for target Tarea_POO
Tarea_POO_OBJECTS = \
"CMakeFiles/Tarea_POO.dir/main.cpp.obj" \
"CMakeFiles/Tarea_POO.dir/Tablero.cpp.obj"

# External object files for target Tarea_POO
Tarea_POO_EXTERNAL_OBJECTS =

Tarea_POO.exe: CMakeFiles/Tarea_POO.dir/main.cpp.obj
Tarea_POO.exe: CMakeFiles/Tarea_POO.dir/Tablero.cpp.obj
Tarea_POO.exe: CMakeFiles/Tarea_POO.dir/build.make
Tarea_POO.exe: CMakeFiles/Tarea_POO.dir/linklibs.rsp
Tarea_POO.exe: CMakeFiles/Tarea_POO.dir/objects1.rsp
Tarea_POO.exe: CMakeFiles/Tarea_POO.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\Tarea POO\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Tarea_POO.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Tarea_POO.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Tarea_POO.dir/build: Tarea_POO.exe

.PHONY : CMakeFiles/Tarea_POO.dir/build

CMakeFiles/Tarea_POO.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Tarea_POO.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Tarea_POO.dir/clean

CMakeFiles/Tarea_POO.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\Tarea POO" "C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\Tarea POO" "C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\Tarea POO\cmake-build-debug" "C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\Tarea POO\cmake-build-debug" "C:\Users\Jesus\Documents\GitHub\ec1-jesus-osorio\Tarea POO\cmake-build-debug\CMakeFiles\Tarea_POO.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Tarea_POO.dir/depend

