@ECHO OFF
cd src
ECHO Compiling...
gcc main.c -o Tetris -lwinmm
ECHO Moving File...
move "Tetris.exe" "../"
PAUSE