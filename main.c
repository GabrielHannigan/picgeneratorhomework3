#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include "canvasMake.h"


//main function list variables
int main(void){
    //declare width and height
    int height, width;
    //get width and height from user
    printf("Enter Height: ");
    scanf("%d", &height);

    printf("Enter Width: ");
    scanf("%d", &width);


    
    //seed num gen
    srand(time(NULL));
    
    //moved random above and changed character list to 4
    char randomCharList[4] = {'$','%','@','#'};
    //variable list size no magic numbers
    int listSize = 4;
    
    //allocate by height
    char **canvas = createCanvas(height,width);
 
    //outer for loop to make canvas
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            canvas[i][j] = getRandomChar(0.2, randomCharList, listSize);
        }
    }

    printCanvas(canvas, height, width);

    //free outer pointers
    freeCanvas(canvas, height, width);

    return 0;
}