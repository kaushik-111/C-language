
// Q.1 Write a Program to print the below pattern using nested for loop.
// 41
// 41 42
// 41 42 43
// 41 42 43 44
// 41 42 43 44 45

#include<stdio.h>
int main(){

    int row , col;
    
    for(row = 41; row <= 45; row++){
        for(col = 41; col <= row; col++){
            printf("%d ",col);
        }
        printf("\n");
    }
    return 0;
}
