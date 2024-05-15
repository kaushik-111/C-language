
//### Question 3:
//Write a program to find the sum of elements in each row of a 2D array. Take input for the array elements from the user.

#include<stdio.h>
int main(){

    int size_of_row , size_of_col ;

    printf("Enter Size Of Row : - ");
    scanf("%d",&size_of_row);

    printf("Enter Size Of Col : - ");
    scanf("%d",&size_of_col);

    int array [size_of_row] [size_of_col] ;
    
    for(int row = 0; row < size_of_row; row++){
        
        for(int col = 0; col < size_of_col; col++){
            printf("Enter Elemant [%d] [%d]:-",row,col);
            scanf("%d",&array[row][col]);
        }
        printf("\n");
}    for(int row = 0; row < size_of_row; row++){
          float sum = 0 ;
        for(int col = 0; col < size_of_col; col++){
           
            sum = sum + array[row][col];
            
           
        }printf("the sum of elements in each row of :- %f\n",sum);
}

    return 0;
}