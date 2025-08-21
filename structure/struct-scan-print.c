//WAP to design the functions scan() and print() to scan and print the struct variable data using function

#include<stdio.h>

struct st 
{
    int roll;
    char name[10];
    float mark;
};

void scan(struct st *);
void print(struct st * s);
int main()
{
    struct st s1;
    scan(&s1);
    print(&s1);
    return 0;
    
}

void scan(struct st * s)
{
    printf("in scan().. enter the data for student : ");
    scanf("%d %s %f",&s->roll,s->name,&s->mark);
    
}

void print(struct st * s)
{
printf("\nin print()... data of student\n");
printf("%d %s %f",s->roll,s->name,s->mark);
}
