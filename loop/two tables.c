#include<stdio.h>
int main(){
    int num1,num2;
    printf("enter the number for table : ");
    scanf("%d",&num1);
    scanf("%d",&num2);
    for(int i=1;i<13;i++)
    printf("%d * %02d = %02d\t\t\t%d * %02d = %02d\n",num1,i,num1*i,num2,i,num2*i);
}
