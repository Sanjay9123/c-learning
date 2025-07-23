// Online C compiler to run C program online
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
   for(int i=0;i<b-1;i++){
       for(int j=i+1;j<b;j++)
       {
           
           if(a[i]>a[j])
           {
               temp=a[j];
               a[j]=a[i];
               a[i]=temp;
           }
       }
   }
   printf("{");
   for(int i=0;i<b;i++)
   printf("%d,",a[i]);
   printf("}");
return 0;
}
