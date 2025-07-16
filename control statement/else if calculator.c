#include<stdio.h>

int main()
{  
   int num1,num2;
   char ch;
   printf("enter the number1,operator and number2 :");
   scanf("%d",&num1);
   scanf("%c",&ch);
   scanf("%d",&num2);
   if(ch=='+')
      printf("%d+%d=%d",num1,num2,num1+num2);
   
   else if(ch=='-')
      printf("%d+%d=%d",num1,num2,num1-num2);
   
   else if(ch=='*')
      printf("%d*%d=%d",num1,num2,num1*num2);
   
   else if(ch=='/')
      printf("%d/%d=%d",num1,num2,num1/num2);
   
   else if(ch=='%')
      printf("%d%%%d=%d",num1,num2,num1%num2);
   
   else
      printf("invalid operator");
}
