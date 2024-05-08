
// 10 9 8 7 6 5 4 3 2 1 
// 10 9 8 7 6 5 4 3 2
// 10 9 8 7 6 5 4 3
// 10 9 8 7 6 5 4
// 10 9 8 7 6 5
// 10 9 8 7 6
// 10 9 8 7
// 10 9 8
// 10 9
// 10

#include<stdio.h>
int main(){

    int row , col ;

    for( row = 1; row <= 10; row++){
        for( col = 10; col >= row; col--){
            printf("%d ",col);
        }printf("\n");
    }
    return 0;
}