#include<stdio.h>
int main()
{
  int num1,a=0;
  printf("enter the number : ");
  scanf(" %d",&num1);
  
  for(;num1!=0;num1/=10)
  {
     a += num1%10;      
  }
  
  printf("sum of given digit is : %d",a);
}
