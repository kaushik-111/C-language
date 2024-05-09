
//      5
//     45
//    345
//   2345
//  12345

#include<stdio.h>
int main(){

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