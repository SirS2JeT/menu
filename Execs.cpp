#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include "Pages.h"

void Movement(int& CrrntItem, int& LastItem, int& CrrntPage)
{
	if (GetAsyncKeyState(VK_UP))
	{
		keybd_event(VK_UP, 0, KEYEVENTF_KEYUP, 0);
		if (0 < CrrntItem - 1)
			--CrrntItem;
		else
			CrrntItem = LastItem;
		switch (CrrntPage)
		{
		case 0:
			MainPage(CrrntItem, LastItem);
			break;
		case 1:
			Dialog(CrrntItem, LastItem);
			break;
		case 2:
			UndrConstr(CrrntItem, LastItem);
			break;
		case 5:
			ExitDialog(CrrntItem, LastItem);
			break;
		}
	}
	if (GetAsyncKeyState(VK_DOWN))
	{
		keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
		if (CrrntItem < LastItem)
			++CrrntItem;
		else
			CrrntItem = 1;
		switch (CrrntPage)
		{
		case 0:
			MainPage(CrrntItem, LastItem);
			break;
		case 1:
			Dialog(CrrntItem, LastItem);
			break;
		case 2:
			UndrConstr(CrrntItem, LastItem);
			break;
		case 5:
			ExitDialog(CrrntItem, LastItem);
			break;
		}
	}
}

void ItemLoader(int& CrrntItem, int LastItem, int& CrrntPage)
{
	if (CrrntPage == 0) 
		switch (CrrntItem)
		{
		case 1:
			CrrntPage = 1;
			CrrntItem = 1;
			Dialog(CrrntItem, LastItem);
			break;
		case 2:
			CrrntPage = 2;
			CrrntItem = 1;
			UndrConstr(CrrntItem, LastItem);
			break;
		case 3:
			CrrntPage = 2;
			CrrntItem = 1;
			UndrConstr(CrrntItem, LastItem);
			break;
		case 4:
			CrrntPage = 2;
			CrrntItem = 1;
			UndrConstr(CrrntItem, LastItem);
			break;
		case 5:
			CrrntPage = 5;
			CrrntItem = 1;
			ExitDialog(CrrntItem, LastItem);
			break;
		}
	if (CrrntPage == 1) 
		switch (CrrntItem)
		{
		case 1:
			system("cls");
			printf("HONK\n");
			printf("Press arrow up to proceed\n");
			break;
		case 2:
			CrrntPage = 0;
			CrrntItem = 1;
			MainPage(CrrntItem, LastItem);
			break;
		}
	if (CrrntPage == 2)
		switch (CrrntItem)
		{
		case 1:
			CrrntPage = 0;
			CrrntItem = 1;
			MainPage(CrrntItem, LastItem);
			break;
		}
	if (CrrntPage == 5)
		switch (CrrntItem)
		{
		case 1:
			exit(1);
			break;
		case 2:
			CrrntPage = 0;
			CrrntItem = 1;
			MainPage(CrrntItem, LastItem);
			break;
		}
}


void EnterGet(int& CrrntItem, int LastItem, int& CrrntPage, int& Key)
{
	if (Key == VK_RETURN)
	{
		ItemLoader(CrrntItem, LastItem, CrrntPage);
	}
}

