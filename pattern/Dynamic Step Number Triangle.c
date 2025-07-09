#include <stdio.h>

int main() {
    int n,j,i,k,d;
    printf("enter the n number");
    scanf("%d",&n);
    
    for(j=0;j<n;j++){
        k=j+1;
        d=n-1;
     for(i=0;i<j+1;i++){
            printf("%d ",k);
            k = k+d--;
     }
        printf("\n");
    }
    return 0;
}
