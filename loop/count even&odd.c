#include<stdio.h>
int main()
{
  int num1,odd=0,even=0;
  printf("enter the number : ");
  scanf(" %d",&num1);
  
  for(;num1!=0;num1/=10)
  {
     if(num1%2==0)
          even++;
     else
          odd++;
  }
  
  printf("there are %d even number and %d odd number",even,odd);
}
