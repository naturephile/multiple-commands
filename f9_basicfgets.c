// ycat using fgets

#include<stdio.h>
#include<stdlib.h>
int size(FILE *fp)
{
char ch;
int c;
c=0;
while((ch=fgetc(fp))!=-1)
c++;
return c;
}


void main(int argc,char **argv)
{
FILE *fp;
int n,c;

fp=fopen(argv[1],"r");
c=size(fp);

char s[c],ch;

printf("characters in file are.: %d\n",c);

fp=fopen(argv[1],"r");

while( fgets(s,c,fp) )
{
printf("%s",s);
}

}
