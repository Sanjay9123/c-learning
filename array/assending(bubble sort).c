#include <stdio.h>
int main() {
    int temp,e;
    printf("enter number of element : ");
    scanf("%d",&e);
   int a[e];
   printf("enter the element : ");
   for(int i=0;i<e;i++)
   scanf("%d",&a[i]);
   int b= sizeof(a)/sizeof(a[0]);
   for(int i=0;i<b;i++){
       for(int j=0;j<b-1-i;j++)
       {
           if(a[j]>a[j+1])
           {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
       }
   }
   printf("{");
   for(int i=0;i<b;i++)
   printf("%d,",a[i]);
   printf("}");
return 0;
}
