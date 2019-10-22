
int centerPos_x;
int centerPos_y;
int type;
int next_type;
int rotation;
int lines;

void spawner(){
    play_drop();
    type = next_type;
    
    centerPos_y = 1;
    centerPos_x = 6;
    rotation = 1;

    next_type = (rand() % 7) + 1;

    lines++;

    if(lines % 10 == 0){
    	level++;

    }

}