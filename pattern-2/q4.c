
//  54321
//   4321
//    321
//     21
//      1

#include<stdio.h>
int main(){

   int  row , col;

    for(row = 5; row >= 1; row--){
        for( col = row; col <= 5; col++){
            printf(" ");
        }
        for( col = row; col >= 1; col--){
            printf("%d",col);
        }printf("\n");
    }
    return 0;
}