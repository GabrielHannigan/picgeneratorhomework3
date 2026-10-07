//canvasMake.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//int *numArray = malloc(sizeof(int)*9);

// char **getRandomChar;

char getRandomChar(char *charList, int size){
    //get a random number betweem 0 and size
    int n = rand()%size;
    return charList[n];
}

//main function list variables
int main(int argc, char **argv){
    char randomCharList[3] = {'$','%','^'};
    srand(time(NULL));
    
    //get character from list and print to console
    char newCharacter = getRandomChar(randomCharList, 3);
    printf("%c\n", newCharacter);

    return 0;
}




    



