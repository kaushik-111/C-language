
// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

#include<stdio.h>
int main(){

//      1
//     21
//    321
//   4321
//  54321
 
    int  row , col;

    for(row = 5; row >= 1; row--){
     
        for( col = 1; col <= row; col++){
            printf("%d ",col);
        }printf("\n");
    }for(row = 2; row <= 5; row++){
     
        for( col = 1; col <= row; col++){
            printf("%d ",col);
        }printf("\n");
        }
    return 0;
}