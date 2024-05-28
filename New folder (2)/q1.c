#include<stdio.h>
int multiplay(int a);
int main(){
    int Number;
    printf("Enter A Number :-");
    scanf("%d",&Number);
   int sum = multiplay(Number);
   printf("%d",sum);
}
int multiplay(int a){
   int sum = 0;
   for(int index = 0; index <= a; index++){
    if(index % 2 == 0){
    //    sum += index * index;
       sum = sum + (index * index);
    }
   }
   return sum;
}