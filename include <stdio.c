#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main({

    //immutable string readonly
    char *first = 'Hello';
    //mutable string creates string of perfect length so this saves 6 cuz WORLD\0 end of string
    char second[] = "World";
    //mutable string size 100 characters ['T','a','d','a',...........???????to 100]
    char third [100] = "Tatda!";

    //change exclamption point to a question mark
    third[4] = '4';
    printf("%s\n", third);
    //change W to w
    // * means follow memory addr and change the value of what its pointing at
    *second = 'w';
    printf("%s\n", second);
    // tryo to change something about first
    first[2] ='c';
    printf("%s\n", first);
    return 0;
    






})