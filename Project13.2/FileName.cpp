#pragma once
/*
 lab_13_2.
 Обчислити площу круга, знайти максимум з двох чисел, використовуючи
 макроси піднесення до квадрата, виведення результатів, знаходження
 максимального значення. За допомогою директив умовної компіляції
 активізувати різні частини програми.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define SQR(x) (x)*(x) // макрос з параметром – визначення квадрата числа
// макрос визначення найбільшого з двох чисел
#define STR(x) (x)*(x)*(x) // макрос з параметром – визначення куба числа
// макрос визначення найбільшого з двох чисел
#define N 6

#define MIN_SQUARE(x, y, z) ((x * STR(y)) < ((x) + (z)) ? (x * STR(y)) : ((x) + (z)))
#define MAX(x, y, z) ((x - y * z) > (x * y + z) ? (x - y * z) : (x * y + z))


#define PRINTI(w) puts("control output"); \
 printf(#w"=%d\n",w)
 // використовується символ продовження макроса '\'
// символ '#' використовується для об’єднання рядків
 // виведення повідомлення та значення дійсного числа
#define PRINTR(w) puts ("rezult :"); \
 printf (#w"=%f\n",(float)w)


int main()
{
	puts("Lab 13.2. Using macros and preprocessing directive");
	int x, y, z, 
		xy3,
		xpz,
		xmyz,
		xypz;  // змінні для розрахунків
		
		
	char ch; // відповідь чи продовжувати виконання програми
	
	do
	{
#if (N > 5) // якщо умова істинна,
		// то шукаємо максимум з трьох чисел
		
		puts("Input 3 integer numbers");
		scanf("%d", &x);// введення числа
		PRINTI(x); // макрос виведення числа
		scanf("%d", &y);
		PRINTI(y);
		scanf("%d", &z);
		PRINTI(z);
		xy3=(x*STR(y));
		PRINTI(xy3);
		xpz=(x+z);
		PRINTI(xpz);
		puts("rezult :"); printf("MIN""=%f\n", (float)SQR(MIN_SQUARE(x, y, z)));

#else // компілювати іншу частину програми, якщо N >= 10
		{
			puts("Input 3 integer numbers");
			scanf("%d", &x);// введення числа
			PRINTI(x); // макрос виведення числа
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
#endif // завершення блоку умовної компіляції
		puts("Repeat? y /n "); ch = _getch();
	} while (ch == 'y');
}