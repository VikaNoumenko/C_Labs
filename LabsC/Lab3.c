#include "stdio.h"
#include "math.h"

#define _CRT_SECURE_NO_WARNINGS

int factorial(int n);

int main()
{
	int a[10] = { 5, 4, 3, 2, 1, 10, 9, 8, 7, 6 }; // ��������� ������ �� n ���������

	printf("�������� ������: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}

	printf("\n");

	int A = 0, B = 0; // ������������� ���������

	printf("������� A: ");
	scanf("%d", &A);
	printf("������� B: ");
	scanf("%d", &B);

	int amount = 0; // c������ ��� �������� ���������� ��������� � ���������

	for (int i = 0; i < 10; i++)
	{
		if (a[i] == A)
		{
			while (a[i] != B && i < 10)// ������������ ��������, ���� �� ����� �� ������ �������
			{
				i++;
				amount++;
			}
			amount++;
			break;
		}
	}

	printf("���������� ���������, ������� � ��������� �� %d �� %d = %d\n", A, B, amount);

	int sum = 0; // ���������� ��� �������� ����� ��������� ����� �������������
	int max = 0; // ��������� ���������� ��� �������� ���� ��������
	int max_index = 0; // ���������� ��� ����������� ������� ������������� ��������
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			max_index = i;
		}
	}

	if (max_index == 9)
	{
		printf("������������ ������� �������� ��������� � �������\n");
	}
	else {
		for (int i = max_index + 1; i < 10; i++)
		{
			sum += a[i]; // ������� �����
		}

		printf("������������ ������� = %d. ����� ��������� ����� ������������� = %d\n", max, sum);
	}
