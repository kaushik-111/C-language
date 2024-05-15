
// Q.1 Write a Program to find the average of a given 2D array.
// For example,
// Input:
// Enter the array's row size: 3
// Enter the array's column size: 3

// Enter array's elements:
// a[0][0] = 2
// a[0][1] = 4
// a[0][2] = 1
// a[1][0] = 3
// a[1][1] = 5
// a[1][2] = 4
// a[2][0] = 8
// a[2][1] = 2
// a[2][2] = 6

// Output:
// Average of an Array: 3.88

#include<stdio.h>
int main(){

    int size_of_row , size_of_col ;

    printf("Enter Size Of Row : - ");
    scanf("%d",&size_of_row);

    printf("Enter Size Of Col : - ");
    scanf("%d",&size_of_col);

    int array [size_of_row] [size_of_col] , count = 0;
    float sum = 0 , average = 0;
    for(int row = 0; row < size_of_row; row++){
        for(int col = 0; col < size_of_col; col++){
            printf("Enter Elemant [%d] [%d]:-",row,col);
            scanf("%d",&array[row][col]);
        }
        printf("\n");
}    for(int row = 0; row < size_of_row; row++){
        for(int col = 0; col < size_of_col; col++){
            count++;
            sum = sum + array[row][col];
            average = sum / count;
           
        }
}printf("Average of an Array : - %f",average);

    return 0;
}