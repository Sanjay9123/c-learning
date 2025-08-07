// check the string is palindrome or not without using another string

#include<stdio.h>
int main()
{
    char s1[20];
    printf("enter the string");
    scanf("%[^\n]",s1);
    
    int n,i;
    for(n=0;s1[n];n++);
     n--;
    for(i=0;i<n;i++,n--)
    {
        if(s1[i]!=s1[n])
            break;
    }
    
    if(n<i)
        printf("its palindrome  \n");
    else
        printf("not a palindrome\n");
    
}
