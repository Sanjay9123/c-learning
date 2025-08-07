#include<stdio.h>

int main()
{
    char s[20];
    printf("enter the string :");
    scanf("%s",s);
    
    int i,j,count=1,tru;
    
    for(i=0;s[i];i++)
    {   tru=0;
        count=1;
        for(j=0;j<i;j++)
        {
            if(s[j]==s[i])
            {
              tru=1;
              break;
            }
        }
        if(tru)
        continue;
        
        for(j=i+1;s[j];j++)
        {
            if(s[j]==s[i])
                count++;
        }
        printf("%c = %d\n",s[i],count);
    }
}
