

// Q.4 Write a Program to print the below pattern using nested for loop.
// 1                 1
// 1 2             2 1
// 1 2 3         3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3 4 5 5 4 3 2 1

#include <stdio.h>
int main(){
    int row , col;
    for ( row = 1; row <= 5; row++){
        for ( col = 1; col <= 5; col++){
            if (row >= col){
                printf("%d ", col);
            }else{
                printf("  ");
            }
        }
        for ( col = 6; col <= 10; col++){
            if (row <= 10 - col) {
                printf("  ");
            }
            else{
                printf("%d ", (11 - col));
            }
        }
        printf("\n");
    }

    return 0;
}