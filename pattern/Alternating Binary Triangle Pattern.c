#include <stdio.h>

int main() {
    int n,j,i,k,d;
    printf("enter the n number");
    scanf("%d",&n);
    
    for(j=0;j<n;j++){
        
        d=1;
     for(i=0;i<j+1;i++,d=!d){
            printf("%d ",d);
           
     }
        printf("\n");
    }
    return 0;
}
