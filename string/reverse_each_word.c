#include<stdio.h>
int main()
{
    char s[50];
    printf("enter the string : ");
    scanf("%[^\n]",s);
    int i,j,k,l,temp;
    
    for(i=0;s[i];i++)
    {   
        if(s[i]==' ')
        continue;// string as two or more space
        
        for(j=i;s[j]!=' '&&s[j]!=0;j++);
        
        for(k=i,l=j-1;k<l;k++,l--)
        {
               temp=s[k];
               s[k]=s[l];
               s[l]=temp;
        }
        i=j;
    }
      printf("%s\n",s);
       
    
}    
