# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.17.0_1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.17.0_1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jeongjinho/vscode/opencv

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jeongjinho/vscode/opencv

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/local/Cellar/cmake/3.17.0_1/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/local/Cellar/cmake/3.17.0_1/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/jeongjinho/vscode/opencv/CMakeFiles /Users/jeongjinho/vscode/opencv/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/jeongjinho/vscode/opencv/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named opencv

# Build rule for target.
opencv: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 opencv
.PHONY : opencv

# fast build rule for target.
opencv/fast:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/build
.PHONY : opencv/fast

chap4.o: chap4.cpp.o

.PHONY : chap4.o

# target to build an object file
chap4.cpp.o:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap4.cpp.o
.PHONY : chap4.cpp.o

chap4.i: chap4.cpp.i

.PHONY : chap4.i

# target to preprocess a source file
chap4.cpp.i:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap4.cpp.i
.PHONY : chap4.cpp.i

chap4.s: chap4.cpp.s

.PHONY : chap4.s

# target to generate assembly for a file
chap4.cpp.s:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap4.cpp.s
.PHONY : chap4.cpp.s

chap5.o: chap5.cpp.o

.PHONY : chap5.o

# target to build an object file
chap5.cpp.o:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap5.cpp.o
.PHONY : chap5.cpp.o

chap5.i: chap5.cpp.i

.PHONY : chap5.i

# target to preprocess a source file
chap5.cpp.i:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap5.cpp.i
.PHONY : chap5.cpp.i

chap5.s: chap5.cpp.s

.PHONY : chap5.s

# target to generate assembly for a file
chap5.cpp.s:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap5.cpp.s
.PHONY : chap5.cpp.s

chap6.o: chap6.cpp.o

.PHONY : chap6.o

# target to build an object file
chap6.cpp.o:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap6.cpp.o
.PHONY : chap6.cpp.o

chap6.i: chap6.cpp.i

.PHONY : chap6.i

# target to preprocess a source file
chap6.cpp.i:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap6.cpp.i
.PHONY : chap6.cpp.i

chap6.s: chap6.cpp.s

.PHONY : chap6.s

# target to generate assembly for a file
chap6.cpp.s:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap6.cpp.s
.PHONY : chap6.cpp.s

chap7.o: chap7.cpp.o

.PHONY : chap7.o

# target to build an object file
chap7.cpp.o:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap7.cpp.o
.PHONY : chap7.cpp.o

chap7.i: chap7.cpp.i

.PHONY : chap7.i

# target to preprocess a source file
chap7.cpp.i:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap7.cpp.i
.PHONY : chap7.cpp.i

chap7.s: chap7.cpp.s

.PHONY : chap7.s

# target to generate assembly for a file
chap7.cpp.s:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap7.cpp.s
.PHONY : chap7.cpp.s

hellocv.o: hellocv.cpp.o

.PHONY : hellocv.o

# target to build an object file
hellocv.cpp.o:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/hellocv.cpp.o
.PHONY : hellocv.cpp.o

hellocv.i: hellocv.cpp.i

.PHONY : hellocv.i

# target to preprocess a source file
hellocv.cpp.i:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/hellocv.cpp.i
.PHONY : hellocv.cpp.i

hellocv.s: hellocv.cpp.s

.PHONY : hellocv.s

# target to generate assembly for a file
hellocv.cpp.s:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/hellocv.cpp.s
.PHONY : hellocv.cpp.s

video.o: video.cpp.o

.PHONY : video.o

# target to build an object file
video.cpp.o:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/video.cpp.o
.PHONY : video.cpp.o

video.i: video.cpp.i

.PHONY : video.i

# target to preprocess a source file
video.cpp.i:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/video.cpp.i
.PHONY : video.cpp.i

video.s: video.cpp.s

.PHONY : video.s

# target to generate assembly for a file
video.cpp.s:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/video.cpp.s
.PHONY : video.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... opencv"
	@echo "... chap4.o"
	@echo "... chap4.i"
	@echo "... chap4.s"
	@echo "... chap5.o"
	@echo "... chap5.i"
	@echo "... chap5.s"
	@echo "... chap6.o"
	@echo "... chap6.i"
	@echo "... chap6.s"
	@echo "... chap7.o"
	@echo "... chap7.i"
	@echo "... chap7.s"
	@echo "... hellocv.o"
	@echo "... hellocv.i"
	@echo "... hellocv.s"
	@echo "... video.o"
	@echo "... video.i"
	@echo "... video.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

