// implement move all command..
//working on...
#include<stdio.h>
#include<stdlib.h>

void main(int argc,char **argv)
{
//char ch,str[1000];
char ch,str[1000];
int s;
FILE *fl,*fs,*fd;

system("ls -a > ls.txt");


//if( strcmp(argv[1],"--help")==0 )
//printf("Usage: mv [OPTION]... [-T] SOURCE DEST\nor:  mv [OPTION]... SOURCE... DIRECTORY\nor:  mv [OPTION]... -t DIRECTORY SOURCE...\nRename SOURCE to DEST, or move SOURCE(s) to DIRECTORY.\n");

if(argc<2)
{
	printf("Invalid usage: mvall destination\n");
}

fl=fopen("ls.txt","r");

//we can use touch for multi file creation at destination..


while( (fscanf(fl,"%[^\n]",str)) )
{

fs=fopen(str,"r");


fd=fopen(argv[1]/str,"w");	//working...

while( (ch=fgetc(fs))!=-1 )
fputc(ch,fd);

remove(argv[1]);

//s=remove(argv[1]);
//if(s==0)

//printf("File moved successfully.\n",argv[1]);


}


