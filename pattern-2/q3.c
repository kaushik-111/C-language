
//      5
//     44
//    333
//   2222
//  11111

#include<stdio.h>
int main(){

    int  row , col;

    for(row = 5; row >= 1; row--){
        for( col = row; col >= 1; col--){
            printf(" ");
        }
        for( col = row; col <= 5; col++){
            printf("%d",row);
        }printf("\n");
    }
    return 0;
}