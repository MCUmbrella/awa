#include<stdio.h>
#include<string.h>
unsigned long long pow(unsigned long long a,unsigned long long b)
{
	unsigned long long ret=1;
	for(unsigned long long i=0;i<b;i++)
	 ret*=a;
    return ret;
}
unsigned long long toULL(char* c)
{
unsigned long long ret=0;
for(unsigned int i=0;i<strlen(c);i++)
   if(c[i]>='0' && c[i]<='9')
   ret+=(c[i]-'0')*pow(10,(strlen(c)-i-1));
   else
   return 0;
return ret;
}
void awa(unsigned long long a){for(unsigned long long b=0;b<a;b++){printf("aw");};printf("a\n");}
void AWA(unsigned long long a){for(unsigned long long b=0;b<a;b++){printf("AW");};printf("A\n");}
void Awa(unsigned long long a){for(unsigned long long b=0;b<a;b++){printf("Aw");};printf("A\n");}
int hasArgument(char** args,int num,char* expect)
{
  for(int i=0;i<num;i++)
    if(!strcmp(args[i],expect))
      return true;
  return false;
}
int main(int argc, char **argv)
{
short u=0;
short U=0;
if(argc<=1){return 1;};
if(hasArgument(argv+1,argc-1,"-h")||hasArgument(argv+1,argc-1,"--help")){puts("Help for awa:\nUsage: awa <Number o' \"awa\"s> [[--upper || -u] || [--aupper || -U]]\n--u or --upper: All of \"awa\" is in upper case\n-U or --aupper: The 'a' character is in upper case\n\nExit codes:\n0: No problem awa\n1: Number o' \"awa\"s not acceptable\n2: Too few arguments\n3: Don't use '-u' and '-U' in one command\n\nEnjoy! awa");return 0;}
  if(hasArgument(argv+1,argc-1,"-u")||hasArgument(argv+1,argc-1,"--upper")) u=1;
  else if(hasArgument(argv+1,argc-1,"-U")||hasArgument(argv+1,argc-1,"--aupper")) U=1;
//for(short i=2;i<argc;i++){c(argv[i]);};
unsigned long long aaa=toULL(argv[1]);
if(aaa<1){return 2;}
if(u==1&&U==1){return 3;};
if(u==1){AWA(aaa);return 0;};
if(U==1){Awa(aaa);return 0;};
awa(aaa);
return 0;
}
