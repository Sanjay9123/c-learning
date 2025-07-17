#include<stdio.h>
int main()
{
  int num1,a=0;
  printf("enter the number : ");
  scanf(" %d",&num1);
  
  for(;num1!=0;num1/=10)
  {
     a=a*10+num1%10;
     
  }
  
  printf("reversed number : %d",a);
}
