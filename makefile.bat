@ECHO OFF
cd src
ECHO Compiling...
gcc main.c -o Tetris -lwinmm
ECHO Complete
ECHO Moving File...
move "Tetris.exe" "../"
ECHO Complete
PAUSE