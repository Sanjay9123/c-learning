/*Create a structure called "Student" with members name, roll, and total marks.
Write a C program to input data for two students, display their information, 
and find the average of total marks.*/


#include<stdio.h>

struct st
{
    int roll;
    char name[20];
    float mark;
};


int main()
{
   struct st s1,s2;

    printf("enter the student one data : roll,name,mark\n");
    scanf("%d %s %f",&s1.roll,s1.name,&s1.mark);
    
    printf("\n");
    
    printf("enter the student two data : roll,name,mark\n");
    scanf("%d %s %f",&s2.roll,s2.name,&s2.mark);
    
    printf("\n");
    
    printf("student 1 data\n"); 
    printf("roll : %d \nname : %s \nmark : %f\n",s1.roll,s1.name,s1.mark);
    
    printf("\n");
    
    printf("student 2 data\n");
    printf("roll : %d \nname : %s \nmark : %f\n",s2.roll,s2.name,s2.mark);
    
    printf("\n");
    
    printf("average of students mark : %f\n",(s1.mark+s2.mark)/2);
   
}
