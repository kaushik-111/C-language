#include<stdio.h>
int main(){

    FILE *pointer;
    char data[100];
    pointer = fopen("demo.txt", "a");

    if (pointer == NULL)
    {
        printf("Cannot access !");
    }else
    {
        printf("open Your File\n");
        printf("Enter Your Name:-");
    }
    gets(data);
    fputs(data , pointer);

    while (fgets(data , 10 , pointer) != NULL)
    {
        printf("%s",data);
    }
    
    

    return 0;
}