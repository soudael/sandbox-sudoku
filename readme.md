# Sudoku
## About
Sudoku is a terminal based game made for running classic sudoku game.\
It is written with **C++17** using stardard libraries.\
Running only in **Windows** currently.\
You can contact me for more information about this code and future projects in my instagram direct[^1].

- [x] Menu navigation.
- [ ] Functional menu options.
- [x] Board with random numbers following classic sudoku rules.
functioning


### Installation
#### Source
~~You may install the executable via Releases page.~~\
You may install the executable by downloading the code source.
> [!WARNING]
> You might receive a warning that this file `might put your pc at risk`. Click on **'More info'** followed by **'Run anyway'**.
#### Binary
Download the file source, extract it and open in any IDE. Open terminal and run the following code inside the `Sudoku` file:
```
g++ stringlibrary.cpp lobbyrendering.cpp generatenumbers.cpp gameinterface.cpp main.cpp -I Include -o sudoku.exe
```
<sub>If you have another way to compile files, just do it you way ;)</sub>

## Guide
### Menu -- *not functional*
+ Use `WS` or `UP/DOWN ARROW` keys for moving.
+ Press `SPACEBAR` or `ENTER` to selected options.

### Gameplay -- *not functional*
+ Use `WASD` or `ARROWS` to move the cursor.
+ Pick a number from **1** to **9** to put in the square the cursor is pointing to.
~~+ Press P to open the note list *(it will appear bellow the board)*.~~

## Project Structure
```
│--.vscode          // Ignore
│--build            // CMake build 4.0.0-rc2
│--include          // Contains every header
    │--GameInterface.h
    │--GenerateNumbers.h
    │--LobbyRendering.h
    │--SourceLibraryGroup.h
    └--StringLibrary.Group.h
└--src              // Contains every CPP file
    │--gameinterface.cpp
    │--generatenumbers.cpp
    │--lobbyrendering.cpp
    │--main.cpp
    └--stringlibrary.cpp
│--CMakeLists.txt   // CMake compiling stardards
│--README.md
└--sudoku.exe       // Built-in executable file
```
> [!NOTE]
> This project will not be update more than it's stardard classic sudoku gameplay. Once the basics are written, the project will be over *(the menu options will not be developed)*.
> The reason for that is because I'm planning to start a HTML, CSS and JS project to create a site that contains multiple board games, such as Chess, Sudoku, Tic-Tac-Toe, Patience, Go, etc.
> This is my very next project after I finish this game code. It may take a while, but it will be worth it I promise.

> [!TIP]
> You can contact me by my public email[^2].

[^2]: instagram.com/solynael
[^2]: carlosdaelcds@gmail.com