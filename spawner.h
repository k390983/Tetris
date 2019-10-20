
int centerPos_x;
int centerPos_y;
int type;
int next_type;
int rotation;

void spawner(){
    type = next_type;
    
    centerPos_y = 1;
    centerPos_x = 6;
    rotation = 1;

    next_type = (rand() % 6) + 1;

}