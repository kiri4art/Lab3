#include <locale.h>
#include <stdio.h>
#define G 6,67/100000000000

float res;
int m1, m2, r;

void main()
{
	setlocale(LC_ALL, "RUS");
	puts("������� ����� ������� ���� (��):");
	scanf("%d", &m1);
	puts("������� ����� ������� ���� (��):");
	scanf("%d", &m2);
	puts("������� ���������� (�):");
	scanf("%d", &r);
	res = G * ((m1 * m2) / (r * r));
	printf("���� ���������� ����� ����� ������ ������ %d �� � %d �� ��������������, ����������� �� ���������� %d � ���� �� ����� �����:\n%.2f �", m1, m2, r, res);
}