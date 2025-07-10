#include<stdio.h>

int main(){
    
    int n,i,j,s,l;
    
    printf("enter the n number");

    
    scanf("%d",&n);

    for(i=n;i>=-n;i--){
        
        if(i<0)
        l=-i;
        else 
        l=i;
        
      for(s=0;s<l;s++)
        printf(" ");
    
      for(j=0;j<n-l+1;j++)
         printf("* ");
    printf("\n");

    } 
