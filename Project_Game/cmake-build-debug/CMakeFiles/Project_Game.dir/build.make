# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /snap/clion/275/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /snap/clion/275/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/brayan/POO/RPG_GAME/Project_Game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/brayan/POO/RPG_GAME/Project_Game/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Project_Game.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Project_Game.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Project_Game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project_Game.dir/flags.make

CMakeFiles/Project_Game.dir/main.cpp.o: CMakeFiles/Project_Game.dir/flags.make
CMakeFiles/Project_Game.dir/main.cpp.o: /home/brayan/POO/RPG_GAME/Project_Game/main.cpp
CMakeFiles/Project_Game.dir/main.cpp.o: CMakeFiles/Project_Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/brayan/POO/RPG_GAME/Project_Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Project_Game.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Project_Game.dir/main.cpp.o -MF CMakeFiles/Project_Game.dir/main.cpp.o.d -o CMakeFiles/Project_Game.dir/main.cpp.o -c /home/brayan/POO/RPG_GAME/Project_Game/main.cpp

CMakeFiles/Project_Game.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Project_Game.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brayan/POO/RPG_GAME/Project_Game/main.cpp > CMakeFiles/Project_Game.dir/main.cpp.i

CMakeFiles/Project_Game.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Project_Game.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brayan/POO/RPG_GAME/Project_Game/main.cpp -o CMakeFiles/Project_Game.dir/main.cpp.s

CMakeFiles/Project_Game.dir/Character/Character.cpp.o: CMakeFiles/Project_Game.dir/flags.make
CMakeFiles/Project_Game.dir/Character/Character.cpp.o: /home/brayan/POO/RPG_GAME/Project_Game/Character/Character.cpp
CMakeFiles/Project_Game.dir/Character/Character.cpp.o: CMakeFiles/Project_Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/brayan/POO/RPG_GAME/Project_Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Project_Game.dir/Character/Character.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Project_Game.dir/Character/Character.cpp.o -MF CMakeFiles/Project_Game.dir/Character/Character.cpp.o.d -o CMakeFiles/Project_Game.dir/Character/Character.cpp.o -c /home/brayan/POO/RPG_GAME/Project_Game/Character/Character.cpp

CMakeFiles/Project_Game.dir/Character/Character.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Project_Game.dir/Character/Character.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brayan/POO/RPG_GAME/Project_Game/Character/Character.cpp > CMakeFiles/Project_Game.dir/Character/Character.cpp.i

CMakeFiles/Project_Game.dir/Character/Character.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Project_Game.dir/Character/Character.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brayan/POO/RPG_GAME/Project_Game/Character/Character.cpp -o CMakeFiles/Project_Game.dir/Character/Character.cpp.s

CMakeFiles/Project_Game.dir/Player/Player.cpp.o: CMakeFiles/Project_Game.dir/flags.make
CMakeFiles/Project_Game.dir/Player/Player.cpp.o: /home/brayan/POO/RPG_GAME/Project_Game/Player/Player.cpp
CMakeFiles/Project_Game.dir/Player/Player.cpp.o: CMakeFiles/Project_Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/brayan/POO/RPG_GAME/Project_Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Project_Game.dir/Player/Player.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Project_Game.dir/Player/Player.cpp.o -MF CMakeFiles/Project_Game.dir/Player/Player.cpp.o.d -o CMakeFiles/Project_Game.dir/Player/Player.cpp.o -c /home/brayan/POO/RPG_GAME/Project_Game/Player/Player.cpp

CMakeFiles/Project_Game.dir/Player/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Project_Game.dir/Player/Player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brayan/POO/RPG_GAME/Project_Game/Player/Player.cpp > CMakeFiles/Project_Game.dir/Player/Player.cpp.i

CMakeFiles/Project_Game.dir/Player/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Project_Game.dir/Player/Player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brayan/POO/RPG_GAME/Project_Game/Player/Player.cpp -o CMakeFiles/Project_Game.dir/Player/Player.cpp.s

CMakeFiles/Project_Game.dir/Enemy/Enemy.cpp.o: CMakeFiles/Project_Game.dir/flags.make
CMakeFiles/Project_Game.dir/Enemy/Enemy.cpp.o: /home/brayan/POO/RPG_GAME/Project_Game/Enemy/Enemy.cpp
CMakeFiles/Project_Game.dir/Enemy/Enemy.cpp.o: CMakeFiles/Project_Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/brayan/POO/RPG_GAME/Project_Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Project_Game.dir/Enemy/Enemy.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Project_Game.dir/Enemy/Enemy.cpp.o -MF CMakeFiles/Project_Game.dir/Enemy/Enemy.cpp.o.d -o CMakeFiles/Project_Game.dir/Enemy/Enemy.cpp.o -c /home/brayan/POO/RPG_GAME/Project_Game/Enemy/Enemy.cpp

CMakeFiles/Project_Game.dir/Enemy/Enemy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Project_Game.dir/Enemy/Enemy.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brayan/POO/RPG_GAME/Project_Game/Enemy/Enemy.cpp > CMakeFiles/Project_Game.dir/Enemy/Enemy.cpp.i

CMakeFiles/Project_Game.dir/Enemy/Enemy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Project_Game.dir/Enemy/Enemy.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brayan/POO/RPG_GAME/Project_Game/Enemy/Enemy.cpp -o CMakeFiles/Project_Game.dir/Enemy/Enemy.cpp.s

CMakeFiles/Project_Game.dir/Combat/Combat.cpp.o: CMakeFiles/Project_Game.dir/flags.make
CMakeFiles/Project_Game.dir/Combat/Combat.cpp.o: /home/brayan/POO/RPG_GAME/Project_Game/Combat/Combat.cpp
CMakeFiles/Project_Game.dir/Combat/Combat.cpp.o: CMakeFiles/Project_Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/brayan/POO/RPG_GAME/Project_Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Project_Game.dir/Combat/Combat.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Project_Game.dir/Combat/Combat.cpp.o -MF CMakeFiles/Project_Game.dir/Combat/Combat.cpp.o.d -o CMakeFiles/Project_Game.dir/Combat/Combat.cpp.o -c /home/brayan/POO/RPG_GAME/Project_Game/Combat/Combat.cpp

CMakeFiles/Project_Game.dir/Combat/Combat.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Project_Game.dir/Combat/Combat.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brayan/POO/RPG_GAME/Project_Game/Combat/Combat.cpp > CMakeFiles/Project_Game.dir/Combat/Combat.cpp.i

CMakeFiles/Project_Game.dir/Combat/Combat.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Project_Game.dir/Combat/Combat.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brayan/POO/RPG_GAME/Project_Game/Combat/Combat.cpp -o CMakeFiles/Project_Game.dir/Combat/Combat.cpp.s

# Object files for target Project_Game
Project_Game_OBJECTS = \
"CMakeFiles/Project_Game.dir/main.cpp.o" \
"CMakeFiles/Project_Game.dir/Character/Character.cpp.o" \
"CMakeFiles/Project_Game.dir/Player/Player.cpp.o" \
"CMakeFiles/Project_Game.dir/Enemy/Enemy.cpp.o" \
"CMakeFiles/Project_Game.dir/Combat/Combat.cpp.o"

# External object files for target Project_Game
Project_Game_EXTERNAL_OBJECTS =

Project_Game: CMakeFiles/Project_Game.dir/main.cpp.o
Project_Game: CMakeFiles/Project_Game.dir/Character/Character.cpp.o
Project_Game: CMakeFiles/Project_Game.dir/Player/Player.cpp.o
Project_Game: CMakeFiles/Project_Game.dir/Enemy/Enemy.cpp.o
Project_Game: CMakeFiles/Project_Game.dir/Combat/Combat.cpp.o
Project_Game: CMakeFiles/Project_Game.dir/build.make
Project_Game: CMakeFiles/Project_Game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/brayan/POO/RPG_GAME/Project_Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Project_Game"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Project_Game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project_Game.dir/build: Project_Game
.PHONY : CMakeFiles/Project_Game.dir/build

CMakeFiles/Project_Game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Project_Game.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Project_Game.dir/clean

CMakeFiles/Project_Game.dir/depend:
	cd /home/brayan/POO/RPG_GAME/Project_Game/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brayan/POO/RPG_GAME/Project_Game /home/brayan/POO/RPG_GAME/Project_Game /home/brayan/POO/RPG_GAME/Project_Game/cmake-build-debug /home/brayan/POO/RPG_GAME/Project_Game/cmake-build-debug /home/brayan/POO/RPG_GAME/Project_Game/cmake-build-debug/CMakeFiles/Project_Game.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Project_Game.dir/depend

