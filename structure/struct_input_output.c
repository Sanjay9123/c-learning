// Program to read and print structure data in C

#include<stdio.h>

struct data
{
    int roll;
    char s[10];
    float mark;
};

int main()
{
    struct data s1,s2;
    
    scanf("%d%s%f",&s1.roll,s1.s,&s1.mark);
    scanf("%d%s%f",&(&s2)->roll,(&s2)->s,&(&s2)->mark);
    
    printf("roll : %d, name : %s,mark :%f\n",s1.roll,s1.s,s1.mark);
    printf("roll : %d, name : %s,mark :%f\n",(&s2)->roll,(&s2)->s,(&s2)->mark);
    
}
