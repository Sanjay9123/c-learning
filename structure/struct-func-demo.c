//write a program to pass a structure variable to a function.

#include<stdio.h>

struct st 
{
    int roll;
    char name[10];
    float mark;
};

void fun(struct st);

int main()
{
    struct st s1={1,"ram",100};
    fun(s1);
}

void fun(struct st s2)
{
    printf("%d %s %f\n",s2.roll,s2.name,s2.mark);
    
}
