
int screen[23][12];
int centerPos_x;
int centerPos_y;
int type;
int rotation;

void spawner(){
    type = (rand() % 6) + 1;
    
    centerPos_y = 1;
    centerPos_x = (rand() % 10);

    rotation = 1;

}