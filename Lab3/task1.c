#include <locale.h>
#include <stdio.h>

int num, a, b;

void onenumber()
{
	setlocale(LC_ALL, "RUS");
	puts("������ �����");
	scanf("%d", &num);
	printf("������� ����� %d\n", num);

}

void twonumbers()
{
	setlocale(LC_ALL, "RUS");
	puts("\n������ 2 ����� (����� ������)");
	scanf("%d %d", &a, &b);
	printf("�����: %d\n��������: %d\n������������: %d\n�������: %.2f\n������� �� ������� ������: %d\n", a + b, a - b, a * b, (float)a / (float)b, a % b);
}

void main()
{
	onenumber();
	getchar();
	twonumbers();
	getchar();
}