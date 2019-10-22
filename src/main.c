
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>

#include "cmd.h"
#include "sounds.h"
#include "global.h"
#include "clock.h"
#include "scenes.h"
#include "startup.h"
#include "draw.h"
#include "tetromio.h"
#include "control.h"
#include "spawner.h"
#include "gameloop.h"


int level;

int main(void){

	level = 0;

    gameloop();

}