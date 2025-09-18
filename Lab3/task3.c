#include <locale.h>
#include <stdio.h>

int a, b;
void main()
{
	setlocale(LC_ALL, "RUS");
	puts("¬ведите два числа через пробел:");
	scanf("%d %d", &a, &b);
	printf("___________________\n");
	printf("| a*b | a+b | a-b |\n");
	printf("___________________\n");
	printf("| %d*%d | %d+%d | %d-%d |\n", a, b, a, b, a, b);
	printf("___________________\n");
	printf("| %d  |  %d  | %d  |\n", a * b, a + b, a - b);
}