#include<stdio.h>
#include<stdlib.h>

void main(int argc,char *argv[])
{
int i;
char ch;
FILE *fs,*fd;

fs=fopen(argv[1],"r");

if(argc<3)
{
printf("cp: missing file operand\n   Usage.: ymcp sourcefile destfle1 destfile2 destfile3 ...\n");
return;
}

if(fs==0)
{
printf("\nymcp: missing file.\n");
return;
}

for(i=2;i<argc;i++)
{
fd=fopen(argv[i],"w");

while( (ch=fgetc(fs))!=-1 )
fputc(ch,fd);

fopen(argv[1],"r");
//rewind(fp);
}


}
