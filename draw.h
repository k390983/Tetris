
int screen[23][12];
int centerPos_x;
int centerPos_y;
int type;
int rotation;

int score;
int level;

// prints main game screen
// printScreen(int y position, int x position)
void printScreen(int y, int x){

    ConsoleColour(4, 0, 1, 1);

    switch(screen[y + 3][x + 1]){
        case 0:
            printf("  ");
            break;

        case 1:
            printf("██");
            break;

        case 2:
            printf("██");
            break;

    }

}

//prints next piece
void printNext(int y){

    ConsoleColour(4, 7, 1, 1);

    switch(next_type){
        case 1:

            switch(y){
                case 0:
                    printf("        ");
                    break;

                case 1:
                    printf("████████");
                    break;

            }

            break;

        case 2:

            switch(y){
                case 0:
                    printf("██      ");
                    break;

                case 1:
                    printf("██████  ");
                    break;
                    
            }

            break;

        case 3:

            switch(y){
                case 0:
                    printf("      ██");
                    break;

                case 1:
                    printf("  ██████");
                    break;
                    
            }

            break;

        case 4:

            switch(y){
                case 0:
                    printf("  ████  ");
                    break;

                case 1:
                    printf("  ████  ");
                    break;
                    
            }

            break;

        case 5:

            switch(y){
                case 0:
                    printf("  ████  ");
                    break;

                case 1:
                    printf("████    ");
                    break;
                    
            }

            break;

        case 6:

            switch(y){
                case 0:
                    printf("  ██    ");
                    break;

                case 1:
                    printf("██████  ");
                    break;
                    
            }

            break;

        case 7:

            switch(y){
                case 0:
                    printf("████    ");
                    break;

                case 1:
                    printf("  ████  ");
                    break;
                    
            }

            break;

    }

}

void draw(){

    int i, j;

    COORD coord;
    coord.X= 0;
    coord.Y = 0;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

    ConsoleColour(1, 0, 1, 1);
    for(i = 0; i < 17; i++){
        printf("██");

    }

    printf("\n");

    for(i = 0; i < 20; i++){
        ConsoleColour(1, 0, 1, 1);
        printf("██");

        for(j = 0; j < 10; j++){
            printScreen(i, j);

        }

        ConsoleColour(1, 0, 1, 1);
        printf("██");

        ConsoleColour(0, 7, 1, 1);
        switch(i){
            case 0:
                printf("LEVEL: %d", level);
                break;

            case 1:
                printf("SCORE:  ");
                break;

            case 2:
                printf("  %6d", score);
                break;

            case 3:
                printf("NEXT:   ");
                break;

            case 4:
                printNext(0);
                break;

            case 5:
                printNext(1);
                break;

            default:
                printf("        ");
                break;

        }
        

        ConsoleColour(1, 0, 1, 1);
        printf("██\n");

    }

    ConsoleColour(1, 0, 1, 1);
    for(i = 0; i < 17; i++){
        printf("██");

    }

}