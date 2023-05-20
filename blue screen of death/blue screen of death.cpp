// blue screen of death.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<windows.h>
#include<stdio.h>
#include<tchar.h>

using namespace std;

int main(int args,_TCHAR *argv[])
{
	HANDLE FILE = CreateFileW(L"C:\\$MFT\\dir",FILE_READ_ATTRIBUTES,0,NULL,OPEN_EXISTING,0,NULL);
	CloseHandle(FILE);
}
