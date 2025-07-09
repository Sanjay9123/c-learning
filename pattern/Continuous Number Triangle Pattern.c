#include <stdio.h>

int main() {
    int n,j,i,k=1;
    printf("enter the n number");
    scanf("%d",&n);
    
    for(j=0;j<n;j++){
        for(i=0;i<j+1;i++)
            printf("%d ",k++);
        printf("\n");
    }
    return 0;
}
