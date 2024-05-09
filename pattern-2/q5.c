
//  54321
//   5432
//    543
//     54
//      5

#include<stdio.h>
int main(){

    int  row , col;

    for(row = 1; row <= 5; row++){
        for( col = row; col >= 1; col--){
            printf(" ");
        }
        for( col = 5; col >= row; col--){
            printf("%d",col);
        }printf("\n");
    }
    return 0;
}