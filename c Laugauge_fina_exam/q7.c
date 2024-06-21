
// 100 
// 81 81 
// 64 64 64 
// 49 49 49 49 
// 36 36 36 36 36 

#include<stdio.h>
int main(){

    
    for (int row = 10; row >= 6; row--)
    {
       for (int col = row ; col <= 10; col++)
       {
        printf("%d ",row * row);
       }
       printf("\n");
    }
    
    return 0;
}

 