#include<stdio.h>
void awa(int a)
{
for(int b=0;b<a;b++){printf("aw");};printf("a\n");
}
int main(int argc, char **argv)
{
if(argc<=1){return 1;}
long long aaa=atoi(argv[1]);
if(aaa<1){return 2;}
awa(aaa);
return 0;
}
