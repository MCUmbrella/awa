#include<stdio.h>
#include<string.h>
#include<stdlib.h>
unsigned long b;
short u=0;
short U=0;
short d=0;
short i;
char *endptr;
unsigned long aaa;
int awa(unsigned long a)
{
	for(b=0; b<a; b++){printf("aw");};
	printf("a\n");
	return 0;
}
int AWA(unsigned long a) 
{
	for(b=0;b<a;b++){printf("AW");};
	printf("A\n");
	return 0;
}
int AwA(unsigned long a) 
{
	for(b=0;b<a;b++){printf("Aw");};
	printf("A\n");
	return 0;
}
int c(char cc[])
{
  if(!strcmp(cc,"-u")||!strcmp(cc,"--upper")){u=1;}
  else if(!strcmp(cc,"-U")||!strcmp(cc,"--aupper")){U=1;}
  else if(!strcmp(cc,"-d")||!strcmp(cc,"--debug")){d=1;};
  return 0;
}
int main(int argc, char **argv)
{
if(argc<=1){return 2;};
if(!strcmp(argv[1],"-h")||!strcmp(argv[1],"--help")){puts("Help for awa:\n\nUsage: awa <Number o' \"awa\"s> [[--upper || -u] || [--aupper || -U]]\n-u or --upper: All of \"awa\" is in upper case\n-U or --aupper: The 'a' character is in upper case\n-d or --debug: No awa. Used only for debugging of type converter. May be removed in the future.\n\nExit codes:\n0: No problem awa\n1: Number o' \"awa\"s not acceptable\n2: Too few arguments\n3: Don't use '-u' and '-U' in one command\n\nEnjoy! awa");return 0;}
 else if(strchr(argv[1],'-')!=0){return 1;};

	for(i=2; i<argc; i++) {c(argv[i]); };
	aaa=strtoul(argv[1],&endptr,10);
	if((int)*endptr!=0){return 1;};
	if(d){printf("aaalu=%lu\natoiargv1lu=%lu\natoiargv1d=%d\n",aaa,atoi(argv[1]),atoi(argv[1]));return 0;};
	if(aaa<1){return 2;}
	if(u==1&&U==1){return 3;};
	if(u==1){AWA(aaa);return 0;};
	if(U==1){AwA(aaa);return 0;};
	awa(aaa);
	return 0;
}
