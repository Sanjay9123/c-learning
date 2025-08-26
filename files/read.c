//read and print data from files

#include<stdio.h>

int main()
{
	FILE *j;
	j=fopen("read1.txt","r");
if(j==NULL)
	{
		printf("file not exits");
		return 0;
	}
char ch;
while((ch=fgetc(j))!=EOF)
	printf("%c",ch);


}
