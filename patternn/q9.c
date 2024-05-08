
// 5 5 5 5 5 
// 4 4 4 4 4
// 3 3 3 3 3
// 2 2 2 2 2
// 1 1 1 1 1

#include<stdio.h>
int main(){

    int row , col ;
    for( row = 5 ; row >= 1; row--){
        for( col = 5; col >= 1; col--){
            printf("%d ",row);
        }printf("\n");
    }
    return 0;
}