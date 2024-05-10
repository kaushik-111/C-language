
// Q.3 Write a Program to print the below pattern using nested for loop.
//             5
//           4 5
//         3 4 5
//       2 3 4 5
//     1 2 3 4 5

#include<stdio.h>
int main(){

    int row , col;
    
    for(row = 5; row >= 1; row--){
        for(col = row; col >= 1; col--){
            printf(" ");
        }
        for(col = row; col <= 5; col++){
            printf("%d",col);
        }
        printf("\n");
    }
    return 0;
}