#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Q1();
void Q2();
void Q3();
void Q4();
void Q5();
void Q6();
void Q7();
void Q8();
void Q9();
void Q10();
void Q11();
void Q12();
void Q13();
void main()
{	
	printf("\nQ1:_______________\n");
	Q1();
	 printf("\nQ2:_______________\n");
	Q2();
	 printf("\nQ3:_______________\n");
	Q3();
	 printf("\nQ4:_______________\n");
	Q4();
	 printf("\nQ5:_______________\n");
	Q5();
	 printf("\nQ6:_______________\n");
	Q6();
	 printf("\nQ7:_______________\n");
	Q7();
	 printf("\nQ8:_______________\n");
	Q8();
	 printf("\nQ9:_______________\n");
	Q9();
	 printf("\nQ10:_______________\n");
	Q10();
	 printf("\nQ11:_______________\n");
	Q11();
	 printf("\nQ12:_______________\n");
	Q12();
	printf("\nQ13:_______________\n");
	Q13();
}
void Q1()
{	
	printf("\nA:5\nB:121212121212121\nC:xxxxxxxxxxxxxxx\nD:0 - 15\nE:The purpose of the program is to count the repetitions of a certain result in fifteen different games\nF:repetitions\n===================");
}
void Q2()

{
	int num1 = 0, num2 = 0, sum = 0;
	printf("enter two nambers:\n");	
	scanf("%d%d", &num1, &num2);
	if (num2 < num1)
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}
	for (int i = num1; i <= num2; i++)
	{
		sum += i;
	}
	printf("sum: %d", sum);
}
void Q3()
{
	int list,atro = 0, num, min = 0, max = 0;
	printf("enter nambers of students:\n");
	scanf("%d", &list);	
	printf("ebter ages of student:\n");
	scanf("%d", &min);
	for (int i = 1; i < list; i++)
	{
		scanf("%d", &num);
		int n = num;
		if (num > max)
		{
			max = num;
		}
		if (num < min)
		{
			min = num;
		}
	}

	if (max - min >=3)
	{
		printf("\nclass is etrogen.");
	}
	else
	{
		printf("\nclass is homogen");
	}
}
void Q4()
{
	int list, num, max, max1 = 0, M;
	printf("enter the M nomber\n");
	scanf("%d", &M);
	printf("enter namber of numbers:\n");
	scanf("%d", &list);
	printf("enter numbers:\n");
	scanf("%d", &num);
	max = num;
	scanf("%d", &num);
	max1 = num;
	for (int i = 2; i < list; i++)
	{
		scanf("%d", &num);
		if (num >= max)
		{
			max1 = max;
			max = num;
		}
		else
		{
			if (num > max1)
			{
				max1 = num;
			}
		}
	}
	if (max + max1 > M)
	{
		printf(" the amaunt is biger then M\n");
	}
	else
	{
		printf("the amaunt is smoler then M\n ");
	}
}
void Q5()
{
	printf("\nA: black square\nB: (row_bishop == row_rook)\nC: abs(bishop_row - rook_row) == abs(bishop_col - rook_col)\n======================\n");
}
void Q6()
{
	printf("\nA: NO\nB:Delete Counter_2, and in the second IF define if Counter_1 is biger than 20, candidate number 1 won... \n========================================\n");
	int counter1 = 0, vote, i;
	for (i = 1; i <= 41; i++)
	{
		scanf("%d", &vote);
		if (vote == 1)
			counter1++;
	}
	if (counter1 > 20)
	{
		printf("candidate 1 won!");
	}
	else
	{
		printf("candidate 2 won!");
	}

}
void Q7()
{
	int num, h = 3600, m = 60;
	printf("enter the namber of secends\n");
	scanf("%d", &num);
	int secends = num % m;
	int minit = (num - secends) % h / m;
	int hours = (num - secends - minit) / h;
	printf("time is- %d:%d:%d", hours, minit, secends);

}
void Q8()
{
	printf("\nA: yes both segments perform the same task\n==============================\n");
}
void Q9()
{
	printf("\nA: 3. b , 'c' , B , c\n=====================================\n");
}
void Q10()
{
	int a1, q, n;
	printf("\nEnter a1:\n");
	scanf("%d", &a1);
	printf("\nEnter q:\n");
	scanf("%d", &q);
	printf("\nEnter n:\n");
	scanf("%d", &n);
	
	for (int i = 0, a = a1; i < n; i++, a *= q )
	{
		printf("%d,\n", a);
	}
}
void Q11()
{
	int a = 3, b = 5, c = 15, sum = 0;
	for (int i = 0; a <= 1000; a += 3)
	{
		sum += a;
	}
	for (int i = 0; b < 1000; b += 5)
	{
		sum += b;
	}
	for (int i = 0; c < 1000; c += 15)
	{
		sum -= c;
	}
	printf("%d", sum);
}
void Q12()
{
	int n, sum = 0;
	printf("print number btwin 1 - 18:\n");
	scanf("%d", &n);
	for (int i = 11; i < 99; i++)
	{
		sum = i % 10 + (i - i % 10) / 10;
		if (n == sum)
		{
			printf("%d\n", i);
		}
			
	}
}
void Q13()
{
	int a, b;
	for (a = 10; a < 100; a++)
	{
		for (b = a + 1; b < 100; b++)
		{		
			int aa = a / 10, bb = b % 10;
			if ((a % 10) == (b / 10) && (double)aa / (double)bb == ((double)a / (double)b))
			{
				printf("%d,%d.\n", a, b);
			}

		}
	}
}