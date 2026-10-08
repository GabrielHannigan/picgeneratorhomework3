//canvasMake.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>


//int *numArray = malloc(sizeof(int)*9);

// char **getRandomChar;

char getRandomChar(char *charList, int size){
    //get a random number betweem 0 and size
    int n = rand()%size;
    return charList[n];
}

//set variable that randomizes the roll and placement of char or space
char getSpaceRandomChar(double chance, char *charList, int size){
    double roll= (double)rand() / RAND_MAX;

    if (roll < chance && size > 0){
        int randomIndex = rand() % size;
        return charList[randomIndex];
    }

    return ' ';
}

//main function list variables
int main(int argc, char **argv){
    srand(time(NULL));
    
    //moved random above and changed character list to 4
    char randomCharList[4] = {'$','%','@','#'};
    //variable list size no magic numbers
    int listSize = 4;
    
    char picture = getSpaceRandomChar(0.20, randomCharList, listSize);
    printf("%c\n", picture);



    return 0;
}




    



