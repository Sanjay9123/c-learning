#include<stdio.h>

int main(int arg ,char *argv[])
{
 	
      FILE *read= fopen(argv[1],"r");
      FILE *write= fopen(argv[2],"w");
      char ch;

      while((ch=fgetc(read))!=EOF)
		  fputc(ch,write);

	remove(argv[1]);	  

}
