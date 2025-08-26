// to write a data into files

#include<stdio.h>

int main(int arg,char* argv[] )
{
	FILE *j;
	j=fopen(argv[1],"w");
if(j==NULL)
	{
		printf("file not exits\n");
		return 0;
	}
char s[]="file is created\n",i;
while(s[i])
	fputc(s[i++],j);

}
