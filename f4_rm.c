#include<stdio.h>

void main(int argc,char **argv)
{
int i,s;
char ch;
FILE *fp;

if(argc<2)
{
printf("rm: missing operand\n");
return;
}

for(i=1;i<argc;i++)
{
s=remove(argv[i]);
if(s==0)
{
//printf("file '%s' is removed..\n",argv[i]);
printf("file \e[1;33m'%s'\e[0m is removed..\n",argv[i]);
}
else
printf("yrm: cannot remove '%s': No such file or directory\n",argv[i]);
}
}
