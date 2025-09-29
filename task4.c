#include <locale.h>
#include <stdio.h>
#define G 6,67/100000000000

float res;
int m1, m2, r;

void main()
{
	setlocale(LC_ALL, "RUS");
	puts("Введите массу первого тела (кг):");
	scanf("%d", &m1);
	puts("Введите массу второго тела (кг):");
	scanf("%d", &m2);
	puts("Введите расстояние (м):");
	scanf("%d", &r);
	res = G * ((m1 * m2) / (r * r));
	printf("Сила притяжения между двумя телами массой %d кг и %d кг соответственно, находящихся на расстоянии %d м друг от друга равна:\n%.2f Н", m1, m2, r, res);
}