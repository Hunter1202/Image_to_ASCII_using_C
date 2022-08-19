#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<Windows.h>
#include <mmsystem.h>
void textcolor(int x);
void textcolor(int x)
{
	HANDLE mau;
	mau = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau, x);
}
void loading()
{
	char a = 180, b = 220;
	printf("\n\t\t\t\t\t\tLoading...\n\n");
	printf("\t\t\t\t\t");
	int i;
	
	for(i = 0; i < 30; i++)
	{
		printf("%c",a);
	}
	
	printf("\r");
	printf("\t\t\t\t\t");
	
	for(i = 0; i < 30; i++)
	{
		printf("%c",b);
		Sleep(30);
	}
	
	printf("\nPROGRAM COMPLETED'!!!");
	Sleep(3000);
	system("cls");
	system("color B");
}
char c, a, b, d, e, g;
void ham1()
{
	char s[1000];
	FILE* f = fopen("anh1.txt", "r");
	
	while (!feof(f))
 	{
		fgets(s, sizeof(s), f);
		printf("%s", s);
		Sleep(1);
	}
}
void ham2()
{
	FILE *F;
	F = fopen("anh2.txt", "r");
	while (a != EOF)
	{
		a = fgetc(F);
		Sleep(80);//70
		textcolor(11);
		printf("%c", a);
	}fclose(F);
}
void ham3()
{
	FILE *F;
	F = fopen("anh3.txt", "r");
	while (b != EOF)
	{
		b = fgetc(F);
		Sleep(50);//50
		textcolor(14);
		printf("%c", b);
	}fclose(F);
}
main()
{
	loading();
	ham1();
	ham2();
	ham3();
}

