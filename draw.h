
int screen[23][12];
int centerPos_x;
int centerPos_y;
int type;
int rotation;
int score;

void draw(){

    int i, j;

    COORD coord;
    coord.X= 0;
    coord.Y = 0;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

    printf("SCORE: %d\n", score);

    for(i = 3; i < 23; i++){
        for(j = 1; j < 11; j++){
            if(screen[i][j] == 0){
                printf("  ");

            }else if(screen[i][j] == 1){
                printf("██");

            }else if(screen[i][j] == 2){
                printf("██");

            }

        }

        printf("\n");

    }

    

}