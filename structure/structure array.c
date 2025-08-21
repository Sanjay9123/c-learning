// structure array

#include<stdio.h>

struct st 
{
    int roll;
    char name[10];
    float mark;
};

int main()
{
    int n,i;
    printf("enter the number of student\n");
    scanf("%d",&n);
    
    struct st s[n];
    
    for(i=0;i<n;i++)
    {
    printf("enter the student %d data : roll,name,mark\n",i+1);
    scanf("%d %s %f",&(s[i]).roll,(s[i]).name,&(s[i]).mark);
    }
    printf("\n");
    for(i=0;i<n;i++)
    printf("student %d data  roll : %d name : %s mark : %f\n",i,s[i].roll,s[i].name,s[i].mark);
}
