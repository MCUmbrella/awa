#include <iostream>
using namespace std;
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
string genstr(unsigned long long len)
{
	string a("aw");
	{
	for(unsigned long long i=0;i<len;i++)
	  a+="aw";
	}
	return a+"a";
}
int main(int argc,char** argv)
{
	unsigned long long num=0;
	if(argc>1)
	  num=toULL(argv[1]);
	cout<<genstr(num)<<endl;
	return 0;
}
