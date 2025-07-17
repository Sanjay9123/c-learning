#include<stdio.h>
int main(){
    int a;
    printf("enter the number for table : ");
    scanf("%d",&a);
    for(int i=1;i<13;i++)
    printf("%d * %02d = %02d\n",a,i,a*i);
}
