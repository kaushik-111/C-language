
//           * 

//         * * *

//       * * * * *

//     * * * * * * *

//   * * * * * * * * *


//     * * * * * * *

//       * * * * *

//         * * *

//           *

#include<stdio.h>
int main(){

    int  row , col;

    for(row = 1; row <= 10; row++){
        for( col = 10; col >= row; col--){
            printf(" ");
        }
        for( col = 1; col <= row; col++){
            if((row + 1)%2==0 ){
                printf("* ");
                
            }
        }printf("\n");
    }for(row = 8; row >= 1; row--){
        for( col = 10; col >= row; col--){
            printf(" ");
        }
        for( col = 1; col <= row; col++){
            if((row + 1)%2==0 ){
                printf("* ");
                
            }
        }printf("\n");
    }
    return 0;
}