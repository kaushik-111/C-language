
//4. Create a program in [programming language of choice] that prompts the user to input values into a 1D array and identifies and displays all the odd numbers within the array.

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
        if ( arr[index] % 2!=0)
        {
            printf("Odd number %d : %d\n", number++, arr[index]);
        }
        
      
    }
    return 0;
}