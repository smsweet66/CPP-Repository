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
CMAKE_SOURCE_DIR = "/mnt/d/CPP repo/CPP-Repository"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/CPP-Repository.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CPP-Repository.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CPP-Repository.dir/flags.make

CMakeFiles/CPP-Repository.dir/cmake_pch.hxx.gch: CMakeFiles/CPP-Repository.dir/flags.make
CMakeFiles/CPP-Repository.dir/cmake_pch.hxx.gch: CMakeFiles/CPP-Repository.dir/cmake_pch.hxx.cxx
CMakeFiles/CPP-Repository.dir/cmake_pch.hxx.gch: CMakeFiles/CPP-Repository.dir/cmake_pch.hxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CPP-Repository.dir/cmake_pch.hxx.gch"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -x c++-header -include "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx" -o CMakeFiles/CPP-Repository.dir/cmake_pch.hxx.gch -c "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx.cxx"

CMakeFiles/CPP-Repository.dir/cmake_pch.hxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPP-Repository.dir/cmake_pch.hxx.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -x c++-header -include "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx" -E "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx.cxx" > CMakeFiles/CPP-Repository.dir/cmake_pch.hxx.i

CMakeFiles/CPP-Repository.dir/cmake_pch.hxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPP-Repository.dir/cmake_pch.hxx.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -x c++-header -include "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx" -S "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx.cxx" -o CMakeFiles/CPP-Repository.dir/cmake_pch.hxx.s

CMakeFiles/CPP-Repository.dir/ExtendedMatrix.cpp.o: CMakeFiles/CPP-Repository.dir/flags.make
CMakeFiles/CPP-Repository.dir/ExtendedMatrix.cpp.o: ../ExtendedMatrix.cpp
CMakeFiles/CPP-Repository.dir/ExtendedMatrix.cpp.o: CMakeFiles/CPP-Repository.dir/cmake_pch.hxx
CMakeFiles/CPP-Repository.dir/ExtendedMatrix.cpp.o: CMakeFiles/CPP-Repository.dir/cmake_pch.hxx.gch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CPP-Repository.dir/ExtendedMatrix.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -include "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx" -o CMakeFiles/CPP-Repository.dir/ExtendedMatrix.cpp.o -c "/mnt/d/CPP repo/CPP-Repository/ExtendedMatrix.cpp"

CMakeFiles/CPP-Repository.dir/ExtendedMatrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPP-Repository.dir/ExtendedMatrix.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -include "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx" -E "/mnt/d/CPP repo/CPP-Repository/ExtendedMatrix.cpp" > CMakeFiles/CPP-Repository.dir/ExtendedMatrix.cpp.i

CMakeFiles/CPP-Repository.dir/ExtendedMatrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPP-Repository.dir/ExtendedMatrix.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -include "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx" -S "/mnt/d/CPP repo/CPP-Repository/ExtendedMatrix.cpp" -o CMakeFiles/CPP-Repository.dir/ExtendedMatrix.cpp.s

CMakeFiles/CPP-Repository.dir/Logger.cpp.o: CMakeFiles/CPP-Repository.dir/flags.make
CMakeFiles/CPP-Repository.dir/Logger.cpp.o: ../Logger.cpp
CMakeFiles/CPP-Repository.dir/Logger.cpp.o: CMakeFiles/CPP-Repository.dir/cmake_pch.hxx
CMakeFiles/CPP-Repository.dir/Logger.cpp.o: CMakeFiles/CPP-Repository.dir/cmake_pch.hxx.gch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/CPP-Repository.dir/Logger.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -include "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx" -o CMakeFiles/CPP-Repository.dir/Logger.cpp.o -c "/mnt/d/CPP repo/CPP-Repository/Logger.cpp"

CMakeFiles/CPP-Repository.dir/Logger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPP-Repository.dir/Logger.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -include "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx" -E "/mnt/d/CPP repo/CPP-Repository/Logger.cpp" > CMakeFiles/CPP-Repository.dir/Logger.cpp.i

CMakeFiles/CPP-Repository.dir/Logger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPP-Repository.dir/Logger.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -include "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx" -S "/mnt/d/CPP repo/CPP-Repository/Logger.cpp" -o CMakeFiles/CPP-Repository.dir/Logger.cpp.s

CMakeFiles/CPP-Repository.dir/main.cpp.o: CMakeFiles/CPP-Repository.dir/flags.make
CMakeFiles/CPP-Repository.dir/main.cpp.o: ../main.cpp
CMakeFiles/CPP-Repository.dir/main.cpp.o: CMakeFiles/CPP-Repository.dir/cmake_pch.hxx
CMakeFiles/CPP-Repository.dir/main.cpp.o: CMakeFiles/CPP-Repository.dir/cmake_pch.hxx.gch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/CPP-Repository.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -include "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx" -o CMakeFiles/CPP-Repository.dir/main.cpp.o -c "/mnt/d/CPP repo/CPP-Repository/main.cpp"

CMakeFiles/CPP-Repository.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPP-Repository.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -include "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx" -E "/mnt/d/CPP repo/CPP-Repository/main.cpp" > CMakeFiles/CPP-Repository.dir/main.cpp.i

CMakeFiles/CPP-Repository.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPP-Repository.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -include "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx" -S "/mnt/d/CPP repo/CPP-Repository/main.cpp" -o CMakeFiles/CPP-Repository.dir/main.cpp.s

CMakeFiles/CPP-Repository.dir/Matrix.cpp.o: CMakeFiles/CPP-Repository.dir/flags.make
CMakeFiles/CPP-Repository.dir/Matrix.cpp.o: ../Matrix.cpp
CMakeFiles/CPP-Repository.dir/Matrix.cpp.o: CMakeFiles/CPP-Repository.dir/cmake_pch.hxx
CMakeFiles/CPP-Repository.dir/Matrix.cpp.o: CMakeFiles/CPP-Repository.dir/cmake_pch.hxx.gch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/CPP-Repository.dir/Matrix.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -include "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx" -o CMakeFiles/CPP-Repository.dir/Matrix.cpp.o -c "/mnt/d/CPP repo/CPP-Repository/Matrix.cpp"

CMakeFiles/CPP-Repository.dir/Matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPP-Repository.dir/Matrix.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -include "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx" -E "/mnt/d/CPP repo/CPP-Repository/Matrix.cpp" > CMakeFiles/CPP-Repository.dir/Matrix.cpp.i

CMakeFiles/CPP-Repository.dir/Matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPP-Repository.dir/Matrix.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -include "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx" -S "/mnt/d/CPP repo/CPP-Repository/Matrix.cpp" -o CMakeFiles/CPP-Repository.dir/Matrix.cpp.s

CMakeFiles/CPP-Repository.dir/PointCharge.cpp.o: CMakeFiles/CPP-Repository.dir/flags.make
CMakeFiles/CPP-Repository.dir/PointCharge.cpp.o: ../PointCharge.cpp
CMakeFiles/CPP-Repository.dir/PointCharge.cpp.o: CMakeFiles/CPP-Repository.dir/cmake_pch.hxx
CMakeFiles/CPP-Repository.dir/PointCharge.cpp.o: CMakeFiles/CPP-Repository.dir/cmake_pch.hxx.gch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/CPP-Repository.dir/PointCharge.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -include "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx" -o CMakeFiles/CPP-Repository.dir/PointCharge.cpp.o -c "/mnt/d/CPP repo/CPP-Repository/PointCharge.cpp"

CMakeFiles/CPP-Repository.dir/PointCharge.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPP-Repository.dir/PointCharge.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -include "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx" -E "/mnt/d/CPP repo/CPP-Repository/PointCharge.cpp" > CMakeFiles/CPP-Repository.dir/PointCharge.cpp.i

CMakeFiles/CPP-Repository.dir/PointCharge.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPP-Repository.dir/PointCharge.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -include "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx" -S "/mnt/d/CPP repo/CPP-Repository/PointCharge.cpp" -o CMakeFiles/CPP-Repository.dir/PointCharge.cpp.s

CMakeFiles/CPP-Repository.dir/smartMutex.cpp.o: CMakeFiles/CPP-Repository.dir/flags.make
CMakeFiles/CPP-Repository.dir/smartMutex.cpp.o: ../smartMutex.cpp
CMakeFiles/CPP-Repository.dir/smartMutex.cpp.o: CMakeFiles/CPP-Repository.dir/cmake_pch.hxx
CMakeFiles/CPP-Repository.dir/smartMutex.cpp.o: CMakeFiles/CPP-Repository.dir/cmake_pch.hxx.gch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/CPP-Repository.dir/smartMutex.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -include "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx" -o CMakeFiles/CPP-Repository.dir/smartMutex.cpp.o -c "/mnt/d/CPP repo/CPP-Repository/smartMutex.cpp"

CMakeFiles/CPP-Repository.dir/smartMutex.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPP-Repository.dir/smartMutex.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -include "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx" -E "/mnt/d/CPP repo/CPP-Repository/smartMutex.cpp" > CMakeFiles/CPP-Repository.dir/smartMutex.cpp.i

CMakeFiles/CPP-Repository.dir/smartMutex.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPP-Repository.dir/smartMutex.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -include "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx" -S "/mnt/d/CPP repo/CPP-Repository/smartMutex.cpp" -o CMakeFiles/CPP-Repository.dir/smartMutex.cpp.s

CMakeFiles/CPP-Repository.dir/Sort.cpp.o: CMakeFiles/CPP-Repository.dir/flags.make
CMakeFiles/CPP-Repository.dir/Sort.cpp.o: ../Sort.cpp
CMakeFiles/CPP-Repository.dir/Sort.cpp.o: CMakeFiles/CPP-Repository.dir/cmake_pch.hxx
CMakeFiles/CPP-Repository.dir/Sort.cpp.o: CMakeFiles/CPP-Repository.dir/cmake_pch.hxx.gch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/CPP-Repository.dir/Sort.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -include "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx" -o CMakeFiles/CPP-Repository.dir/Sort.cpp.o -c "/mnt/d/CPP repo/CPP-Repository/Sort.cpp"

CMakeFiles/CPP-Repository.dir/Sort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPP-Repository.dir/Sort.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -include "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx" -E "/mnt/d/CPP repo/CPP-Repository/Sort.cpp" > CMakeFiles/CPP-Repository.dir/Sort.cpp.i

CMakeFiles/CPP-Repository.dir/Sort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPP-Repository.dir/Sort.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -include "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx" -S "/mnt/d/CPP repo/CPP-Repository/Sort.cpp" -o CMakeFiles/CPP-Repository.dir/Sort.cpp.s

CMakeFiles/CPP-Repository.dir/Vector.cpp.o: CMakeFiles/CPP-Repository.dir/flags.make
CMakeFiles/CPP-Repository.dir/Vector.cpp.o: ../Vector.cpp
CMakeFiles/CPP-Repository.dir/Vector.cpp.o: CMakeFiles/CPP-Repository.dir/cmake_pch.hxx
CMakeFiles/CPP-Repository.dir/Vector.cpp.o: CMakeFiles/CPP-Repository.dir/cmake_pch.hxx.gch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/CPP-Repository.dir/Vector.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -include "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx" -o CMakeFiles/CPP-Repository.dir/Vector.cpp.o -c "/mnt/d/CPP repo/CPP-Repository/Vector.cpp"

CMakeFiles/CPP-Repository.dir/Vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPP-Repository.dir/Vector.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -include "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx" -E "/mnt/d/CPP repo/CPP-Repository/Vector.cpp" > CMakeFiles/CPP-Repository.dir/Vector.cpp.i

CMakeFiles/CPP-Repository.dir/Vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPP-Repository.dir/Vector.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -include "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/cmake_pch.hxx" -S "/mnt/d/CPP repo/CPP-Repository/Vector.cpp" -o CMakeFiles/CPP-Repository.dir/Vector.cpp.s

# Object files for target CPP-Repository
CPP__Repository_OBJECTS = \
"CMakeFiles/CPP-Repository.dir/ExtendedMatrix.cpp.o" \
"CMakeFiles/CPP-Repository.dir/Logger.cpp.o" \
"CMakeFiles/CPP-Repository.dir/main.cpp.o" \
"CMakeFiles/CPP-Repository.dir/Matrix.cpp.o" \
"CMakeFiles/CPP-Repository.dir/PointCharge.cpp.o" \
"CMakeFiles/CPP-Repository.dir/smartMutex.cpp.o" \
"CMakeFiles/CPP-Repository.dir/Sort.cpp.o" \
"CMakeFiles/CPP-Repository.dir/Vector.cpp.o"

# External object files for target CPP-Repository
CPP__Repository_EXTERNAL_OBJECTS =

CPP-Repository: CMakeFiles/CPP-Repository.dir/cmake_pch.hxx.gch
CPP-Repository: CMakeFiles/CPP-Repository.dir/ExtendedMatrix.cpp.o
CPP-Repository: CMakeFiles/CPP-Repository.dir/Logger.cpp.o
CPP-Repository: CMakeFiles/CPP-Repository.dir/main.cpp.o
CPP-Repository: CMakeFiles/CPP-Repository.dir/Matrix.cpp.o
CPP-Repository: CMakeFiles/CPP-Repository.dir/PointCharge.cpp.o
CPP-Repository: CMakeFiles/CPP-Repository.dir/smartMutex.cpp.o
CPP-Repository: CMakeFiles/CPP-Repository.dir/Sort.cpp.o
CPP-Repository: CMakeFiles/CPP-Repository.dir/Vector.cpp.o
CPP-Repository: CMakeFiles/CPP-Repository.dir/build.make
CPP-Repository: CMakeFiles/CPP-Repository.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable CPP-Repository"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CPP-Repository.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CPP-Repository.dir/build: CPP-Repository

.PHONY : CMakeFiles/CPP-Repository.dir/build

CMakeFiles/CPP-Repository.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CPP-Repository.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CPP-Repository.dir/clean

CMakeFiles/CPP-Repository.dir/depend:
	cd "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/d/CPP repo/CPP-Repository" "/mnt/d/CPP repo/CPP-Repository" "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug" "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug" "/mnt/d/CPP repo/CPP-Repository/cmake-build-debug/CMakeFiles/CPP-Repository.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CPP-Repository.dir/depend
