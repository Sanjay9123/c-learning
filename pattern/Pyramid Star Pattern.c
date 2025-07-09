#include <stdio.h>

int main() {
    int n,j,i,s;
    printf("enter the n number");
    scanf("%d",&n);
    
    for(j=0;j<n;j++){
        
        for(s=0;s<n-j;s++)
        printf(" ");
     for(i=0;i<j+1;i++){
            printf("* ");
           
     }
        printf("\n");
    }
    return 0;
}
