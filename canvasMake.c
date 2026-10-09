//canvasMake.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>




//set variable that randomizes the roll and placement of char or space
char getRandomChar(double chance, char *charList, int size){
    double roll= (double)rand() / RAND_MAX;

    if statement to handle random roll
    if (roll < chance && size > 0){
        int randomIndex = rand() % size;
        return charList[randomIndex];
    }
    //return space which will be used 80% of the time
    return ' ';
}


//main function list variables
int main(int argc, char **argv){
    srand(time(NULL));
    
    //moved random above and changed character list to 4
    char randomCharList[4] = {'$','%','@','#'};
    //variable list size no magic numbers
    int listSize = 4;
    
    // char picture = getRandomChar(0.80, randomCharList, listSize);
    // printf("%c\n", picture);


    
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
        printf("\n");
    }
    //change array to int
    height = atoi(buffer);


    //creates height variable
    int width;
    //prompts for input
    printf("Enter Width: ");
    //gathers input from terminal
    fgets(buffer, sizeof(buffer), stdin);
    result = sscanf(buffer, "%d", &width);
    if(result != 1){
        printf("Invalid try again, ");
    } else{ 
        printf("\n");
    }
    //array to interger to change data type
    width = atoi(buffer);

    
    
    //allocate by height
    char **canvas =malloc(height * sizeof(char *));
    canvas = malloc(height * sizeof(char *));
    
    
    //using for loop to malloc width
    for(int i = 0; i< height; i++){
        canvas[i] = malloc(width * sizeof(char));
    } 

    //outer for loop to make canvas
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            canvas[i][j] = getRandomChar(0.2, randomCharList, listSize);
        }
    }

    //inner for loop to print canvas
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            printf("%c", canvas[i][j]);
        }    
    printf("\n");
}

    return 0;
}




    



