# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.18.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.18.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/admin/Desktop/Snake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/admin/Desktop/Snake/build

# Include any dependencies generated for this target.
include app/src/CMakeFiles/src.dir/depend.make

# Include the progress variables for this target.
include app/src/CMakeFiles/src.dir/progress.make

# Include the compile flags for this target's objects.
include app/src/CMakeFiles/src.dir/flags.make

app/src/CMakeFiles/src.dir/snake.cpp.o: app/src/CMakeFiles/src.dir/flags.make
app/src/CMakeFiles/src.dir/snake.cpp.o: ../app/src/snake.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/admin/Desktop/Snake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object app/src/CMakeFiles/src.dir/snake.cpp.o"
	cd /Users/admin/Desktop/Snake/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/src.dir/snake.cpp.o -c /Users/admin/Desktop/Snake/app/src/snake.cpp

app/src/CMakeFiles/src.dir/snake.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src.dir/snake.cpp.i"
	cd /Users/admin/Desktop/Snake/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/Desktop/Snake/app/src/snake.cpp > CMakeFiles/src.dir/snake.cpp.i

app/src/CMakeFiles/src.dir/snake.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src.dir/snake.cpp.s"
	cd /Users/admin/Desktop/Snake/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/Desktop/Snake/app/src/snake.cpp -o CMakeFiles/src.dir/snake.cpp.s

app/src/CMakeFiles/src.dir/menu.cpp.o: app/src/CMakeFiles/src.dir/flags.make
app/src/CMakeFiles/src.dir/menu.cpp.o: ../app/src/menu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/admin/Desktop/Snake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object app/src/CMakeFiles/src.dir/menu.cpp.o"
	cd /Users/admin/Desktop/Snake/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/src.dir/menu.cpp.o -c /Users/admin/Desktop/Snake/app/src/menu.cpp

app/src/CMakeFiles/src.dir/menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src.dir/menu.cpp.i"
	cd /Users/admin/Desktop/Snake/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/Desktop/Snake/app/src/menu.cpp > CMakeFiles/src.dir/menu.cpp.i

app/src/CMakeFiles/src.dir/menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src.dir/menu.cpp.s"
	cd /Users/admin/Desktop/Snake/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/Desktop/Snake/app/src/menu.cpp -o CMakeFiles/src.dir/menu.cpp.s

app/src/CMakeFiles/src.dir/menu_utils.cpp.o: app/src/CMakeFiles/src.dir/flags.make
app/src/CMakeFiles/src.dir/menu_utils.cpp.o: ../app/src/menu_utils.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/admin/Desktop/Snake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object app/src/CMakeFiles/src.dir/menu_utils.cpp.o"
	cd /Users/admin/Desktop/Snake/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/src.dir/menu_utils.cpp.o -c /Users/admin/Desktop/Snake/app/src/menu_utils.cpp

app/src/CMakeFiles/src.dir/menu_utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src.dir/menu_utils.cpp.i"
	cd /Users/admin/Desktop/Snake/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/Desktop/Snake/app/src/menu_utils.cpp > CMakeFiles/src.dir/menu_utils.cpp.i

app/src/CMakeFiles/src.dir/menu_utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src.dir/menu_utils.cpp.s"
	cd /Users/admin/Desktop/Snake/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/Desktop/Snake/app/src/menu_utils.cpp -o CMakeFiles/src.dir/menu_utils.cpp.s

app/src/CMakeFiles/src.dir/game.cpp.o: app/src/CMakeFiles/src.dir/flags.make
app/src/CMakeFiles/src.dir/game.cpp.o: ../app/src/game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/admin/Desktop/Snake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object app/src/CMakeFiles/src.dir/game.cpp.o"
	cd /Users/admin/Desktop/Snake/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/src.dir/game.cpp.o -c /Users/admin/Desktop/Snake/app/src/game.cpp

app/src/CMakeFiles/src.dir/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src.dir/game.cpp.i"
	cd /Users/admin/Desktop/Snake/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/Desktop/Snake/app/src/game.cpp > CMakeFiles/src.dir/game.cpp.i

app/src/CMakeFiles/src.dir/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src.dir/game.cpp.s"
	cd /Users/admin/Desktop/Snake/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/Desktop/Snake/app/src/game.cpp -o CMakeFiles/src.dir/game.cpp.s

app/src/CMakeFiles/src.dir/utils.cpp.o: app/src/CMakeFiles/src.dir/flags.make
app/src/CMakeFiles/src.dir/utils.cpp.o: ../app/src/utils.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/admin/Desktop/Snake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object app/src/CMakeFiles/src.dir/utils.cpp.o"
	cd /Users/admin/Desktop/Snake/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/src.dir/utils.cpp.o -c /Users/admin/Desktop/Snake/app/src/utils.cpp

app/src/CMakeFiles/src.dir/utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src.dir/utils.cpp.i"
	cd /Users/admin/Desktop/Snake/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/Desktop/Snake/app/src/utils.cpp > CMakeFiles/src.dir/utils.cpp.i

app/src/CMakeFiles/src.dir/utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src.dir/utils.cpp.s"
	cd /Users/admin/Desktop/Snake/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/Desktop/Snake/app/src/utils.cpp -o CMakeFiles/src.dir/utils.cpp.s

app/src/CMakeFiles/src.dir/food.cpp.o: app/src/CMakeFiles/src.dir/flags.make
app/src/CMakeFiles/src.dir/food.cpp.o: ../app/src/food.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/admin/Desktop/Snake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object app/src/CMakeFiles/src.dir/food.cpp.o"
	cd /Users/admin/Desktop/Snake/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/src.dir/food.cpp.o -c /Users/admin/Desktop/Snake/app/src/food.cpp

app/src/CMakeFiles/src.dir/food.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src.dir/food.cpp.i"
	cd /Users/admin/Desktop/Snake/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/Desktop/Snake/app/src/food.cpp > CMakeFiles/src.dir/food.cpp.i

app/src/CMakeFiles/src.dir/food.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src.dir/food.cpp.s"
	cd /Users/admin/Desktop/Snake/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/Desktop/Snake/app/src/food.cpp -o CMakeFiles/src.dir/food.cpp.s

# Object files for target src
src_OBJECTS = \
"CMakeFiles/src.dir/snake.cpp.o" \
"CMakeFiles/src.dir/menu.cpp.o" \
"CMakeFiles/src.dir/menu_utils.cpp.o" \
"CMakeFiles/src.dir/game.cpp.o" \
"CMakeFiles/src.dir/utils.cpp.o" \
"CMakeFiles/src.dir/food.cpp.o"

# External object files for target src
src_EXTERNAL_OBJECTS =

app/src/libsrc.a: app/src/CMakeFiles/src.dir/snake.cpp.o
app/src/libsrc.a: app/src/CMakeFiles/src.dir/menu.cpp.o
app/src/libsrc.a: app/src/CMakeFiles/src.dir/menu_utils.cpp.o
app/src/libsrc.a: app/src/CMakeFiles/src.dir/game.cpp.o
app/src/libsrc.a: app/src/CMakeFiles/src.dir/utils.cpp.o
app/src/libsrc.a: app/src/CMakeFiles/src.dir/food.cpp.o
app/src/libsrc.a: app/src/CMakeFiles/src.dir/build.make
app/src/libsrc.a: app/src/CMakeFiles/src.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/admin/Desktop/Snake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX static library libsrc.a"
	cd /Users/admin/Desktop/Snake/build/app/src && $(CMAKE_COMMAND) -P CMakeFiles/src.dir/cmake_clean_target.cmake
	cd /Users/admin/Desktop/Snake/build/app/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/src.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
app/src/CMakeFiles/src.dir/build: app/src/libsrc.a

.PHONY : app/src/CMakeFiles/src.dir/build

app/src/CMakeFiles/src.dir/clean:
	cd /Users/admin/Desktop/Snake/build/app/src && $(CMAKE_COMMAND) -P CMakeFiles/src.dir/cmake_clean.cmake
.PHONY : app/src/CMakeFiles/src.dir/clean

app/src/CMakeFiles/src.dir/depend:
	cd /Users/admin/Desktop/Snake/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/admin/Desktop/Snake /Users/admin/Desktop/Snake/app/src /Users/admin/Desktop/Snake/build /Users/admin/Desktop/Snake/build/app/src /Users/admin/Desktop/Snake/build/app/src/CMakeFiles/src.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : app/src/CMakeFiles/src.dir/depend

