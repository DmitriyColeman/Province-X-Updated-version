#include <windows.h>
#include <iostream>
#include <stdio.h>

#define UPDATED_LINKS
extern "C" __declspec(dllexport) int __cdecl DoWinMain(HINSTANCE hI, HINSTANCE hi2, LPSTR str, int i)
{
	setlocale(0, "");
#ifndef UPDATED_LINKS
	MessageBoxA(NULL, "Province X обновляется! Ожидайте информации в нашем телеграм канале: https://t.me/prvncex", "УРА ЛЕТО!", MB_ICONINFORMATION);
#else
	MessageBoxA(NULL, "Province X обновился!\nСкачайте новую версию игры с сайта https://mtaprovincex.ru/download/!\nЭту версию желательно удалить\n\nСписок изменений вы можете увидеть в нашем телеграм канале: https://t.me/prvncex\n\n\nВНИМАНИЕ! После нажатия кнопки ОК будет открыта ссылка на скачивание новой версии и запущен деинсталлятор текущей", "УРА ЛЕТО!", MB_ICONINFORMATION);
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