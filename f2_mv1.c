// implement cp command..
#include<stdio.h>
#include<stdlib.h>

void main(int argc,char **argv)
{
char ch;
int s;
FILE *fs,*fd;

fs=fopen(argv[1],"r");

if( strcmp(argv[1],"--help")==0 )
printf("Usage: mv [OPTION]... [-T] SOURCE DEST\nor:  mv [OPTION]... SOURCE... DIRECTORY\nor:  mv [OPTION]... -t DIRECTORY SOURCE...\nRename SOURCE to DEST, or move SOURCE(s) to DIRECTORY.\n");

if(argc<4)
{
printf("\nymv: missing file operand\nTry 'ymv --help' for more information.\n");
return;
}

if(fs==0)
{
printf("\nFile is not available.\n");
return;
}

fd=fopen(argv[2],"w");

while( (ch=fgetc(fs))!=-1 )
fputc(ch,fd);

s=remove(argv[1]);
if(s==0)
printf("'%s' file moved successfully.\n",argv[1]);
}
