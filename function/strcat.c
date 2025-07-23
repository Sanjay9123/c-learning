#include <stdio.h>
void userstrcat(char *,char *);
int main() {
    char a[20]="sanjay";
    char b[]="saravana";
    userstrcat(a,b);
    printf("%s",a);
    return 0;
}
void userstrcat(char *a,char *b)
{
    int i,j;
    for(i=0;a[i];i++);
    for(j=0;a[i]=b[j];j++,i++);
}
