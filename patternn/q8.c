
// 4 
// 3 3
// 2 2 2
// 1 1 1 1

#include<stdio.h>
int main(){

    int row , col ;

    for(row = 4; row >= 1 ; row--){
        for(col = 4; col >= row ; col--){
            printf("%d ",row);
        }printf("\n");
    }
    return 0;
}