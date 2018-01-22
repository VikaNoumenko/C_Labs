// Для решения второй лабороторной работы введем границу(точность вычислений) е для подсчета суммы ряда
// пример входных данных : е = 20, x = 5. Ответ: 65.375000

double e = 0;
double summ = 0; // сумма ряда
double currentSum = 0; // текущий член ряда
double x = 0;
int i = 0;

printf("Введите границу е: ");
scanf("%lf", &e);
printf("Введите x: ");
scanf("%lf", &x);


while (currentSum < e)
{
	currentSum = pow(-1.0, i)*pow(x, i) / factorial(i);
	if (i % 2 == 0)// четные члены ряда плюсуем, нечетные минусуем
	{
		summ += currentSum;
	}
	else
	{
		summ -= currentSum;
	}
	i++;
}

printf("Cумма ряда с точностью %lf равна %lf\n", e, summ);

// пример входных данных b = 5, e = 5, x = 0.5. Ответ 5.606531.

double b = 0;
double e2 = 0;
double x2 = 0;
double summ2 = 0;
printf("Введите значение b для второго ряда");
scanf("%lf", &b);
printf("Введите границу e для второго ряда");
scanf("%lf", &e2);
printf("Введите значение x для второго ряда");
scanf("%lf", &x2);
currentSum = 0;

while (currentSum < e2)
{
	currentSum = exp(-x2) + b;
	summ2 += currentSum;
}

printf("Cумма ряда с точностью %lf равна %lf\n", e2, summ2);

getchar();
return 0;
}

int factorial(int n) //рекурсивное вычисление факториала
{
	if (n == 0 || n == 1) return 1;
	return n * factorial(n - 1);
}