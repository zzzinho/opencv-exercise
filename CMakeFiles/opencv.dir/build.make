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

# Include any dependencies generated for this target.
include CMakeFiles/opencv.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/opencv.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/opencv.dir/flags.make

CMakeFiles/opencv.dir/chap4.cpp.o: CMakeFiles/opencv.dir/flags.make
CMakeFiles/opencv.dir/chap4.cpp.o: chap4.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jeongjinho/vscode/opencv/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/opencv.dir/chap4.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opencv.dir/chap4.cpp.o -c /Users/jeongjinho/vscode/opencv/chap4.cpp

CMakeFiles/opencv.dir/chap4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv.dir/chap4.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeongjinho/vscode/opencv/chap4.cpp > CMakeFiles/opencv.dir/chap4.cpp.i

CMakeFiles/opencv.dir/chap4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv.dir/chap4.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeongjinho/vscode/opencv/chap4.cpp -o CMakeFiles/opencv.dir/chap4.cpp.s

CMakeFiles/opencv.dir/chap5.cpp.o: CMakeFiles/opencv.dir/flags.make
CMakeFiles/opencv.dir/chap5.cpp.o: chap5.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jeongjinho/vscode/opencv/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/opencv.dir/chap5.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opencv.dir/chap5.cpp.o -c /Users/jeongjinho/vscode/opencv/chap5.cpp

CMakeFiles/opencv.dir/chap5.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv.dir/chap5.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeongjinho/vscode/opencv/chap5.cpp > CMakeFiles/opencv.dir/chap5.cpp.i

CMakeFiles/opencv.dir/chap5.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv.dir/chap5.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeongjinho/vscode/opencv/chap5.cpp -o CMakeFiles/opencv.dir/chap5.cpp.s

CMakeFiles/opencv.dir/hellocv.cpp.o: CMakeFiles/opencv.dir/flags.make
CMakeFiles/opencv.dir/hellocv.cpp.o: hellocv.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jeongjinho/vscode/opencv/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/opencv.dir/hellocv.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opencv.dir/hellocv.cpp.o -c /Users/jeongjinho/vscode/opencv/hellocv.cpp

CMakeFiles/opencv.dir/hellocv.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv.dir/hellocv.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeongjinho/vscode/opencv/hellocv.cpp > CMakeFiles/opencv.dir/hellocv.cpp.i

CMakeFiles/opencv.dir/hellocv.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv.dir/hellocv.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeongjinho/vscode/opencv/hellocv.cpp -o CMakeFiles/opencv.dir/hellocv.cpp.s

CMakeFiles/opencv.dir/video.cpp.o: CMakeFiles/opencv.dir/flags.make
CMakeFiles/opencv.dir/video.cpp.o: video.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jeongjinho/vscode/opencv/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/opencv.dir/video.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opencv.dir/video.cpp.o -c /Users/jeongjinho/vscode/opencv/video.cpp

CMakeFiles/opencv.dir/video.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv.dir/video.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeongjinho/vscode/opencv/video.cpp > CMakeFiles/opencv.dir/video.cpp.i

CMakeFiles/opencv.dir/video.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv.dir/video.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeongjinho/vscode/opencv/video.cpp -o CMakeFiles/opencv.dir/video.cpp.s

# Object files for target opencv
opencv_OBJECTS = \
"CMakeFiles/opencv.dir/chap4.cpp.o" \
"CMakeFiles/opencv.dir/chap5.cpp.o" \
"CMakeFiles/opencv.dir/hellocv.cpp.o" \
"CMakeFiles/opencv.dir/video.cpp.o"

# External object files for target opencv
opencv_EXTERNAL_OBJECTS =

opencv: CMakeFiles/opencv.dir/chap4.cpp.o
opencv: CMakeFiles/opencv.dir/chap5.cpp.o
opencv: CMakeFiles/opencv.dir/hellocv.cpp.o
opencv: CMakeFiles/opencv.dir/video.cpp.o
opencv: CMakeFiles/opencv.dir/build.make
opencv: /usr/local/lib/libopencv_gapi.4.2.0.dylib
opencv: /usr/local/lib/libopencv_stitching.4.2.0.dylib
opencv: /usr/local/lib/libopencv_aruco.4.2.0.dylib
opencv: /usr/local/lib/libopencv_bgsegm.4.2.0.dylib
opencv: /usr/local/lib/libopencv_bioinspired.4.2.0.dylib
opencv: /usr/local/lib/libopencv_ccalib.4.2.0.dylib
opencv: /usr/local/lib/libopencv_dnn_objdetect.4.2.0.dylib
opencv: /usr/local/lib/libopencv_dnn_superres.4.2.0.dylib
opencv: /usr/local/lib/libopencv_dpm.4.2.0.dylib
opencv: /usr/local/lib/libopencv_face.4.2.0.dylib
opencv: /usr/local/lib/libopencv_freetype.4.2.0.dylib
opencv: /usr/local/lib/libopencv_fuzzy.4.2.0.dylib
opencv: /usr/local/lib/libopencv_hfs.4.2.0.dylib
opencv: /usr/local/lib/libopencv_img_hash.4.2.0.dylib
opencv: /usr/local/lib/libopencv_line_descriptor.4.2.0.dylib
opencv: /usr/local/lib/libopencv_quality.4.2.0.dylib
opencv: /usr/local/lib/libopencv_reg.4.2.0.dylib
opencv: /usr/local/lib/libopencv_rgbd.4.2.0.dylib
opencv: /usr/local/lib/libopencv_saliency.4.2.0.dylib
opencv: /usr/local/lib/libopencv_sfm.4.2.0.dylib
opencv: /usr/local/lib/libopencv_stereo.4.2.0.dylib
opencv: /usr/local/lib/libopencv_structured_light.4.2.0.dylib
opencv: /usr/local/lib/libopencv_superres.4.2.0.dylib
opencv: /usr/local/lib/libopencv_surface_matching.4.2.0.dylib
opencv: /usr/local/lib/libopencv_tracking.4.2.0.dylib
opencv: /usr/local/lib/libopencv_videostab.4.2.0.dylib
opencv: /usr/local/lib/libopencv_xfeatures2d.4.2.0.dylib
opencv: /usr/local/lib/libopencv_xobjdetect.4.2.0.dylib
opencv: /usr/local/lib/libopencv_xphoto.4.2.0.dylib
opencv: /usr/local/lib/libopencv_highgui.4.2.0.dylib
opencv: /usr/local/lib/libopencv_shape.4.2.0.dylib
opencv: /usr/local/lib/libopencv_datasets.4.2.0.dylib
opencv: /usr/local/lib/libopencv_plot.4.2.0.dylib
opencv: /usr/local/lib/libopencv_text.4.2.0.dylib
opencv: /usr/local/lib/libopencv_dnn.4.2.0.dylib
opencv: /usr/local/lib/libopencv_ml.4.2.0.dylib
opencv: /usr/local/lib/libopencv_phase_unwrapping.4.2.0.dylib
opencv: /usr/local/lib/libopencv_optflow.4.2.0.dylib
opencv: /usr/local/lib/libopencv_ximgproc.4.2.0.dylib
opencv: /usr/local/lib/libopencv_video.4.2.0.dylib
opencv: /usr/local/lib/libopencv_videoio.4.2.0.dylib
opencv: /usr/local/lib/libopencv_imgcodecs.4.2.0.dylib
opencv: /usr/local/lib/libopencv_objdetect.4.2.0.dylib
opencv: /usr/local/lib/libopencv_calib3d.4.2.0.dylib
opencv: /usr/local/lib/libopencv_features2d.4.2.0.dylib
opencv: /usr/local/lib/libopencv_flann.4.2.0.dylib
opencv: /usr/local/lib/libopencv_photo.4.2.0.dylib
opencv: /usr/local/lib/libopencv_imgproc.4.2.0.dylib
opencv: /usr/local/lib/libopencv_core.4.2.0.dylib
opencv: CMakeFiles/opencv.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jeongjinho/vscode/opencv/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable opencv"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/opencv.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/opencv.dir/build: opencv

.PHONY : CMakeFiles/opencv.dir/build

CMakeFiles/opencv.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/opencv.dir/cmake_clean.cmake
.PHONY : CMakeFiles/opencv.dir/clean

CMakeFiles/opencv.dir/depend:
	cd /Users/jeongjinho/vscode/opencv && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jeongjinho/vscode/opencv /Users/jeongjinho/vscode/opencv /Users/jeongjinho/vscode/opencv /Users/jeongjinho/vscode/opencv /Users/jeongjinho/vscode/opencv/CMakeFiles/opencv.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/opencv.dir/depend

