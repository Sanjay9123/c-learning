#include <stdio.h>

int main() {
    int num1,num2,num3,temp;
    printf("enter the  number 1 :");
    scanf("%d",&num1);
    printf("enter the  number 2 :");
    scanf("%d",&num2);
    printf("enter the  number 3 :");
    scanf("%d",&num3);
   temp=num1;
   num1=num3;
   num3=num2;
   num2=temp;
   
  printf("number 1 : %d \nnumber 2 : %d\nnumber 3 : %d\n",num1,num2,num3);

    return 0;
}
