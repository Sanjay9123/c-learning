#include <stdio.h>

int main() {
    int n,j,i,s,k=1,d=1,a=1;
    printf("enter the n number");
    scanf("%d",&n);
    
    for(j=0;j<n;j++,d=!d){
        
        for(s=0;s<n-j-1;s++)
        printf("  ");

        if(!d)
        {
            for(i=0;i<k;i++)
            printf("* ");   
        }
        else
        {
            for(i=0;i<k;i++)
            printf("%d ",a);
            a++;
        }
         k=k+2;
   
