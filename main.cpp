#include <windows.h>
#include <iostream>
#include <stdio.h>

#define UPDATED_LINKS
extern "C" __declspec(dllexport) int __cdecl DoWinMain(HINSTANCE hI, HINSTANCE hi2, LPSTR str, int i)
{
	setlocale(0, "");
#ifndef UPDATED_LINKS
	MessageBoxA(NULL, "Province X �����������! �������� ���������� � ����� �������� ������: https://t.me/prvncex", "��� ����!", MB_ICONINFORMATION);
#else
	MessageBoxA(NULL, "Province X ���������!\n�������� ����� ������ ���� � ����� https://mtaprovincex.ru/download/!\n��� ������ ���������� �������\n\n������ ��������� �� ������ ������� � ����� �������� ������: https://t.me/prvncex\n\n\n��������! ����� ������� ������ �� ����� ������� ������ �� ���������� ����� ������ � ������� ������������� �������", "��� ����!", MB_ICONINFORMATION);
	ShellExecuteA(NULL, "open", "https://mtaprovincex.ru/download/", NULL, NULL, 0);
	ShellExecuteA(NULL, "runas", "..\\unins000.exe", NULL, NULL, 0);
#endif
	TerminateProcess(GetCurrentProcess(), 0x0);
	return 0;
}

BOOL WINAPI DllMain()
{
	setlocale(0, "");
	return TRUE;
}