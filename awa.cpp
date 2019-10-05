#include <iostream>
using namespace std;
string genstr(int len)
{
	string a("aw");
	{
	for(int i=0;i<len;i++)
	  a+="aw";
	}
	return a+"a";
}
int main(int argc,char** argv)
{
	int num=0;
	if(argc>1)
	  num=atoi(argv[1]);
	cout<<genstr(num)<<endl;
	return 0;
}
