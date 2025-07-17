#include<stdio.h>
int main()
{
  int num1,a;
  printf("enter the number : \n");
  scanf(" %d",&num1);
  
  for(a=0;num1!=0;a++,num1/=10);
  
  printf("number of digit in given numbers is : %d",a);

   
   
}
