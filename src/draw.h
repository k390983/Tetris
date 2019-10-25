
int screen[23][12];
int centerPos_x;
int centerPos_y;
int type;
int rotation;

int score;
int level;

float fps;

int colourAddress;
int colourArray1[100];
int colourArray2[100];

void randomizeColours(){
    int a;
    for(a = 0; a < 100; a++){
        int i;
        i = rand() % 2;

        if(i == 0){
            colourArray1[a] = 0;
            colourArray2[a] = 1;

        }else{
            colourArray1[a] = 7;
            colourArray2[a] = 0;

        }

    }
    
}

void randomColour(){
    ConsoleColour(colourArray1[colourAddress], 0, colourArray2[colourAddress], 0);
    colourAddress++;

}

// prints main game screen
// printScreen(int y position, int x position)
void printScreen(int y, int x){

    if(screen[y + 3][x + 1] == 0){
        ConsoleColour(0, 0, 0, 0);
        printf("  ");

    }else if(screen[y + 3][x + 1] == 1){
        switch(type){
            case 1:
                ConsoleColour(3, 0, 1, 0);
                break;
            case 2:
                ConsoleColour(1, 0, 0, 0);
                break;
            case 3:
                ConsoleColour(6, 0, 0, 0);
                break;
            case 4:
                ConsoleColour(6, 0, 1, 0);
                break;
            case 5:
                ConsoleColour(2, 0, 1, 0);
                break;
            case 6:
                ConsoleColour(5, 0, 0, 0);
                break;
            case 7:
                ConsoleColour(4, 0, 0, 0);
                break;
            
        }

        printf("██");

    }else{
        switch(screen[y + 3][x + 1]){
            case 2:
                ConsoleColour(3, 0, 1, 0);
                break;
            case 3:
                ConsoleColour(1, 0, 0, 0);
                break;
            case 4:
                ConsoleColour(6, 0, 0, 0);
                break;
            case 5:
                ConsoleColour(6, 0, 1, 0);
                break;
            case 6:
                ConsoleColour(2, 0, 1, 0);
                break;
            case 7:
                ConsoleColour(5, 0, 0, 0);
                break;
            case 8:
                ConsoleColour(4, 0, 0, 0);
                break;
            
        }

        printf("██");

    }

}

//prints next piece
void printNext(int y){

    switch(next_type){
            case 1:
                ConsoleColour(3, 7, 1, 1);
                break;
            case 2:
                ConsoleColour(1, 7, 0, 1);
                break;
            case 3:
                ConsoleColour(6, 7, 0, 1);
                break;
            case 4:
                ConsoleColour(6, 7, 1, 1);
                break;
            case 5:
                ConsoleColour(2, 7, 1, 1);
                break;
            case 6:
                ConsoleColour(5, 7, 0, 1);
                break;
            case 7:
                ConsoleColour(4, 7, 0, 1);
                break;
            
        }

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

    colourAddress = 0;

    COORD coord;
    coord.X= 0;
    coord.Y = 0;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

    for(i = 0; i < 17; i++){

        randomColour();
        printf("██");

    }

    printf("\n");

    for(i = 0; i < 20; i++){
        randomColour();
        printf("██");

        for(j = 0; j < 10; j++){
            printScreen(i, j);

        }

        randomColour();
        printf("██");

        ConsoleColour(0, 7, 0, 1);
        switch(i){
            case 0:
                printf("LEVEL:  ");
                break;
            case 1:
                printf("  %6d", level);
                break;

            case 2:
                printf("SCORE:  ");
                break;

            case 3:
                printf("  %06d", score);
                break;

            case 4:
                printf("NEXT:   ");
                break;

            case 5:
                printNext(0);
                break;

            case 6:
                printNext(1);
                break;

            case 8:
                printf("左上ス  ");
                break;

            case 9:
                printf("左矢ペ  ");
                break;

            case 10:
                printf("矢印｜  ");
                break;

            case 11:
                printf("印キス  ");
                break;

            case 12:
                printf("キ｜キ  ");
                break;

            case 13:
                printf("｜  ｜ ");
                break;

            case 14:
                printf("  ド    ");
                break;

            case 15:
                printf("移ロ回  ");
                break;

            case 16:
                printf("動ッ転  ");
                break;

            case 17:
                printf("  プ    ");
                break;

            case 19:
                printf("%2.2ffps", fps);
                break;

            default:
                printf("        ");
                break;

        }

        /*
        左上ス  
        左矢ペ  
        矢印｜  
        印キス  
        キ｜キ  
        ｜  ｜ 
          ド    
        移ロ回  
        動ッ転  
          プ    
        */
        

        randomColour();
        printf("██\n");

    }

    for(i = 0; i < 17; i++){
        randomColour();
        printf("██");

    }

}