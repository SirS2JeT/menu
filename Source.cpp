#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include "Pages.h"
#include "Execs.h"


int main()
{
	int CrrntItem = 1;
	int LastItem;
	int CrrntPage = 0;
	int Key;
	MainPage(CrrntItem, LastItem);
	while (Key = _getch())
	{
		Movement(CrrntItem, LastItem, CrrntPage);
		EnterGet(CrrntItem, LastItem, CrrntPage, Key);
	}
	return 0;
}
