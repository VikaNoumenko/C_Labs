// ��� ������� ������ ������������ ������ ������ �������(�������� ����������) � ��� �������� ����� ����
// ������ ������� ������ : � = 20, x = 5. �����: 65.375000

double e = 0;
double summ = 0; // ����� ����
double currentSum = 0; // ������� ���� ����
double x = 0;
int i = 0;

printf("������� ������� �: ");
scanf("%lf", &e);
printf("������� x: ");
scanf("%lf", &x);


while (currentSum < e)
{
	currentSum = pow(-1.0, i)*pow(x, i) / factorial(i);
	if (i % 2 == 0)// ������ ����� ���� �������, �������� ��������
	{
		summ += currentSum;
	}
	else
	{
		summ -= currentSum;
	}
	i++;
}

printf("C���� ���� � ��������� %lf ����� %lf\n", e, summ);

// ������ ������� ������ b = 5, e = 5, x = 0.5. ����� 5.606531.

double b = 0;
double e2 = 0;
double x2 = 0;
double summ2 = 0;
printf("������� �������� b ��� ������� ����");
scanf("%lf", &b);
printf("������� ������� e ��� ������� ����");
scanf("%lf", &e2);
printf("������� �������� x ��� ������� ����");
scanf("%lf", &x2);
currentSum = 0;

while (currentSum < e2)
{
	currentSum = exp(-x2) + b;
	summ2 += currentSum;
}

printf("C���� ���� � ��������� %lf ����� %lf\n", e2, summ2);

getchar();
return 0;
}

int factorial(int n) //����������� ���������� ����������
{
	if (n == 0 || n == 1) return 1;
	return n * factorial(n - 1);
}