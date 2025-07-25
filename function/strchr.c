#include<stdio.h>
char *mystrchr(char *,char *);
int main()
{
    
char a[20],b;
printf("enter the string\n");
scanf("%s",a);
printf("enter the char\n");
scanf(" %c",&b);
char* p =mystrchr(a,&b);

if(p==NULL)
printf("there is no char %c",b);
else
printf("%s",p);
} 
  char * mystrchr(char *a,char *b)
  {
      int i;
      for(i=0;a[i];i++)
      {
          if(a[i]==*b)
          return a+i;
      }
      return NULL;
  }
