
// 10 9 8 7 6 5 4 3 2 1 
// 10 9 8 7 6 5 4 3 2 1
// 10 9 8 7 6 5 4 3 2 1
// 10 9 8 7 6 5 4 3 2 1
// 10 9 8 7 6 5 4 3 2 1
// 10 9 8 7 6 5 4 3 2 1
// 10 9 8 7 6 5 4 3 2 1
// 10 9 8 7 6 5 4 3 2 1 
// 10 9 8 7 6 5 4 3 2 1 
// 10 9 8 7 6 5 4 3 2 1 

#include<stdio.h>
int main(){


   int row , col;

   for(row = 10; row >= 1; row--){
    for( col = 10; col >= 1; col--){
        printf("%d ",col);
    }printf("\n");
   }

    return 0;
}