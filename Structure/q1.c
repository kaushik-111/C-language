
//Q.1 Write a Program to create Student Record System for n students using structure. Consider the below-mentioned attributes in the Student structure:

// - stu_id
// - stu_name
// - stu_age
// - stu_course
// - stu_city
// - stu_standard
// - stu_school


#include<stdio.h>
#include<string.h>

struct Student
{
    int id;
    char name[100];
    int age;
    char course[100];
    char city[100];
    int standard;
    char school[100];
}s[100];

int main(){

int Number;
printf("Enter Size of an array:-");
scanf("%d",&Number);

for (int index = 0; index < Number; index++)
{
  printf("Enter ID:-");
  scanf("%d",&s[index].id);

  printf("Enter A Name:-");
  scanf("%s",&s[index].name);

  printf("Enter a Age:-");
  scanf("%d",&s[index].age);

  printf("Enter a course:-");
  scanf("%s",&s[index].course);

  printf("Enter a city:-");
  scanf("%s",&s[index].city);

  printf("Enter a Standard:-");
  scanf("%d",&s[index].standard);

  printf("Enter a school:-");
  scanf("%s",&s[index].school);
}


for (int  index = 0; index < Number; index++)
{
    printf("ID:%d NAME:%s AGE:%d COURSE:%s STANDARD:%d SCHOOL:%s",s[index].id , s[index].name , s[index].age , s[index].course , s[index].city , s[index].standard , s[index].school);
}

    return 0;
}