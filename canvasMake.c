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

//int width = fgets();


//main function list variables
int main(int argc, char **argv){
    srand(time(NULL));
    
    //moved random above and changed character list to 4
    char randomCharList[4] = {'$','%','@','#'};
    //variable list size no magic numbers
    int listSize = 4;
    
    char picture = getSpaceRandomChar(0.20, randomCharList, listSize);
    printf("%c\n", picture);


    
    //Sets buffer
    char buffer [100];

    //creates height variable
    int height;
    //prompts for input
    printf("Enter Height: ");
    //gathers input from terminal
    fgets(buffer, sizeof(buffer), stdin);
    // string scanf to check to make sure input can be int
    int result = sscanf(buffer, "%d", &height);
    //if check if it returns a 0 it is not able to be an int
    if(result != 1){
        printf("Invalid try again, ");
    } else{ 
        printf("Valid number: ");
    }
    //change array to int
    height = atoi(buffer);


    //creates height variable
    int width;
    //prompts for input
    printf("Enter Width: ");
    //gathers input from terminal
    fgets(buffer, sizeof(buffer), stdin);
    int result = sscanf(buffer, "%d", &width);
    if(result != 1){
        printf("Invalid try again, ");
    } else{ 
        printf("Valid number: ");
    }
    //array to interger to change data type
    width = atoi(buffer);




    return 0;
}




    



