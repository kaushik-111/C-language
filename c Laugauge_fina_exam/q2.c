#include <stdio.h>

int main() {
 
   printf("question:2. create a c program to find the smallest element in an 1d array.\n");

   int array[10] = {154, 622,123, 487, 509, 765, 771, 821, 879, 210};
   int index, smallest;

   smallest = array[0];
   
   for(index= 1; index <= 10; index++) {
      if( smallest > array[index] ) 
         smallest = array[index];
   }
   
   printf("Smallest element of array is %d", smallest);   
   
   return 0;
}