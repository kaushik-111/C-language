
// 6 5 4 3 2 1 
// 6 5 4 3 2
// 6 5 4 3
// 6 5 4
// 6 5
// 6

#include<stdio.h>
int main(){

    int row , col ;

    for(row = 1; row <= 6; row++){
        for(col = 6; col >= row; col--){
            printf("%d ",col);
        }printf("\n");
    }

    return 0;
}