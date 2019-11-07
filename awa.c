#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void awa(unsigned long long a)
{
for(unsigned long long b=0;b<a;b++){printf("aw");};printf("a\n");
}
void AWA(unsigned long long a)
{
for(unsigned long long b=0;b<a;b++){printf("AW");};printf("A\n");
}
void Awa(unsigned long long a)
{
for(unsigned long long b=0;b<a;b++){printf("Aw");};printf("A\n");
}
int main(int argc, char **argv)
{
short u=0;
short U=0;
if(argc<=1){return 1;};
if(strcmp(argv[1],"-h")==0||strcmp(argv[1],"--help")==0){puts("Help for awa:\nUsage: awa <Number o' \"awa\"s> [[--upper || -u] || [--firstupper || -U]]\n--u or --upper: All of \"awa\" is in upper case\n-U or --firstupper: The 'a' character is in upper case\n\nExit codes:\n0: No problem awa\n1: Number o' \"awa\"s not acceptable\n2: Too few arguments\n3: Don't use '-u' and '-U' in one command\n\nEnjoy! awa");return 0;}else if(strchr(argv[1],'-')!=0){return(-1);};
void c(char cc[])
{
  if(strcmp(cc,"-u")==0||strcmp(cc,"--upper")==0){u=1;}
  else if(strcmp(cc,"-U")==0||strcmp(cc,"--aupper")==0){U=1;}
}
for(short i=2;i<argc;i++){c(argv[i]);};
unsigned long long aaa=atoi(argv[1]);
if(aaa<1){return 2;}
if(u==1&&U==1){return 3;};
if(u==1){AWA(aaa);return 0;};
if(U==1){Awa(aaa);return 0;};
awa(aaa);
return 0;
}
