# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ubuntu/ros2_ws/src/testing_ros

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/ros2_ws/build/testing_ros

# Include any dependencies generated for this target.
include CMakeFiles/testing_ros.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/testing_ros.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/testing_ros.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testing_ros.dir/flags.make

CMakeFiles/testing_ros.dir/src/ext_svr.c.o: CMakeFiles/testing_ros.dir/flags.make
CMakeFiles/testing_ros.dir/src/ext_svr.c.o: /home/ubuntu/ros2_ws/src/testing_ros/src/ext_svr.c
CMakeFiles/testing_ros.dir/src/ext_svr.c.o: CMakeFiles/testing_ros.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ros2_ws/build/testing_ros/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/testing_ros.dir/src/ext_svr.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/testing_ros.dir/src/ext_svr.c.o -MF CMakeFiles/testing_ros.dir/src/ext_svr.c.o.d -o CMakeFiles/testing_ros.dir/src/ext_svr.c.o -c /home/ubuntu/ros2_ws/src/testing_ros/src/ext_svr.c

CMakeFiles/testing_ros.dir/src/ext_svr.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/testing_ros.dir/src/ext_svr.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/ros2_ws/src/testing_ros/src/ext_svr.c > CMakeFiles/testing_ros.dir/src/ext_svr.c.i

CMakeFiles/testing_ros.dir/src/ext_svr.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/testing_ros.dir/src/ext_svr.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/ros2_ws/src/testing_ros/src/ext_svr.c -o CMakeFiles/testing_ros.dir/src/ext_svr.c.s

CMakeFiles/testing_ros.dir/src/ext_work.c.o: CMakeFiles/testing_ros.dir/flags.make
CMakeFiles/testing_ros.dir/src/ext_work.c.o: /home/ubuntu/ros2_ws/src/testing_ros/src/ext_work.c
CMakeFiles/testing_ros.dir/src/ext_work.c.o: CMakeFiles/testing_ros.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ros2_ws/build/testing_ros/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/testing_ros.dir/src/ext_work.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/testing_ros.dir/src/ext_work.c.o -MF CMakeFiles/testing_ros.dir/src/ext_work.c.o.d -o CMakeFiles/testing_ros.dir/src/ext_work.c.o -c /home/ubuntu/ros2_ws/src/testing_ros/src/ext_work.c

CMakeFiles/testing_ros.dir/src/ext_work.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/testing_ros.dir/src/ext_work.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/ros2_ws/src/testing_ros/src/ext_work.c > CMakeFiles/testing_ros.dir/src/ext_work.c.i

CMakeFiles/testing_ros.dir/src/ext_work.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/testing_ros.dir/src/ext_work.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/ros2_ws/src/testing_ros/src/ext_work.c -o CMakeFiles/testing_ros.dir/src/ext_work.c.s

CMakeFiles/testing_ros.dir/src/rtiostream_interface.c.o: CMakeFiles/testing_ros.dir/flags.make
CMakeFiles/testing_ros.dir/src/rtiostream_interface.c.o: /home/ubuntu/ros2_ws/src/testing_ros/src/rtiostream_interface.c
CMakeFiles/testing_ros.dir/src/rtiostream_interface.c.o: CMakeFiles/testing_ros.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ros2_ws/build/testing_ros/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/testing_ros.dir/src/rtiostream_interface.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/testing_ros.dir/src/rtiostream_interface.c.o -MF CMakeFiles/testing_ros.dir/src/rtiostream_interface.c.o.d -o CMakeFiles/testing_ros.dir/src/rtiostream_interface.c.o -c /home/ubuntu/ros2_ws/src/testing_ros/src/rtiostream_interface.c

CMakeFiles/testing_ros.dir/src/rtiostream_interface.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/testing_ros.dir/src/rtiostream_interface.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/ros2_ws/src/testing_ros/src/rtiostream_interface.c > CMakeFiles/testing_ros.dir/src/rtiostream_interface.c.i

CMakeFiles/testing_ros.dir/src/rtiostream_interface.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/testing_ros.dir/src/rtiostream_interface.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/ros2_ws/src/testing_ros/src/rtiostream_interface.c -o CMakeFiles/testing_ros.dir/src/rtiostream_interface.c.s

CMakeFiles/testing_ros.dir/src/updown.c.o: CMakeFiles/testing_ros.dir/flags.make
CMakeFiles/testing_ros.dir/src/updown.c.o: /home/ubuntu/ros2_ws/src/testing_ros/src/updown.c
CMakeFiles/testing_ros.dir/src/updown.c.o: CMakeFiles/testing_ros.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ros2_ws/build/testing_ros/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/testing_ros.dir/src/updown.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/testing_ros.dir/src/updown.c.o -MF CMakeFiles/testing_ros.dir/src/updown.c.o.d -o CMakeFiles/testing_ros.dir/src/updown.c.o -c /home/ubuntu/ros2_ws/src/testing_ros/src/updown.c

CMakeFiles/testing_ros.dir/src/updown.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/testing_ros.dir/src/updown.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/ros2_ws/src/testing_ros/src/updown.c > CMakeFiles/testing_ros.dir/src/updown.c.i

CMakeFiles/testing_ros.dir/src/updown.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/testing_ros.dir/src/updown.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/ros2_ws/src/testing_ros/src/updown.c -o CMakeFiles/testing_ros.dir/src/updown.c.s

CMakeFiles/testing_ros.dir/src/rtiostream_tcpip.c.o: CMakeFiles/testing_ros.dir/flags.make
CMakeFiles/testing_ros.dir/src/rtiostream_tcpip.c.o: /home/ubuntu/ros2_ws/src/testing_ros/src/rtiostream_tcpip.c
CMakeFiles/testing_ros.dir/src/rtiostream_tcpip.c.o: CMakeFiles/testing_ros.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ros2_ws/build/testing_ros/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/testing_ros.dir/src/rtiostream_tcpip.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/testing_ros.dir/src/rtiostream_tcpip.c.o -MF CMakeFiles/testing_ros.dir/src/rtiostream_tcpip.c.o.d -o CMakeFiles/testing_ros.dir/src/rtiostream_tcpip.c.o -c /home/ubuntu/ros2_ws/src/testing_ros/src/rtiostream_tcpip.c

CMakeFiles/testing_ros.dir/src/rtiostream_tcpip.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/testing_ros.dir/src/rtiostream_tcpip.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/ros2_ws/src/testing_ros/src/rtiostream_tcpip.c > CMakeFiles/testing_ros.dir/src/rtiostream_tcpip.c.i

CMakeFiles/testing_ros.dir/src/rtiostream_tcpip.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/testing_ros.dir/src/rtiostream_tcpip.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/ros2_ws/src/testing_ros/src/rtiostream_tcpip.c -o CMakeFiles/testing_ros.dir/src/rtiostream_tcpip.c.s

CMakeFiles/testing_ros.dir/src/rtiostream_utils.c.o: CMakeFiles/testing_ros.dir/flags.make
CMakeFiles/testing_ros.dir/src/rtiostream_utils.c.o: /home/ubuntu/ros2_ws/src/testing_ros/src/rtiostream_utils.c
CMakeFiles/testing_ros.dir/src/rtiostream_utils.c.o: CMakeFiles/testing_ros.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ros2_ws/build/testing_ros/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/testing_ros.dir/src/rtiostream_utils.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/testing_ros.dir/src/rtiostream_utils.c.o -MF CMakeFiles/testing_ros.dir/src/rtiostream_utils.c.o.d -o CMakeFiles/testing_ros.dir/src/rtiostream_utils.c.o -c /home/ubuntu/ros2_ws/src/testing_ros/src/rtiostream_utils.c

CMakeFiles/testing_ros.dir/src/rtiostream_utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/testing_ros.dir/src/rtiostream_utils.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/ros2_ws/src/testing_ros/src/rtiostream_utils.c > CMakeFiles/testing_ros.dir/src/rtiostream_utils.c.i

CMakeFiles/testing_ros.dir/src/rtiostream_utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/testing_ros.dir/src/rtiostream_utils.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/ros2_ws/src/testing_ros/src/rtiostream_utils.c -o CMakeFiles/testing_ros.dir/src/rtiostream_utils.c.s

CMakeFiles/testing_ros.dir/src/main.cpp.o: CMakeFiles/testing_ros.dir/flags.make
CMakeFiles/testing_ros.dir/src/main.cpp.o: /home/ubuntu/ros2_ws/src/testing_ros/src/main.cpp
CMakeFiles/testing_ros.dir/src/main.cpp.o: CMakeFiles/testing_ros.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ros2_ws/build/testing_ros/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/testing_ros.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/testing_ros.dir/src/main.cpp.o -MF CMakeFiles/testing_ros.dir/src/main.cpp.o.d -o CMakeFiles/testing_ros.dir/src/main.cpp.o -c /home/ubuntu/ros2_ws/src/testing_ros/src/main.cpp

CMakeFiles/testing_ros.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testing_ros.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/ros2_ws/src/testing_ros/src/main.cpp > CMakeFiles/testing_ros.dir/src/main.cpp.i

CMakeFiles/testing_ros.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testing_ros.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/ros2_ws/src/testing_ros/src/main.cpp -o CMakeFiles/testing_ros.dir/src/main.cpp.s

CMakeFiles/testing_ros.dir/src/ros2nodeinterface.cpp.o: CMakeFiles/testing_ros.dir/flags.make
CMakeFiles/testing_ros.dir/src/ros2nodeinterface.cpp.o: /home/ubuntu/ros2_ws/src/testing_ros/src/ros2nodeinterface.cpp
CMakeFiles/testing_ros.dir/src/ros2nodeinterface.cpp.o: CMakeFiles/testing_ros.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ros2_ws/build/testing_ros/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/testing_ros.dir/src/ros2nodeinterface.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/testing_ros.dir/src/ros2nodeinterface.cpp.o -MF CMakeFiles/testing_ros.dir/src/ros2nodeinterface.cpp.o.d -o CMakeFiles/testing_ros.dir/src/ros2nodeinterface.cpp.o -c /home/ubuntu/ros2_ws/src/testing_ros/src/ros2nodeinterface.cpp

CMakeFiles/testing_ros.dir/src/ros2nodeinterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testing_ros.dir/src/ros2nodeinterface.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/ros2_ws/src/testing_ros/src/ros2nodeinterface.cpp > CMakeFiles/testing_ros.dir/src/ros2nodeinterface.cpp.i

CMakeFiles/testing_ros.dir/src/ros2nodeinterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testing_ros.dir/src/ros2nodeinterface.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/ros2_ws/src/testing_ros/src/ros2nodeinterface.cpp -o CMakeFiles/testing_ros.dir/src/ros2nodeinterface.cpp.s

CMakeFiles/testing_ros.dir/src/rtGetInf.cpp.o: CMakeFiles/testing_ros.dir/flags.make
CMakeFiles/testing_ros.dir/src/rtGetInf.cpp.o: /home/ubuntu/ros2_ws/src/testing_ros/src/rtGetInf.cpp
CMakeFiles/testing_ros.dir/src/rtGetInf.cpp.o: CMakeFiles/testing_ros.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ros2_ws/build/testing_ros/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/testing_ros.dir/src/rtGetInf.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/testing_ros.dir/src/rtGetInf.cpp.o -MF CMakeFiles/testing_ros.dir/src/rtGetInf.cpp.o.d -o CMakeFiles/testing_ros.dir/src/rtGetInf.cpp.o -c /home/ubuntu/ros2_ws/src/testing_ros/src/rtGetInf.cpp

CMakeFiles/testing_ros.dir/src/rtGetInf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testing_ros.dir/src/rtGetInf.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/ros2_ws/src/testing_ros/src/rtGetInf.cpp > CMakeFiles/testing_ros.dir/src/rtGetInf.cpp.i

CMakeFiles/testing_ros.dir/src/rtGetInf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testing_ros.dir/src/rtGetInf.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/ros2_ws/src/testing_ros/src/rtGetInf.cpp -o CMakeFiles/testing_ros.dir/src/rtGetInf.cpp.s

CMakeFiles/testing_ros.dir/src/rtGetNaN.cpp.o: CMakeFiles/testing_ros.dir/flags.make
CMakeFiles/testing_ros.dir/src/rtGetNaN.cpp.o: /home/ubuntu/ros2_ws/src/testing_ros/src/rtGetNaN.cpp
CMakeFiles/testing_ros.dir/src/rtGetNaN.cpp.o: CMakeFiles/testing_ros.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ros2_ws/build/testing_ros/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/testing_ros.dir/src/rtGetNaN.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/testing_ros.dir/src/rtGetNaN.cpp.o -MF CMakeFiles/testing_ros.dir/src/rtGetNaN.cpp.o.d -o CMakeFiles/testing_ros.dir/src/rtGetNaN.cpp.o -c /home/ubuntu/ros2_ws/src/testing_ros/src/rtGetNaN.cpp

CMakeFiles/testing_ros.dir/src/rtGetNaN.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testing_ros.dir/src/rtGetNaN.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/ros2_ws/src/testing_ros/src/rtGetNaN.cpp > CMakeFiles/testing_ros.dir/src/rtGetNaN.cpp.i

CMakeFiles/testing_ros.dir/src/rtGetNaN.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testing_ros.dir/src/rtGetNaN.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/ros2_ws/src/testing_ros/src/rtGetNaN.cpp -o CMakeFiles/testing_ros.dir/src/rtGetNaN.cpp.s

CMakeFiles/testing_ros.dir/src/rt_nonfinite.cpp.o: CMakeFiles/testing_ros.dir/flags.make
CMakeFiles/testing_ros.dir/src/rt_nonfinite.cpp.o: /home/ubuntu/ros2_ws/src/testing_ros/src/rt_nonfinite.cpp
CMakeFiles/testing_ros.dir/src/rt_nonfinite.cpp.o: CMakeFiles/testing_ros.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ros2_ws/build/testing_ros/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/testing_ros.dir/src/rt_nonfinite.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/testing_ros.dir/src/rt_nonfinite.cpp.o -MF CMakeFiles/testing_ros.dir/src/rt_nonfinite.cpp.o.d -o CMakeFiles/testing_ros.dir/src/rt_nonfinite.cpp.o -c /home/ubuntu/ros2_ws/src/testing_ros/src/rt_nonfinite.cpp

CMakeFiles/testing_ros.dir/src/rt_nonfinite.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testing_ros.dir/src/rt_nonfinite.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/ros2_ws/src/testing_ros/src/rt_nonfinite.cpp > CMakeFiles/testing_ros.dir/src/rt_nonfinite.cpp.i

CMakeFiles/testing_ros.dir/src/rt_nonfinite.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testing_ros.dir/src/rt_nonfinite.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/ros2_ws/src/testing_ros/src/rt_nonfinite.cpp -o CMakeFiles/testing_ros.dir/src/rt_nonfinite.cpp.s

CMakeFiles/testing_ros.dir/src/slros2_initialize.cpp.o: CMakeFiles/testing_ros.dir/flags.make
CMakeFiles/testing_ros.dir/src/slros2_initialize.cpp.o: /home/ubuntu/ros2_ws/src/testing_ros/src/slros2_initialize.cpp
CMakeFiles/testing_ros.dir/src/slros2_initialize.cpp.o: CMakeFiles/testing_ros.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ros2_ws/build/testing_ros/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/testing_ros.dir/src/slros2_initialize.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/testing_ros.dir/src/slros2_initialize.cpp.o -MF CMakeFiles/testing_ros.dir/src/slros2_initialize.cpp.o.d -o CMakeFiles/testing_ros.dir/src/slros2_initialize.cpp.o -c /home/ubuntu/ros2_ws/src/testing_ros/src/slros2_initialize.cpp

CMakeFiles/testing_ros.dir/src/slros2_initialize.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testing_ros.dir/src/slros2_initialize.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/ros2_ws/src/testing_ros/src/slros2_initialize.cpp > CMakeFiles/testing_ros.dir/src/slros2_initialize.cpp.i

CMakeFiles/testing_ros.dir/src/slros2_initialize.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testing_ros.dir/src/slros2_initialize.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/ros2_ws/src/testing_ros/src/slros2_initialize.cpp -o CMakeFiles/testing_ros.dir/src/slros2_initialize.cpp.s

CMakeFiles/testing_ros.dir/src/slros_busmsg_conversion.cpp.o: CMakeFiles/testing_ros.dir/flags.make
CMakeFiles/testing_ros.dir/src/slros_busmsg_conversion.cpp.o: /home/ubuntu/ros2_ws/src/testing_ros/src/slros_busmsg_conversion.cpp
CMakeFiles/testing_ros.dir/src/slros_busmsg_conversion.cpp.o: CMakeFiles/testing_ros.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ros2_ws/build/testing_ros/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/testing_ros.dir/src/slros_busmsg_conversion.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/testing_ros.dir/src/slros_busmsg_conversion.cpp.o -MF CMakeFiles/testing_ros.dir/src/slros_busmsg_conversion.cpp.o.d -o CMakeFiles/testing_ros.dir/src/slros_busmsg_conversion.cpp.o -c /home/ubuntu/ros2_ws/src/testing_ros/src/slros_busmsg_conversion.cpp

CMakeFiles/testing_ros.dir/src/slros_busmsg_conversion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testing_ros.dir/src/slros_busmsg_conversion.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/ros2_ws/src/testing_ros/src/slros_busmsg_conversion.cpp > CMakeFiles/testing_ros.dir/src/slros_busmsg_conversion.cpp.i

CMakeFiles/testing_ros.dir/src/slros_busmsg_conversion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testing_ros.dir/src/slros_busmsg_conversion.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/ros2_ws/src/testing_ros/src/slros_busmsg_conversion.cpp -o CMakeFiles/testing_ros.dir/src/slros_busmsg_conversion.cpp.s

CMakeFiles/testing_ros.dir/src/testing_ros.cpp.o: CMakeFiles/testing_ros.dir/flags.make
CMakeFiles/testing_ros.dir/src/testing_ros.cpp.o: /home/ubuntu/ros2_ws/src/testing_ros/src/testing_ros.cpp
CMakeFiles/testing_ros.dir/src/testing_ros.cpp.o: CMakeFiles/testing_ros.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ros2_ws/build/testing_ros/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/testing_ros.dir/src/testing_ros.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/testing_ros.dir/src/testing_ros.cpp.o -MF CMakeFiles/testing_ros.dir/src/testing_ros.cpp.o.d -o CMakeFiles/testing_ros.dir/src/testing_ros.cpp.o -c /home/ubuntu/ros2_ws/src/testing_ros/src/testing_ros.cpp

CMakeFiles/testing_ros.dir/src/testing_ros.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testing_ros.dir/src/testing_ros.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/ros2_ws/src/testing_ros/src/testing_ros.cpp > CMakeFiles/testing_ros.dir/src/testing_ros.cpp.i

CMakeFiles/testing_ros.dir/src/testing_ros.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testing_ros.dir/src/testing_ros.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/ros2_ws/src/testing_ros/src/testing_ros.cpp -o CMakeFiles/testing_ros.dir/src/testing_ros.cpp.s

CMakeFiles/testing_ros.dir/src/testing_ros_data.cpp.o: CMakeFiles/testing_ros.dir/flags.make
CMakeFiles/testing_ros.dir/src/testing_ros_data.cpp.o: /home/ubuntu/ros2_ws/src/testing_ros/src/testing_ros_data.cpp
CMakeFiles/testing_ros.dir/src/testing_ros_data.cpp.o: CMakeFiles/testing_ros.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ros2_ws/build/testing_ros/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/testing_ros.dir/src/testing_ros_data.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/testing_ros.dir/src/testing_ros_data.cpp.o -MF CMakeFiles/testing_ros.dir/src/testing_ros_data.cpp.o.d -o CMakeFiles/testing_ros.dir/src/testing_ros_data.cpp.o -c /home/ubuntu/ros2_ws/src/testing_ros/src/testing_ros_data.cpp

CMakeFiles/testing_ros.dir/src/testing_ros_data.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testing_ros.dir/src/testing_ros_data.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/ros2_ws/src/testing_ros/src/testing_ros_data.cpp > CMakeFiles/testing_ros.dir/src/testing_ros_data.cpp.i

CMakeFiles/testing_ros.dir/src/testing_ros_data.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testing_ros.dir/src/testing_ros_data.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/ros2_ws/src/testing_ros/src/testing_ros_data.cpp -o CMakeFiles/testing_ros.dir/src/testing_ros_data.cpp.s

# Object files for target testing_ros
testing_ros_OBJECTS = \
"CMakeFiles/testing_ros.dir/src/ext_svr.c.o" \
"CMakeFiles/testing_ros.dir/src/ext_work.c.o" \
"CMakeFiles/testing_ros.dir/src/rtiostream_interface.c.o" \
"CMakeFiles/testing_ros.dir/src/updown.c.o" \
"CMakeFiles/testing_ros.dir/src/rtiostream_tcpip.c.o" \
"CMakeFiles/testing_ros.dir/src/rtiostream_utils.c.o" \
"CMakeFiles/testing_ros.dir/src/main.cpp.o" \
"CMakeFiles/testing_ros.dir/src/ros2nodeinterface.cpp.o" \
"CMakeFiles/testing_ros.dir/src/rtGetInf.cpp.o" \
"CMakeFiles/testing_ros.dir/src/rtGetNaN.cpp.o" \
"CMakeFiles/testing_ros.dir/src/rt_nonfinite.cpp.o" \
"CMakeFiles/testing_ros.dir/src/slros2_initialize.cpp.o" \
"CMakeFiles/testing_ros.dir/src/slros_busmsg_conversion.cpp.o" \
"CMakeFiles/testing_ros.dir/src/testing_ros.cpp.o" \
"CMakeFiles/testing_ros.dir/src/testing_ros_data.cpp.o"

# External object files for target testing_ros
testing_ros_EXTERNAL_OBJECTS =

testing_ros: CMakeFiles/testing_ros.dir/src/ext_svr.c.o
testing_ros: CMakeFiles/testing_ros.dir/src/ext_work.c.o
testing_ros: CMakeFiles/testing_ros.dir/src/rtiostream_interface.c.o
testing_ros: CMakeFiles/testing_ros.dir/src/updown.c.o
testing_ros: CMakeFiles/testing_ros.dir/src/rtiostream_tcpip.c.o
testing_ros: CMakeFiles/testing_ros.dir/src/rtiostream_utils.c.o
testing_ros: CMakeFiles/testing_ros.dir/src/main.cpp.o
testing_ros: CMakeFiles/testing_ros.dir/src/ros2nodeinterface.cpp.o
testing_ros: CMakeFiles/testing_ros.dir/src/rtGetInf.cpp.o
testing_ros: CMakeFiles/testing_ros.dir/src/rtGetNaN.cpp.o
testing_ros: CMakeFiles/testing_ros.dir/src/rt_nonfinite.cpp.o
testing_ros: CMakeFiles/testing_ros.dir/src/slros2_initialize.cpp.o
testing_ros: CMakeFiles/testing_ros.dir/src/slros_busmsg_conversion.cpp.o
testing_ros: CMakeFiles/testing_ros.dir/src/testing_ros.cpp.o
testing_ros: CMakeFiles/testing_ros.dir/src/testing_ros_data.cpp.o
testing_ros: CMakeFiles/testing_ros.dir/build.make
testing_ros: /opt/ros/humble/lib/librclcpp.so
testing_ros: /opt/ros/humble/lib/libsensor_msgs__rosidl_typesupport_fastrtps_c.so
testing_ros: /opt/ros/humble/lib/libsensor_msgs__rosidl_typesupport_fastrtps_cpp.so
testing_ros: /opt/ros/humble/lib/libsensor_msgs__rosidl_typesupport_introspection_c.so
testing_ros: /opt/ros/humble/lib/libsensor_msgs__rosidl_typesupport_introspection_cpp.so
testing_ros: /opt/ros/humble/lib/libsensor_msgs__rosidl_generator_py.so
testing_ros: /opt/ros/humble/lib/liblibstatistics_collector.so
testing_ros: /opt/ros/humble/lib/librcl.so
testing_ros: /opt/ros/humble/lib/librmw_implementation.so
testing_ros: /opt/ros/humble/lib/libament_index_cpp.so
testing_ros: /opt/ros/humble/lib/librcl_logging_spdlog.so
testing_ros: /opt/ros/humble/lib/librcl_logging_interface.so
testing_ros: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_fastrtps_c.so
testing_ros: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
testing_ros: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_fastrtps_cpp.so
testing_ros: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
testing_ros: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_cpp.so
testing_ros: /opt/ros/humble/lib/librcl_interfaces__rosidl_generator_py.so
testing_ros: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_c.so
testing_ros: /opt/ros/humble/lib/librcl_interfaces__rosidl_generator_c.so
testing_ros: /opt/ros/humble/lib/librcl_yaml_param_parser.so
testing_ros: /opt/ros/humble/lib/libyaml.so
testing_ros: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_c.so
testing_ros: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_cpp.so
testing_ros: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
testing_ros: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
testing_ros: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
testing_ros: /opt/ros/humble/lib/librosgraph_msgs__rosidl_generator_py.so
testing_ros: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_c.so
testing_ros: /opt/ros/humble/lib/librosgraph_msgs__rosidl_generator_c.so
testing_ros: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_fastrtps_c.so
testing_ros: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_fastrtps_cpp.so
testing_ros: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
testing_ros: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
testing_ros: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
testing_ros: /opt/ros/humble/lib/libstatistics_msgs__rosidl_generator_py.so
testing_ros: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_c.so
testing_ros: /opt/ros/humble/lib/libstatistics_msgs__rosidl_generator_c.so
testing_ros: /opt/ros/humble/lib/libtracetools.so
testing_ros: /opt/ros/humble/lib/libgeometry_msgs__rosidl_typesupport_fastrtps_c.so
testing_ros: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_fastrtps_c.so
testing_ros: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_c.so
testing_ros: /opt/ros/humble/lib/librosidl_typesupport_fastrtps_c.so
testing_ros: /opt/ros/humble/lib/libgeometry_msgs__rosidl_typesupport_fastrtps_cpp.so
testing_ros: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_fastrtps_cpp.so
testing_ros: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_cpp.so
testing_ros: /opt/ros/humble/lib/librosidl_typesupport_fastrtps_cpp.so
testing_ros: /opt/ros/humble/lib/libfastcdr.so.1.0.24
testing_ros: /opt/ros/humble/lib/librmw.so
testing_ros: /opt/ros/humble/lib/libgeometry_msgs__rosidl_typesupport_introspection_c.so
testing_ros: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
testing_ros: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
testing_ros: /opt/ros/humble/lib/libgeometry_msgs__rosidl_typesupport_introspection_cpp.so
testing_ros: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
testing_ros: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
testing_ros: /opt/ros/humble/lib/librosidl_typesupport_introspection_cpp.so
testing_ros: /opt/ros/humble/lib/librosidl_typesupport_introspection_c.so
testing_ros: /opt/ros/humble/lib/libsensor_msgs__rosidl_typesupport_c.so
testing_ros: /opt/ros/humble/lib/libsensor_msgs__rosidl_generator_c.so
testing_ros: /opt/ros/humble/lib/libgeometry_msgs__rosidl_generator_py.so
testing_ros: /opt/ros/humble/lib/libgeometry_msgs__rosidl_typesupport_c.so
testing_ros: /opt/ros/humble/lib/libgeometry_msgs__rosidl_generator_c.so
testing_ros: /opt/ros/humble/lib/libstd_msgs__rosidl_generator_py.so
testing_ros: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_generator_py.so
testing_ros: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_c.so
testing_ros: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
testing_ros: /opt/ros/humble/lib/libstd_msgs__rosidl_generator_c.so
testing_ros: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_generator_c.so
testing_ros: /usr/lib/aarch64-linux-gnu/libpython3.10.so
testing_ros: /opt/ros/humble/lib/libsensor_msgs__rosidl_typesupport_cpp.so
testing_ros: /opt/ros/humble/lib/libgeometry_msgs__rosidl_typesupport_cpp.so
testing_ros: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_cpp.so
testing_ros: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
testing_ros: /opt/ros/humble/lib/librosidl_typesupport_cpp.so
testing_ros: /opt/ros/humble/lib/librosidl_typesupport_c.so
testing_ros: /opt/ros/humble/lib/librcpputils.so
testing_ros: /opt/ros/humble/lib/librosidl_runtime_c.so
testing_ros: /opt/ros/humble/lib/librcutils.so
testing_ros: CMakeFiles/testing_ros.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/ros2_ws/build/testing_ros/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Linking CXX executable testing_ros"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testing_ros.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testing_ros.dir/build: testing_ros
.PHONY : CMakeFiles/testing_ros.dir/build

CMakeFiles/testing_ros.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/testing_ros.dir/cmake_clean.cmake
.PHONY : CMakeFiles/testing_ros.dir/clean

CMakeFiles/testing_ros.dir/depend:
	cd /home/ubuntu/ros2_ws/build/testing_ros && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/ros2_ws/src/testing_ros /home/ubuntu/ros2_ws/src/testing_ros /home/ubuntu/ros2_ws/build/testing_ros /home/ubuntu/ros2_ws/build/testing_ros /home/ubuntu/ros2_ws/build/testing_ros/CMakeFiles/testing_ros.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testing_ros.dir/depend

