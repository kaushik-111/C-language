#include<stdio.h>
int main(){

//      1
//     21
//    321
//   4321
//  54321

    int  row , col;

    for(row = 5; row >= 1; row--){
        for( col = row; col >= 1; col--){
            printf(" ");
        }
        for( col = row; col <= 5; col++){
            printf("%d",col);
        }printf("\n");
    }
    return 0;
}