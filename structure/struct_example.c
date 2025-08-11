// Program to demonstrate defining a structure, initializing its members, 
// and printing them using both direct and pointer syntax .

#include<stdio.h>
struct data
{
    int roll;
    char s[10];
    float mark;
};

int main()
{
    struct data s1={1,"aaaaa",100};
    struct data s2={2,"bbbbb",99};
    
    printf("roll : %d, name : %s,mark :%f\n",s1.roll,s1.s,s1.mark);
    printf("roll : %d, name : %s,mark :%f\n",(&s2)->roll,(&s2)->s,(&s2)->mark);
    
}
