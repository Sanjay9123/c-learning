#include <stdio.h>

int main() {
    int num1,num2,num3,temp;
    printf("enter the  number 1 :");
    scanf("%d",&num1);
    printf("enter the  number 2 :");
    scanf("%d",&num2);
    printf("enter the  number 3 :");
    scanf("%d",&num3);
  
if((num1>=num2)&&(num1>=num3))
printf("the biggest number is %d",num1);
else if((num2>=num1)&&(num2>=num3))
printf("the biggest number is %d",num2);
else if((num3>=num1)&&(num3>=num2))
printf("the biggest number is %d",num3);

    return 0;
}
