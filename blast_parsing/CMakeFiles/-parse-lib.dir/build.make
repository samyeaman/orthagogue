# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/klatremus/Dokumenter/Work/turboOrtho_0.9.9.0/blast_parsing

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/klatremus/Dokumenter/Work/turboOrtho_0.9.9.0/blast_parsing

# Include any dependencies generated for this target.
include CMakeFiles/-parse-lib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/-parse-lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/-parse-lib.dir/flags.make

CMakeFiles/-parse-lib.dir/blast_parsing.cxx.o: CMakeFiles/-parse-lib.dir/flags.make
CMakeFiles/-parse-lib.dir/blast_parsing.cxx.o: blast_parsing.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/klatremus/Dokumenter/Work/turboOrtho_0.9.9.0/blast_parsing/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/-parse-lib.dir/blast_parsing.cxx.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/-parse-lib.dir/blast_parsing.cxx.o -c /home/klatremus/Dokumenter/Work/turboOrtho_0.9.9.0/blast_parsing/blast_parsing.cxx

CMakeFiles/-parse-lib.dir/blast_parsing.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/-parse-lib.dir/blast_parsing.cxx.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/klatremus/Dokumenter/Work/turboOrtho_0.9.9.0/blast_parsing/blast_parsing.cxx > CMakeFiles/-parse-lib.dir/blast_parsing.cxx.i

CMakeFiles/-parse-lib.dir/blast_parsing.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/-parse-lib.dir/blast_parsing.cxx.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/klatremus/Dokumenter/Work/turboOrtho_0.9.9.0/blast_parsing/blast_parsing.cxx -o CMakeFiles/-parse-lib.dir/blast_parsing.cxx.s

CMakeFiles/-parse-lib.dir/blast_parsing.cxx.o.requires:
.PHONY : CMakeFiles/-parse-lib.dir/blast_parsing.cxx.o.requires

CMakeFiles/-parse-lib.dir/blast_parsing.cxx.o.provides: CMakeFiles/-parse-lib.dir/blast_parsing.cxx.o.requires
	$(MAKE) -f CMakeFiles/-parse-lib.dir/build.make CMakeFiles/-parse-lib.dir/blast_parsing.cxx.o.provides.build
.PHONY : CMakeFiles/-parse-lib.dir/blast_parsing.cxx.o.provides

CMakeFiles/-parse-lib.dir/blast_parsing.cxx.o.provides.build: CMakeFiles/-parse-lib.dir/blast_parsing.cxx.o

# Object files for target -parse-lib
__parse__lib_OBJECTS = \
"CMakeFiles/-parse-lib.dir/blast_parsing.cxx.o"

# External object files for target -parse-lib
__parse__lib_EXTERNAL_OBJECTS =

lib-parse-lib.a: CMakeFiles/-parse-lib.dir/blast_parsing.cxx.o
lib-parse-lib.a: CMakeFiles/-parse-lib.dir/build.make
lib-parse-lib.a: CMakeFiles/-parse-lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library lib-parse-lib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/-parse-lib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/-parse-lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/-parse-lib.dir/build: lib-parse-lib.a
.PHONY : CMakeFiles/-parse-lib.dir/build

CMakeFiles/-parse-lib.dir/requires: CMakeFiles/-parse-lib.dir/blast_parsing.cxx.o.requires
.PHONY : CMakeFiles/-parse-lib.dir/requires

CMakeFiles/-parse-lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/-parse-lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/-parse-lib.dir/clean

CMakeFiles/-parse-lib.dir/depend:
	cd /home/klatremus/Dokumenter/Work/turboOrtho_0.9.9.0/blast_parsing && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/klatremus/Dokumenter/Work/turboOrtho_0.9.9.0/blast_parsing /home/klatremus/Dokumenter/Work/turboOrtho_0.9.9.0/blast_parsing /home/klatremus/Dokumenter/Work/turboOrtho_0.9.9.0/blast_parsing /home/klatremus/Dokumenter/Work/turboOrtho_0.9.9.0/blast_parsing /home/klatremus/Dokumenter/Work/turboOrtho_0.9.9.0/blast_parsing/CMakeFiles/-parse-lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/-parse-lib.dir/depend
