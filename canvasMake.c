//canvasMake.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include "canvasMake.h"




char pickChar(char *charList, int size){
    if(size >0){
        int randomIndex = rand() % size;
        return charList[randomIndex];
    }
}
//set variable that randomizes the roll and placement of char or space
char getRandomChar(double chance, char *charList, int size){
    double roll= (double)rand() / RAND_MAX;
    //if statement to handle random roll
    if (roll < chance && size > 0){
        int randomIndex = rand() % size;
        return charList[randomIndex];
    }
    //return space which will be used 80% of the time
    return ' ';
}

    //creates the canvas
char **createCanvas(int height, int width){
    char **canvas = malloc(height * sizeof(char *));
        //using for loop to malloc width
        for(int i = 0; i< height; i++){
        canvas[i] = malloc(width * sizeof(char));
    }
    return canvas;
}


    //inner for loop to print canvas
void printCanvas(char **canvas, int height, int width){
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            printf("%c", canvas[i][j]);
        }    
        printf("\n");
}
}
//Free the memory step
//free each row
void freeCanvas(char **canvas, int height, int width){
    for(int i =0; i < height; i++){
        free(canvas[i]);
    }
    //free outer pointers
    free(canvas);
}

    



