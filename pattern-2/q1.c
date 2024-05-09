
//      1
//     21
//    321
//   4321
//  54321

#include<stdio.h>
int main(){


 
    int  row , col;

    for(row = 1; row <= 5; row++){
        for( col = 5; col >= row; col--){
            printf(" ");
        }
        for( col = row; col >= 1; col--){
            printf("%d",col);
        }printf("\n");
    }
    return 0;
}