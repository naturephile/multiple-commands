#include<stdio.h>
void main(int argc,char **argv)
{
int i;
char ch;
FILE *fp;

if(argc<2)
{
printf("yfiles: missing file operand\nUsage:yfiles file1 file2 ...\n");
return;
}

for(i=1;i<argc;i++)
{
fp=fopen(argv[i],"w");
}

printf("\e[1;33m%d\e[0m files are created.\n",i-1);

}
