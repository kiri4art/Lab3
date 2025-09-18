#include <locale.h>
#include <stdio.h>
#define D 2.54
#define F 2.32166
int dym;
float result;
void main()
{
	setlocale(LC_ALL, "RUS");
	puts("Введите число дюймов:");
	scanf("%d", &dym);
	result = D * dym;//для испанского дюйма подставить F вместо D
	printf("%d дюймов - это %.1f см", dym, result);
}