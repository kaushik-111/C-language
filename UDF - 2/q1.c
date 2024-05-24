
//Q.1 Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.
int sum(int array[] , int size ){
    int add = 0;

    for(int index = 0; index <= size; index++){
        add += array[index];
    }
    return add;
}
#include<stdio.h>
main(){
    int Number;
    printf("Enter Arry of Size : - ");
    scanf("%d",&Number);

    int array[Number];
    for(int index = 0; index <= Number; index++){
        scanf("%d",&array[index]);
    }
    printf("The sum of an Array :- %d",sum(array , Number));
}
