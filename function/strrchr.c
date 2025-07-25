#include<stdio.h>
char *mystrrchr(char *,char *);
int main()
{
    
char a[20],b;
printf("enter the string\n");
scanf("%s",a);
printf("enter the char\n");
scanf(" %c",&b);
char* p =mystrrchr(a,&b);

if(p==NULL)
printf("there is no char %c",p);
else
printf("%s",p);
} 
  char * mystrrchr(char *a,char *b)
  {
      int i;
      for(i=0;a[i];i++);
      for(i=i-1;i>=0;i--)
      {
          if(a[i]==*b)
          return a+i;
      }
      return NULL;
  }
