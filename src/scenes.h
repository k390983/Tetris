
int game_over;
int score;

void GameOver(){
	int i, j;

	system("cls");
	mciSendString("stop main_theme", NULL, 0, 0);

	game_over = 1;
	ConsoleColour(4, 0, 1, 0);
	printf("GAME OVER\n\n");
	ConsoleColour(1, 0, 1, 0);
	printf("SCORE: %d\n\n", score);
	printf("press ENTER to return to menu...");
	getchar();

}