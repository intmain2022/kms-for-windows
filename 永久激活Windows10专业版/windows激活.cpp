#include<stdio.h>
#include<windows.h>
#include <iostream>

#include "WinFunctions.h"
using namespace std;

int StartNumber;

int main()
{
	cout << "by int main";
	WinFunctions::StartNotify("请选择需要激活的Windows10/11版本：1: Windows10/11专业版 \n");
	cin >> StartNumber;

	if (StartNumber == 1)
	{
		WinFunctions::StartNotify("正在准备激活Windows10专业版.\n");

		system("slmgr /ipk W269N-WFGWX-YVC9B-4J6C9-T83GX");
		system("slmgr /skms kms.example.com");
		system("slmgr /ato");

		WinFunctions::StartNotify("激活Windows10专业版完成.");
	}
	else if (StartNumber == 2)
	{
		WinFunctions::StartNotify("Error ：未找到Windows10家庭版激活码");
		exit(0);
	}
	else
	{
		WinFunctions::StartNotify("Error ：Not Find Windows10...");
		exit(0);
	}

	system("pause");
	return 0;
	exit(0);
}
