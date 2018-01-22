#include "stdio.h"
#include "math.h"

#define _CRT_SECURE_NO_WARNINGS

int factorial(int n);

int main()
{
	int a[10] = { 5, 4, 3, 2, 1, 10, 9, 8, 7, 6 }; // объявляем массив из n элементов

	printf("Исходный массив: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}

	printf("\n");

	int A = 0, B = 0; // инициализация диапазона

	printf("Введите A: ");
	scanf("%d", &A);
	printf("Введите B: ");
	scanf("%d", &B);

	int amount = 0; // cчетчик для подсчета количества элементов в диапазоне

	for (int i = 0; i < 10; i++)
	{
		if (a[i] == A)
		{
			while (a[i] != B && i < 10)// подчситываем элементы, пока не дошли до второй границы
			{
				i++;
				amount++;
			}
			amount++;
			break;
		}
	}

	printf("Количество элементов, лежащих в интервале от %d до %d = %d\n", A, B, amount);

	int sum = 0; // переменная для подсчета суммы элементов после максимального
	int max = 0; // временная переменная для подсчета макс элемента
	int max_index = 0; // переменная для запоминания индекса максимального элемента
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
		printf("Максимальный элемент является последним в массиве\n");
	}
	else {
		for (int i = max_index + 1; i < 10; i++)
		{
			sum += a[i]; // считаем сумму
		}

		printf("Максимальный элемент = %d. Сумма элементов после максимального = %d\n", max, sum);
	}
