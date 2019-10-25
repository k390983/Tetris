build:
	gcc -Wfatal-errors \
	./*.c \
	-lwinmm
	-o main.exe
