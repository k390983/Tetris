
int game_over;
int score;

void GameOver(){
	int i, j;

	mciSendString("stop main_theme", NULL, 0, 0);
	play_game_over();
	system("cls");
	
	game_over = 1;

	for(j = 0; j < 22; j++){
		if(j == 0 || j == 21){
			ConsoleColour(7, 0, 1 , 0);
			printf("██████████████████████████████████");

		}else if(j == 4){
			ConsoleColour(7, 0, 1 , 0);
			printf("██");
			ConsoleColour(4, 0, 1, 0);
			printf("          GAMEOVER            ");
			ConsoleColour(7, 0, 1 , 0);
			printf("██");


		}else if(j == 6){
			ConsoleColour(7, 0, 1 , 0);
			printf("██");
			ConsoleColour(7, 0, 1, 0);
			printf("        SCORE: %06d         ", score);
			ConsoleColour(7, 0, 1 , 0);
			printf("██");

		}else if(j == 18){
			ConsoleColour(7, 0, 1 , 0);
			printf("██");
			ConsoleColour(7, 0, 1, 0);
			printf("       press ENTER to         ");
			ConsoleColour(7, 0, 1 , 0);
			printf("██");

		}else if(j == 19){
			ConsoleColour(7, 0, 1 , 0);
			printf("██");
			ConsoleColour(7, 0, 1, 0);
			printf("      return to menu...       ");
			ConsoleColour(7, 0, 1 , 0);
			printf("██");

		}else{
			ConsoleColour(7, 0, 1 , 0);
				printf("██                              ██");

		}
		
		if(j != 21){
			printf("\n");

		}
		
	}
	
	Sleep(1000);

	while(1){
		if((GetKeyState(VK_RETURN) & 0x8000)){
			break;

		}

	}

}

/*
██████████████████████████████████
██                              ██
██                              ██
██                              ██
██          GAMEOVER            ██
██                              ██
██        SCORE: 000000         ██
██                              ██
██                              ██
██                              ██
██                              ██
██                              ██
██                              ██
██                              ██
██                              ██
██                              ██
██                              ██
██                              ██
██       press ENTER to         ██
██      return to menu...       ██
██                              ██
██████████████████████████████████
17 * 22
*/

void Menu(){
	int i, j;

	system("cls");

	for(j = 0; j < 22; j++){
		if(j == 4){
			ConsoleColour(7, 0, 1, 0);
			printf(" █████                            ");

		}else if(j == 5){
			ConsoleColour(7, 0, 1, 0);
			printf("   █         █                    ");

		}else if(j == 6){
			ConsoleColour(7, 0, 1, 0);
			printf("   █         █          █         ");

		}else if(j == 7){
			ConsoleColour(7, 0, 1, 0);
			printf("   █  ███  █████ ████       ████  ");

		}else if(j == 8){
			ConsoleColour(7, 0, 1, 0);
			printf("   █ █   █   █   █   █ ██  █      ");

		}else if(j == 9){
			ConsoleColour(7, 0, 1, 0);
			printf("   █ █████   █   █      █   ███   ");

		}else if(j == 10){
			ConsoleColour(7, 0, 1, 0);
			printf("   █ █       █   █      █      █  ");

		}else if(j == 11){
			ConsoleColour(7, 0, 1, 0);
			printf("   █  ███    ███ █     ███ ████   ");

		}else if(j == 14){
			ConsoleColour(7, 0, 1, 0);
			printf("      press ENTER to start        ");

		}

		if(j != 21){
			printf("\n");

		}
		
	}

	Sleep(1000);

	while(1){
		if((GetKeyState(VK_RETURN) & 0x8000)){
			break;

		}

	}

}

/*
█████       
  █         █
  █         █          █
  █  ███  █████ ████       ████
  █ █   █   █   █   █ ██  █
  █ █████   █   █      █   ███
  █ █       █   █      █      █
  █  ███    ███ █     ███ ████
*/