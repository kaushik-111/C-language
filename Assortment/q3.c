
//Q.3 Write a Program to find the transpose matrix of a given 2D array.


//Q.2 Write a Program to find the largest element from a given 2D array.


#include<stdio.h>
int main(){

    int size_of_row , size_of_col ;

    printf("Enter Row Size : -");
    scanf("%d",&size_of_row);

    printf("Enter Column size : -");
    scanf("%d",&size_of_col);

    int array[size_of_row][size_of_col];
    for(int row = 0; row < size_of_row ; row++){
        for(int col = 0; col < size_of_col ; col++){
            printf("Enter An Elemant[ %d ] [ %d ]  :-",row,col);
            scanf("%d",&array[row][col]);
        }
    }  
 
       for(int row = 0; row < size_of_row ; row++){
        for(int col = 0; col < size_of_col ; col++){
      
           printf("The transpose matrix of an array:%d",array[col][row]);  
         } printf("\n");
    } 

    return 0;
}