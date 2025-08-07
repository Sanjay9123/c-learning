#include<stdio.h>
void reverse_word(char*s);
void reverse_str(char*s);
int main()
{
    char p[20];
    printf("enter the string : ");
    scanf("%[^\n]",p);
     
    reverse_str(p);
    reverse_word(p);
    
    printf("%s",p);
}    

void reverse_word(char*s)
{
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
}
void reverse_str(char * s)
{
    int i,j,temp;
    for(j=0;s[j];j++);
    j--;
    for(i=0;i<j;i++,j--)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
}



