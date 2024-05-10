
// Q.2 Write a Program to print the below pattern using nested for loop.
// 11
// 12 13
// 14 15 16
// 17 18 19 20
// 21 22 23 24 25

#include<stdio.h>
int main(){

    int row , col , count = 11;
    
    for(row = 11; row <= 15; row++){
        for(col = 11; col <= row; col++){
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
    return 0;
}