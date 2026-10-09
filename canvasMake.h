#ifndef CANVASMAKE_H
#define CANVASMAKE_H

//declare variables
char pickChar(char *charList, int size);
char getRandomChar(double chance, char *charList, int size);
char **createCanvas(int height, int width);
void printCanvas(char **canvas, int height, int width);
void freeCanvas(char **canvas, int height, int width);

#endif