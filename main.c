/*---LAPTOP---
cd C:\Users\Kitagawa-Jones\Desktop\programing\Tetris
gcc main.c -o Tetris

*/

/*---DESKTOP---
cd C:\Users\Kai\Desktop\programing\Tetris
gcc main.c -o Tetris

*/

#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>

#include "cmd.h"
#include "global.h"
#include "clock.h"
#include "scenes.h"
#include "spawner.h"
#include "startup.h"
#include "tetromio.h"
#include "control.h"
#include "draw.h"
#include "gameloop.h"


int level;

int main(void){

	level = 0;

    gameloop();

}