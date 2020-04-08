#include <windows.h>
#include <stdio.h>


void MainPage(int CrrntItem, int& LastItem)
{
	LastItem = 5;
	system("cls");
	printf("%sStart Sth\n", CrrntItem == 1 ? ">" : " ");
	printf("%sContinue Sth\n", CrrntItem == 2 ? ">" : " ");
	printf("%sCustomise Sth\n", CrrntItem == 3 ? ">" : " ");
	printf("%sDelete Sth\n", CrrntItem == 4 ? ">" : " ");
	printf("%sExit\n", CrrntItem == 5 ? ">" : " ");
}

void Dialog(int CrrntItem, int& LastItem)
{
	LastItem = 2;
	system("cls");
	printf("Do u wanna proceed?\n");
	printf("%sYeah\n", CrrntItem == 1 ? ">" : " ");
	printf("%sNope, go back\n", CrrntItem == 2 ? ">" : " ");
}

void UndrConstr(int CrrntItem, int& LastItem)
{
	LastItem = 1;
	system("cls");
	printf("This option is still under construction\n");
	printf("%sSad okay, go back\n", CrrntItem == 1 ? ">" : " ");
}

void ExitDialog(int CrrntItem, int& LastItem)
{
	LastItem = 2;
	system("cls");
	printf("Do u wanna quit the program?\n");
	printf("%sYes\n", CrrntItem == 1 ? ">" : " ");
	printf("%sNope, go back\n", CrrntItem == 2 ? ">" : " ");
}
