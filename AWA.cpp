// AWA.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "objIdl.h"
#include "sapi.h"
short s = 0;
ISpVoice* mssp;
#define awafunc(N,A,W) void N(unsigned long long count) { for (unsigned long long i = 0; i < count; i++) { printf(#A#W);if(s){mssp->Speak(L#A#W, SPF_ASYNC, NULL);} }; printf(#A"\n");if(s){mssp->WaitUntilDone(INFINITE);mssp->Speak(L#A, SPF_ASYNC, NULL);} }
awafunc(awa, a, w)
awafunc(AWA, A, W)
awafunc(AwA, A, w)

int main(int argc, char** argv)
{

	short u = 0;
	short U = 0;
	
	if (argc <= 1) { return 1; };
	if (!strcmp(argv[1], "-h") || !strcmp(argv[1], "--help")) {
		std::cout<<"Help for awa:\n\
			Usage: awa <Number o' \"awa\"s> [[--upper || -u] || [--aupper || -U]] [--speak]\n\
			-u or --upper: All of \"awa\" is in upper case\n\
			-U or --aupper: The 'a' character is in upper case\n\
			--speak: speak it with sapi\n\n\
			Exit codes:\n\
			0: No problem awa\n\
			1: Number o' \"awa\"s not acceptable\n\
			2: Too few arguments\n\
			3: Don't use '-u' and '-U' in one command\n\
			4: Sapi create failure\n\n\
			Enjoy! awa"; 
		return 0; }
	else if (strchr(argv[1], '-') != 0) { return(-1); };
	auto c=[&](char* cc)
	{
		if (!strcmp(cc, "-u") || !strcmp(cc, "--upper")) { u = 1; }
		else if (!strcmp(cc, "-U") || !strcmp(cc, "--aupper")) { U = 1; }
		if (!strcmp(cc, "--speak")) { s = 1; }
	};
	for (short i = 2; i < argc; i++) { c(argv[i]); };
	unsigned long long aaa = atoi(argv[1]);
	if (aaa < 1) { return 2; }
	if (s) {
		if (FAILED(::CoInitialize(NULL)))
			return 4;
		
		HRESULT hr = CoCreateInstance(CLSID_SpVoice, NULL, CLSCTX_ALL,
			IID_ISpVoice, (void**)&mssp);
		mssp->SetRate(3);
		if (FAILED(hr))
		{
			return 4;
		}
	}
	if (u == 1 && U == 1) {mssp->Release();::CoUninitialize(); return 3; };
	if (u == 1) { AWA(aaa); mssp->Release(); ::CoUninitialize(); return 0; };
	if (U == 1) { AwA(aaa); mssp->Release(); ::CoUninitialize(); return 0; };
	awa(aaa);
	mssp->Release(); ::CoUninitialize();
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
