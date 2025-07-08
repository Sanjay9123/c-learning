#include <stdio.h>

int main() {
    int num1,num2;
    printf("enter the  number 1 :");
    scanf("%d",&num1);
    printf("enter the  number 2 :");
    scanf("%d",&num2);
    
    num1= num1^num2;
    num2= num2^num1;
    num1= num1^num2;
    
    printf("number 1 : %d \nnumber 2 : %d\n",num1,num2);

    return 0;
}
