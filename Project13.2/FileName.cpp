#pragma once
/*
 lab_13_2.
 ��������� ����� �����, ������ �������� � ���� �����, ��������������
 ������� ��������� �� ��������, ��������� ����������, �����������
 ������������� ��������. �� ��������� �������� ������ ���������
 ����������� ��� ������� ��������.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define SQR(x) (x)*(x) // ������ � ���������� � ���������� �������� �����
// ������ ���������� ���������� � ���� �����
#define STR(x) (x)*(x)*(x) // ������ � ���������� � ���������� ���� �����
// ������ ���������� ���������� � ���� �����
#define N 6

#define MIN_SQUARE(x, y, z) ((x * STR(y)) < ((x) + (z)) ? (x * STR(y)) : ((x) + (z)))
#define MAX(x, y, z) ((x - y * z) > (x * y + z) ? (x - y * z) : (x * y + z))


#define PRINTI(w) puts("control output"); \
 printf(#w"=%d\n",w)
 // ��������������� ������ ����������� ������� '\'
// ������ '#' ��������������� ��� �ᒺ������ �����
 // ��������� ����������� �� �������� ������� �����
#define PRINTR(w) puts ("rezult :"); \
 printf (#w"=%f\n",(float)w)


int main()
{
	puts("Lab 13.2. Using macros and preprocessing directive");
	int x, y, z, 
		xy3,
		xpz,
		xmyz,
		xypz;  // ���� ��� ����������
		
		
	char ch; // ������� �� ������������ ��������� ��������
	
	do
	{
#if (N > 5) // ���� ����� �������,
		// �� ������ �������� � ����� �����
		
		puts("Input 3 integer numbers");
		scanf("%d", &x);// �������� �����
		PRINTI(x); // ������ ��������� �����
		scanf("%d", &y);
		PRINTI(y);
		scanf("%d", &z);
		PRINTI(z);
		xy3=(x*STR(y));
		PRINTI(xy3);
		xpz=(x+z);
		PRINTI(xpz);
		puts("rezult :"); printf("MIN""=%f\n", (float)SQR(MIN_SQUARE(x, y, z)));

#else // ���������� ���� ������� ��������, ���� N >= 10
		{
			puts("Input 3 integer numbers");
			scanf("%d", &x);// �������� �����
			PRINTI(x); // ������ ��������� �����
			scanf("%d", &y);
			PRINTI(y);
			scanf("%d", &z);
			PRINTI(z);
			xmyz = (x - y * z);
			PRINTI(xmyz);
			xypz = (x * y + z);
			PRINTI(xypz);

			puts("rezult :"); printf("MAX""=%f\n", (float)MAX(x,y,z));
			
		}
#endif // ���������� ����� ������ ���������
		puts("Repeat? y /n "); ch = _getch();
	} while (ch == 'y');
}