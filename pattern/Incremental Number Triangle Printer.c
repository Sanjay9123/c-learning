#include <stdio.h>

int main() {
    int n,j,i;
    printf("enter the n number");
    scanf("%d",&n);

    for(j=0;j<n;j++){
        for(i=0;i<j+1;i++)
            printf("%d",i+1);
        printf("\n");
    }
    return 0;
}f
