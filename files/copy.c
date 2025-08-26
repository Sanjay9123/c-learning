//create a file and copy data from source file to destination file
#include<stdio.h>

int main(int arg, char *argv[])
{
	FILE *read=fopen(argv[1],"r");
	FILE *write=fopen(argv[2],"w");

	char ch;
	 
	while((ch=fgetc(read))!=EOF)
		fputc(ch,write);	
}
