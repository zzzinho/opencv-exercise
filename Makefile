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

chap10.o: chap10.cpp.o

.PHONY : chap10.o

# target to build an object file
chap10.cpp.o:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap10.cpp.o
.PHONY : chap10.cpp.o

chap10.i: chap10.cpp.i

.PHONY : chap10.i

# target to preprocess a source file
chap10.cpp.i:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap10.cpp.i
.PHONY : chap10.cpp.i

chap10.s: chap10.cpp.s

.PHONY : chap10.s

# target to generate assembly for a file
chap10.cpp.s:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap10.cpp.s
.PHONY : chap10.cpp.s

chap11.o: chap11.cpp.o

.PHONY : chap11.o

# target to build an object file
chap11.cpp.o:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap11.cpp.o
.PHONY : chap11.cpp.o

chap11.i: chap11.cpp.i

.PHONY : chap11.i

# target to preprocess a source file
chap11.cpp.i:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap11.cpp.i
.PHONY : chap11.cpp.i

chap11.s: chap11.cpp.s

.PHONY : chap11.s

# target to generate assembly for a file
chap11.cpp.s:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap11.cpp.s
.PHONY : chap11.cpp.s

chap12.o: chap12.cpp.o

.PHONY : chap12.o

# target to build an object file
chap12.cpp.o:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap12.cpp.o
.PHONY : chap12.cpp.o

chap12.i: chap12.cpp.i

.PHONY : chap12.i

# target to preprocess a source file
chap12.cpp.i:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap12.cpp.i
.PHONY : chap12.cpp.i

chap12.s: chap12.cpp.s

.PHONY : chap12.s

# target to generate assembly for a file
chap12.cpp.s:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap12.cpp.s
.PHONY : chap12.cpp.s

chap13.o: chap13.cpp.o

.PHONY : chap13.o

# target to build an object file
chap13.cpp.o:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap13.cpp.o
.PHONY : chap13.cpp.o

chap13.i: chap13.cpp.i

.PHONY : chap13.i

# target to preprocess a source file
chap13.cpp.i:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap13.cpp.i
.PHONY : chap13.cpp.i

chap13.s: chap13.cpp.s

.PHONY : chap13.s

# target to generate assembly for a file
chap13.cpp.s:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap13.cpp.s
.PHONY : chap13.cpp.s

chap14.o: chap14.cpp.o

.PHONY : chap14.o

# target to build an object file
chap14.cpp.o:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap14.cpp.o
.PHONY : chap14.cpp.o

chap14.i: chap14.cpp.i

.PHONY : chap14.i

# target to preprocess a source file
chap14.cpp.i:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap14.cpp.i
.PHONY : chap14.cpp.i

chap14.s: chap14.cpp.s

.PHONY : chap14.s

# target to generate assembly for a file
chap14.cpp.s:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap14.cpp.s
.PHONY : chap14.cpp.s

chap15_knndigits.o: chap15_knndigits.cpp.o

.PHONY : chap15_knndigits.o

# target to build an object file
chap15_knndigits.cpp.o:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap15_knndigits.cpp.o
.PHONY : chap15_knndigits.cpp.o

chap15_knndigits.i: chap15_knndigits.cpp.i

.PHONY : chap15_knndigits.i

# target to preprocess a source file
chap15_knndigits.cpp.i:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap15_knndigits.cpp.i
.PHONY : chap15_knndigits.cpp.i

chap15_knndigits.s: chap15_knndigits.cpp.s

.PHONY : chap15_knndigits.s

# target to generate assembly for a file
chap15_knndigits.cpp.s:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap15_knndigits.cpp.s
.PHONY : chap15_knndigits.cpp.s

chap15_knnplane.o: chap15_knnplane.cpp.o

.PHONY : chap15_knnplane.o

# target to build an object file
chap15_knnplane.cpp.o:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap15_knnplane.cpp.o
.PHONY : chap15_knnplane.cpp.o

chap15_knnplane.i: chap15_knnplane.cpp.i

.PHONY : chap15_knnplane.i

# target to preprocess a source file
chap15_knnplane.cpp.i:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap15_knnplane.cpp.i
.PHONY : chap15_knnplane.cpp.i

chap15_knnplane.s: chap15_knnplane.cpp.s

.PHONY : chap15_knnplane.s

# target to generate assembly for a file
chap15_knnplane.cpp.s:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap15_knnplane.cpp.s
.PHONY : chap15_knnplane.cpp.s

chap15_svmdigits.o: chap15_svmdigits.cpp.o

.PHONY : chap15_svmdigits.o

# target to build an object file
chap15_svmdigits.cpp.o:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap15_svmdigits.cpp.o
.PHONY : chap15_svmdigits.cpp.o

chap15_svmdigits.i: chap15_svmdigits.cpp.i

.PHONY : chap15_svmdigits.i

# target to preprocess a source file
chap15_svmdigits.cpp.i:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap15_svmdigits.cpp.i
.PHONY : chap15_svmdigits.cpp.i

chap15_svmdigits.s: chap15_svmdigits.cpp.s

.PHONY : chap15_svmdigits.s

# target to generate assembly for a file
chap15_svmdigits.cpp.s:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap15_svmdigits.cpp.s
.PHONY : chap15_svmdigits.cpp.s

chap15_svmplane.o: chap15_svmplane.cpp.o

.PHONY : chap15_svmplane.o

# target to build an object file
chap15_svmplane.cpp.o:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap15_svmplane.cpp.o
.PHONY : chap15_svmplane.cpp.o

chap15_svmplane.i: chap15_svmplane.cpp.i

.PHONY : chap15_svmplane.i

# target to preprocess a source file
chap15_svmplane.cpp.i:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap15_svmplane.cpp.i
.PHONY : chap15_svmplane.cpp.i

chap15_svmplane.s: chap15_svmplane.cpp.s

.PHONY : chap15_svmplane.s

# target to generate assembly for a file
chap15_svmplane.cpp.s:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap15_svmplane.cpp.s
.PHONY : chap15_svmplane.cpp.s

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

chap8.o: chap8.cpp.o

.PHONY : chap8.o

# target to build an object file
chap8.cpp.o:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap8.cpp.o
.PHONY : chap8.cpp.o

chap8.i: chap8.cpp.i

.PHONY : chap8.i

# target to preprocess a source file
chap8.cpp.i:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap8.cpp.i
.PHONY : chap8.cpp.i

chap8.s: chap8.cpp.s

.PHONY : chap8.s

# target to generate assembly for a file
chap8.cpp.s:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap8.cpp.s
.PHONY : chap8.cpp.s

chap9.o: chap9.cpp.o

.PHONY : chap9.o

# target to build an object file
chap9.cpp.o:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap9.cpp.o
.PHONY : chap9.cpp.o

chap9.i: chap9.cpp.i

.PHONY : chap9.i

# target to preprocess a source file
chap9.cpp.i:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap9.cpp.i
.PHONY : chap9.cpp.i

chap9.s: chap9.cpp.s

.PHONY : chap9.s

# target to generate assembly for a file
chap9.cpp.s:
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/chap9.cpp.s
.PHONY : chap9.cpp.s

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
	@echo "... chap10.o"
	@echo "... chap10.i"
	@echo "... chap10.s"
	@echo "... chap11.o"
	@echo "... chap11.i"
	@echo "... chap11.s"
	@echo "... chap12.o"
	@echo "... chap12.i"
	@echo "... chap12.s"
	@echo "... chap13.o"
	@echo "... chap13.i"
	@echo "... chap13.s"
	@echo "... chap14.o"
	@echo "... chap14.i"
	@echo "... chap14.s"
	@echo "... chap15_knndigits.o"
	@echo "... chap15_knndigits.i"
	@echo "... chap15_knndigits.s"
	@echo "... chap15_knnplane.o"
	@echo "... chap15_knnplane.i"
	@echo "... chap15_knnplane.s"
	@echo "... chap15_svmdigits.o"
	@echo "... chap15_svmdigits.i"
	@echo "... chap15_svmdigits.s"
	@echo "... chap15_svmplane.o"
	@echo "... chap15_svmplane.i"
	@echo "... chap15_svmplane.s"
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
	@echo "... chap8.o"
	@echo "... chap8.i"
	@echo "... chap8.s"
	@echo "... chap9.o"
	@echo "... chap9.i"
	@echo "... chap9.s"
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

