# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 4.0

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\cdann\OneDrive\Documentos\cmake-4.0.0-rc2-windows-x86_64\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\cdann\OneDrive\Documentos\cmake-4.0.0-rc2-windows-x86_64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\build

# Include any dependencies generated for this target.
include CMakeFiles/sudoku.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/sudoku.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/sudoku.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sudoku.dir/flags.make

CMakeFiles/sudoku.dir/codegen:
.PHONY : CMakeFiles/sudoku.dir/codegen

CMakeFiles/sudoku.dir/src/gameinterface.cpp.obj: CMakeFiles/sudoku.dir/flags.make
CMakeFiles/sudoku.dir/src/gameinterface.cpp.obj: CMakeFiles/sudoku.dir/includes_CXX.rsp
CMakeFiles/sudoku.dir/src/gameinterface.cpp.obj: C:/Users/cdann/OneDrive/Documentos/VSCode/C++/sudoku/src/gameinterface.cpp
CMakeFiles/sudoku.dir/src/gameinterface.cpp.obj: CMakeFiles/sudoku.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sudoku.dir/src/gameinterface.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sudoku.dir/src/gameinterface.cpp.obj -MF CMakeFiles\sudoku.dir\src\gameinterface.cpp.obj.d -o CMakeFiles\sudoku.dir\src\gameinterface.cpp.obj -c C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\src\gameinterface.cpp

CMakeFiles/sudoku.dir/src/gameinterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/sudoku.dir/src/gameinterface.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\src\gameinterface.cpp > CMakeFiles\sudoku.dir\src\gameinterface.cpp.i

CMakeFiles/sudoku.dir/src/gameinterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/sudoku.dir/src/gameinterface.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\src\gameinterface.cpp -o CMakeFiles\sudoku.dir\src\gameinterface.cpp.s

CMakeFiles/sudoku.dir/src/generatenumbers.cpp.obj: CMakeFiles/sudoku.dir/flags.make
CMakeFiles/sudoku.dir/src/generatenumbers.cpp.obj: CMakeFiles/sudoku.dir/includes_CXX.rsp
CMakeFiles/sudoku.dir/src/generatenumbers.cpp.obj: C:/Users/cdann/OneDrive/Documentos/VSCode/C++/sudoku/src/generatenumbers.cpp
CMakeFiles/sudoku.dir/src/generatenumbers.cpp.obj: CMakeFiles/sudoku.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/sudoku.dir/src/generatenumbers.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sudoku.dir/src/generatenumbers.cpp.obj -MF CMakeFiles\sudoku.dir\src\generatenumbers.cpp.obj.d -o CMakeFiles\sudoku.dir\src\generatenumbers.cpp.obj -c C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\src\generatenumbers.cpp

CMakeFiles/sudoku.dir/src/generatenumbers.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/sudoku.dir/src/generatenumbers.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\src\generatenumbers.cpp > CMakeFiles\sudoku.dir\src\generatenumbers.cpp.i

CMakeFiles/sudoku.dir/src/generatenumbers.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/sudoku.dir/src/generatenumbers.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\src\generatenumbers.cpp -o CMakeFiles\sudoku.dir\src\generatenumbers.cpp.s

CMakeFiles/sudoku.dir/src/globalfunctions.cpp.obj: CMakeFiles/sudoku.dir/flags.make
CMakeFiles/sudoku.dir/src/globalfunctions.cpp.obj: CMakeFiles/sudoku.dir/includes_CXX.rsp
CMakeFiles/sudoku.dir/src/globalfunctions.cpp.obj: C:/Users/cdann/OneDrive/Documentos/VSCode/C++/sudoku/src/globalfunctions.cpp
CMakeFiles/sudoku.dir/src/globalfunctions.cpp.obj: CMakeFiles/sudoku.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/sudoku.dir/src/globalfunctions.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sudoku.dir/src/globalfunctions.cpp.obj -MF CMakeFiles\sudoku.dir\src\globalfunctions.cpp.obj.d -o CMakeFiles\sudoku.dir\src\globalfunctions.cpp.obj -c C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\src\globalfunctions.cpp

CMakeFiles/sudoku.dir/src/globalfunctions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/sudoku.dir/src/globalfunctions.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\src\globalfunctions.cpp > CMakeFiles\sudoku.dir\src\globalfunctions.cpp.i

CMakeFiles/sudoku.dir/src/globalfunctions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/sudoku.dir/src/globalfunctions.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\src\globalfunctions.cpp -o CMakeFiles\sudoku.dir\src\globalfunctions.cpp.s

CMakeFiles/sudoku.dir/src/lobbyrendering.cpp.obj: CMakeFiles/sudoku.dir/flags.make
CMakeFiles/sudoku.dir/src/lobbyrendering.cpp.obj: CMakeFiles/sudoku.dir/includes_CXX.rsp
CMakeFiles/sudoku.dir/src/lobbyrendering.cpp.obj: C:/Users/cdann/OneDrive/Documentos/VSCode/C++/sudoku/src/lobbyrendering.cpp
CMakeFiles/sudoku.dir/src/lobbyrendering.cpp.obj: CMakeFiles/sudoku.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/sudoku.dir/src/lobbyrendering.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sudoku.dir/src/lobbyrendering.cpp.obj -MF CMakeFiles\sudoku.dir\src\lobbyrendering.cpp.obj.d -o CMakeFiles\sudoku.dir\src\lobbyrendering.cpp.obj -c C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\src\lobbyrendering.cpp

CMakeFiles/sudoku.dir/src/lobbyrendering.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/sudoku.dir/src/lobbyrendering.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\src\lobbyrendering.cpp > CMakeFiles\sudoku.dir\src\lobbyrendering.cpp.i

CMakeFiles/sudoku.dir/src/lobbyrendering.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/sudoku.dir/src/lobbyrendering.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\src\lobbyrendering.cpp -o CMakeFiles\sudoku.dir\src\lobbyrendering.cpp.s

CMakeFiles/sudoku.dir/src/main.cpp.obj: CMakeFiles/sudoku.dir/flags.make
CMakeFiles/sudoku.dir/src/main.cpp.obj: CMakeFiles/sudoku.dir/includes_CXX.rsp
CMakeFiles/sudoku.dir/src/main.cpp.obj: C:/Users/cdann/OneDrive/Documentos/VSCode/C++/sudoku/src/main.cpp
CMakeFiles/sudoku.dir/src/main.cpp.obj: CMakeFiles/sudoku.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/sudoku.dir/src/main.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sudoku.dir/src/main.cpp.obj -MF CMakeFiles\sudoku.dir\src\main.cpp.obj.d -o CMakeFiles\sudoku.dir\src\main.cpp.obj -c C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\src\main.cpp

CMakeFiles/sudoku.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/sudoku.dir/src/main.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\src\main.cpp > CMakeFiles\sudoku.dir\src\main.cpp.i

CMakeFiles/sudoku.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/sudoku.dir/src/main.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\src\main.cpp -o CMakeFiles\sudoku.dir\src\main.cpp.s

CMakeFiles/sudoku.dir/src/specialselections.cpp.obj: CMakeFiles/sudoku.dir/flags.make
CMakeFiles/sudoku.dir/src/specialselections.cpp.obj: CMakeFiles/sudoku.dir/includes_CXX.rsp
CMakeFiles/sudoku.dir/src/specialselections.cpp.obj: C:/Users/cdann/OneDrive/Documentos/VSCode/C++/sudoku/src/specialselections.cpp
CMakeFiles/sudoku.dir/src/specialselections.cpp.obj: CMakeFiles/sudoku.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/sudoku.dir/src/specialselections.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sudoku.dir/src/specialselections.cpp.obj -MF CMakeFiles\sudoku.dir\src\specialselections.cpp.obj.d -o CMakeFiles\sudoku.dir\src\specialselections.cpp.obj -c C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\src\specialselections.cpp

CMakeFiles/sudoku.dir/src/specialselections.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/sudoku.dir/src/specialselections.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\src\specialselections.cpp > CMakeFiles\sudoku.dir\src\specialselections.cpp.i

CMakeFiles/sudoku.dir/src/specialselections.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/sudoku.dir/src/specialselections.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\src\specialselections.cpp -o CMakeFiles\sudoku.dir\src\specialselections.cpp.s

CMakeFiles/sudoku.dir/src/stringlibrary.cpp.obj: CMakeFiles/sudoku.dir/flags.make
CMakeFiles/sudoku.dir/src/stringlibrary.cpp.obj: CMakeFiles/sudoku.dir/includes_CXX.rsp
CMakeFiles/sudoku.dir/src/stringlibrary.cpp.obj: C:/Users/cdann/OneDrive/Documentos/VSCode/C++/sudoku/src/stringlibrary.cpp
CMakeFiles/sudoku.dir/src/stringlibrary.cpp.obj: CMakeFiles/sudoku.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/sudoku.dir/src/stringlibrary.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sudoku.dir/src/stringlibrary.cpp.obj -MF CMakeFiles\sudoku.dir\src\stringlibrary.cpp.obj.d -o CMakeFiles\sudoku.dir\src\stringlibrary.cpp.obj -c C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\src\stringlibrary.cpp

CMakeFiles/sudoku.dir/src/stringlibrary.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/sudoku.dir/src/stringlibrary.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\src\stringlibrary.cpp > CMakeFiles\sudoku.dir\src\stringlibrary.cpp.i

CMakeFiles/sudoku.dir/src/stringlibrary.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/sudoku.dir/src/stringlibrary.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\src\stringlibrary.cpp -o CMakeFiles\sudoku.dir\src\stringlibrary.cpp.s

# Object files for target sudoku
sudoku_OBJECTS = \
"CMakeFiles/sudoku.dir/src/gameinterface.cpp.obj" \
"CMakeFiles/sudoku.dir/src/generatenumbers.cpp.obj" \
"CMakeFiles/sudoku.dir/src/globalfunctions.cpp.obj" \
"CMakeFiles/sudoku.dir/src/lobbyrendering.cpp.obj" \
"CMakeFiles/sudoku.dir/src/main.cpp.obj" \
"CMakeFiles/sudoku.dir/src/specialselections.cpp.obj" \
"CMakeFiles/sudoku.dir/src/stringlibrary.cpp.obj"

# External object files for target sudoku
sudoku_EXTERNAL_OBJECTS =

C:/Users/cdann/OneDrive/Documentos/VSCode/C++/sudoku/sudoku.exe: CMakeFiles/sudoku.dir/src/gameinterface.cpp.obj
C:/Users/cdann/OneDrive/Documentos/VSCode/C++/sudoku/sudoku.exe: CMakeFiles/sudoku.dir/src/generatenumbers.cpp.obj
C:/Users/cdann/OneDrive/Documentos/VSCode/C++/sudoku/sudoku.exe: CMakeFiles/sudoku.dir/src/globalfunctions.cpp.obj
C:/Users/cdann/OneDrive/Documentos/VSCode/C++/sudoku/sudoku.exe: CMakeFiles/sudoku.dir/src/lobbyrendering.cpp.obj
C:/Users/cdann/OneDrive/Documentos/VSCode/C++/sudoku/sudoku.exe: CMakeFiles/sudoku.dir/src/main.cpp.obj
C:/Users/cdann/OneDrive/Documentos/VSCode/C++/sudoku/sudoku.exe: CMakeFiles/sudoku.dir/src/specialselections.cpp.obj
C:/Users/cdann/OneDrive/Documentos/VSCode/C++/sudoku/sudoku.exe: CMakeFiles/sudoku.dir/src/stringlibrary.cpp.obj
C:/Users/cdann/OneDrive/Documentos/VSCode/C++/sudoku/sudoku.exe: CMakeFiles/sudoku.dir/build.make
C:/Users/cdann/OneDrive/Documentos/VSCode/C++/sudoku/sudoku.exe: CMakeFiles/sudoku.dir/linkLibs.rsp
C:/Users/cdann/OneDrive/Documentos/VSCode/C++/sudoku/sudoku.exe: CMakeFiles/sudoku.dir/objects1.rsp
C:/Users/cdann/OneDrive/Documentos/VSCode/C++/sudoku/sudoku.exe: CMakeFiles/sudoku.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\sudoku.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sudoku.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sudoku.dir/build: C:/Users/cdann/OneDrive/Documentos/VSCode/C++/sudoku/sudoku.exe
.PHONY : CMakeFiles/sudoku.dir/build

CMakeFiles/sudoku.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\sudoku.dir\cmake_clean.cmake
.PHONY : CMakeFiles/sudoku.dir/clean

CMakeFiles/sudoku.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\build C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\build C:\Users\cdann\OneDrive\Documentos\VSCode\C++\sudoku\build\CMakeFiles\sudoku.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/sudoku.dir/depend

