#include <stdio.h>

int main() {
    int n,j,i,s;
    printf("enter the n number");
    scanf("%d",&n);
    
    for(j=0;j<n;j++){
        
        for(s=0;s<j;s++)
        printf(" ");
     for(i=0;i<n-j;i++){
            printf("* ");
           
     }
        printf("\n");
    }
    return 0;
}
