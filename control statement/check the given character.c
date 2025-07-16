#include<stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    
    if('A'<=ch && 'Z'>=ch)
      printf("its a capital alphabet");
      
    else if('a'<=ch && 'z'>=ch)
      printf("its an alphabet");
      
    else if('0'<=ch &&'9'>=ch)
      printf("its a number");
      
    else
      printf("its a special character");
    
    
    
    
}
