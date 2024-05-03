#include<stdio.h>
int main(){
    //Q.1 Write a Program to print all even from 1 to 50 by skipping 3 numbers using do while loop.

  

   int i = 1;
   
    do{
        if(i % 2 == 0){
           printf("%d\n",i);
           i += 7;
        }else{
            i++;
        }
      
     
    } while (i <= 50);
    
    
    
    return 0;

}