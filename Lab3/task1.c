#include <locale.h>
#include <stdio.h>

int num, a, b;

void onenumber()
{
	setlocale(LC_ALL, "RUS");
	puts("Ввести число");
	scanf("%d", &num);
	printf("Введено число %d\n", num);

}

void twonumbers()
{
	setlocale(LC_ALL, "RUS");
	puts("\nВвести 2 числа (через пробел)");
	scanf("%d %d", &a, &b);
	printf("Сумма: %d\nРазность: %d\nПроизведение: %d\nЧастное: %.2f\nОстаток от деления нацело: %d\n", a + b, a - b, a * b, (float)a / (float)b, a % b);
}

void main()
{
	onenumber();
	getchar();
	twonumbers();
	getchar();
}