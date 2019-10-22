void play_main_theme(){
	mciSendString("close main_theme", NULL, 0, 0);
	mciSendString("open sounds//main_theme.mp3 type MPEGVideo alias main_theme", NULL, 0, 0);
	mciSendString("play main_theme repeat", NULL, 0, 0);
	
}

void play_line(){
	mciSendString("close line", NULL, 0, 0);
	mciSendString("open sounds//line.mp3 type MPEGVideo alias line", NULL, 0, 0);
	mciSendString("play line", NULL, 0, 0);

}

void play_drop(){
	mciSendString("close drop", NULL, 0, 0);
	mciSendString("open sounds//drop.mp3 type MPEGVideo alias drop", NULL, 0, 0);
	mciSendString("play drop", NULL, 0, 0);

}

void play_rotate(){
	mciSendString("close rotate", NULL, 0, 0);
	mciSendString("open sounds//rotate.mp3 type MPEGVideo alias rotate", NULL, 0, 0);
	mciSendString("play rotate", NULL, 0, 0);


}