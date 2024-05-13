
//5. Write a program in [programming language of choice] that accepts user input to populate a 1D array and then finds all the even numbers within the array, computing their product.

#include<stdio.h>
int main(){


    int size;
    int number = 1;
    printf("Enter the size of an Array :");
    scanf("%d",&size);
    
   
    int arr[size] ;
    for(int index = 0; index < size; index++){
        printf("Enter the value of a[%d] : ", index);
        scanf("%d",&arr[index]);
    }

    for (int index = 0; index < size; index++)
    {
        if ( arr[index] % 2 == 0)
        {
            printf("Even number %d : %d\n", number++, arr[index]);
        }
        
      
    }
    return 0;
}