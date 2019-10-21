
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>

#include "include//cmd.h"
#include "include//sounds.h"
#include "include//global.h"
#include "include//clock.h"
#include "include//scenes.h"
#include "include//startup.h"
#include "include//draw.h"
#include "include//tetromio.h"
#include "include//control.h"
#include "include//spawner.h"
#include "include//gameloop.h"


int level;

int main(void){

	level = 0;

    gameloop();

}