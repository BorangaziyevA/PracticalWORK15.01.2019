#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>

void task11()
{
	int A[10] = { 0 };

	for (size_t i = 0; i < 10; i++)
	{
		A[i] = 0 + rand() % 20;
		printf("A[%d] = %d\n", i, A[i]);
	}
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 9; j++)
		{
			if (A[j] = A[j+1])
			{

			}

		}
		
	}
}

void task10()
{
	int A[15] = { 0 };
	int p=-1, q=-1;

	for (size_t i = 0; i < 15; i++)
	{
		A[i] = -10 + rand() % 20;
		printf("A[%d] = %d\n", i, A[i]);
	}
	for (size_t i = 0; i < 15; i++)
	{
		if (A[i] < 0)
		{	
			p = i;
			break;
		}
	}
	for (size_t i = 0; i < 15; i++)
	{
		if (A[i] == 0)
		{
			q = i;
			if (q > 14 || q < -1)
			{
				q = p;
			}
			break;
		}
	}
	if (p != -1 && q != -1)
	{
		for (size_t i = p +1; i < q; i++)
		{
			printf("A[%d] = %d\n", i, A[i]);
		}
	}
}

void task9()
{
	int A[10] = { 0 };
	int count = 0;

	for (size_t i = 0; i < 10; i++)
	{
		A[i] = 0 + rand() % 10;
		printf("A[%d] = %d\n", i, A[i]);
	}

	for (size_t i = 1; i < 10; i++)
	{
		if (A[i-1]<A[i] && A[i]<A[i+1])
		{
			count++;
		}
	}
	printf("\n\n\n\n Count = %d\n", count);
}

void task8()
{
	int A[10] = { 0 };
	int i, sum = 0;

	for (size_t i = 0; i < 10; i++)
	{
		A[i] = -10 + rand() % 50;
		printf("A[%d] = %d\n", i, A[i]);
	}

		for (i = 0; i < 10; i++)
		{
			printf("A[%d] = %d\n", i, A[i]);
			if (A[i]<0)
			{
				break;
			}
			sum = sum + A[i];
		}

	printf("Summa = %d\n", sum);
}

void task7()
{
	int S;
	int A[10] = { 0 };
	int Max = -110;

	for (size_t i = 0; i < 10; i++)
	{
		A[i] = -100 + rand() + 200;
		printf("A[%d] = %d\n", i, A[i]);
	}

	for (size_t i = 0; i < 10; i++)
	{
		if (Max<A[i])
		{
			Max = A[i];
		}

	}

	printf("Chislo = ");
	scanf_s("%d", &S);

	for (size_t i = 0; i < 10; i++)
	{
			
	}
}

void task6()
{
	int A[11] = { 0 };
	int sum = 0;

	for (size_t i = 0; i < 11; i++)
	{
		A[i] = -100 + rand() % 150;
		printf("\n\nA[%d] = %d", i, A[i]);
	}
	printf("\n\n\n\n");
	for (size_t i = 0; i < 11; i++)
	{
		if (A[i]<0 && A[i]%2==-1)
		{
			sum = sum + A[i];
		}
	}

	printf("sum = %d\n\n\n\n", sum);

	for (size_t i = 0; i < 11; i++)
	{
		if (A[i] %3 ==0)
		{
			A[i] = sum;
			
		}
	}
	for (size_t i = 0; i < 11; i++)
	{
		printf("\n\nA[%d] = %d\n", i, A[i]);
	}
}

void task5()
{
	int A[12] = { 0 };
	int x, count = 0;

	for (size_t i = 0; i < 12; i++)
	{
		A[i] = 0 + rand() % 50;
		printf("%d, ", A[i]);
	}

	printf("\n\n\n\n\n\n\n");

	for (size_t i = 1; i < 12; i++)
	{
		for (size_t j = 1; j < 12; j++)
		{
			if (A[j] > A[j-1])
			{
				x = A[j];
				A[j] = A[j - 1];
				A[j - 1] = x;
				count++;
			}
		}

	}
	for (size_t i = 0; i < 12; i++)
	{
		printf("%d, ", A[i]);
	}
	
	printf("\n\n\n Количество перестановok = %d\n", count);
}

void task4()
{
	int Z[16] = { 0 };
	int sumchet = 0;
	int sum3 = 0;

	for (size_t i = 0; i < 16; i++)
	{
		Z[i] = 0 + rand() % 20;
		printf("Z[%d] = %d\n", i, Z[i]);
	}

	for (size_t i = 0; i < 16; i++)
	{
		if (i % 2 == 0)
		{
			sumchet = sumchet + Z[i];
		}

		if (i%3==0)
		{
			sum3 = sum3 + Z[i];
		}
	}
	printf("Summa chetnih = %d\n", sumchet);
	printf("Summa kratnih 3 = %d\n", sum3);

	int A = sumchet - sum3;
	printf("Raznost' = %d\n", A);
}

void task3() 
{
	int X[10] = { 0 }, Y[10] = { 0 };

	int S[10] = { 0 };

	for (size_t i = 0; i < 10; i++)
	{
		X[i] = 0 + rand() % 10;
		printf("\tX[%d] = %d\n", i, X[i]);
		Y[i] = 0 + rand() % 10;
		printf("\tY[%d] = %d\n", i, Y[i]);
	}

	for (size_t i = 0; i < 10; i++)
	{
		if (X[i] == Y[i])
		{
			S[i] = X[i];
		}
	}

	for (size_t i = 0; i < 10; i++)
	{
		printf("\t\tS[%d] = %d\n", i, S[i]);
	}

}

void task2()
{
	int A[17] = { 0 };
	int sum = 0;

	for (size_t i = 0; i < 17; i++)
	{
		A[i] = 10 + rand() % 89;
		printf("A[%d] = %d,  ", i, A[i]);
		sum = sum + A[i];
	}
	printf("Summa = %d\n", sum);
}

void task1()
{
	int A[10] = { 0 };
	int B[10] = { 0 };
	int C[10] = { 0 };

	for (size_t i = 0; i < 10; i++)
	{
		A[i] = 0 + rand() % 20;
		printf("A[%d] = %d\n", i, A[i]);
	}
	for (size_t i = 0; i < 10; i++)
	{
		B[i] = 0 + rand() % 20;
		printf("\tB[%d] = %d\n", i, B[i]);
	}

	for (size_t i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			C[i] = A[i + 1];
		}

		if (i % 2 == 1)
		{
			C[i] = B[i-1];
		}
	}

	for (size_t i = 0; i < 10; i++)
	{
		printf("\t\tC[%d] = %d\n", i, C[i]);
	}
}

void main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	int task;
	int flag;
	do
	{
		system("cls");
		printf("Zadanie:");
		scanf_s("%d", &task);
		switch (task)
		{
		case 1:task1(); break;
		case 2:task2(); break;
		case 3:task3(); break;
		case 4:task4(); break;
		case 5:task5(); break;
		case 6:task6(); break;
		case 7:task7(); break;
		case 8:task8(); break;
		case 9:task9(); break;
		case 10:task10(); break;
		}
		printf("Continue?1/0");
		scanf_s("%d", &flag);

	} while (flag == 1);
}