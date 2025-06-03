#include<stdlib.h>
#include<math.h>
#include<stdio.h>

int nr, v[100];
int validare(int k)
{
	int i;
	for (i = 1; i <= k - 1; i++)
	{
		if (v[i] == v[k] || abs(v[k] - v[i]) == (k - i))
			return 0;
	
	}
	return 1;
}
int solutie(int k)
{
	if (k == nr)
		return 1;
	return 0;

}
void afisare()
{
	int i, j;
	for (i = 1; i <= nr; i++)
	{
		for (j = 1; j <= nr; j++)

			if (v[i] == j)

				printf_s("D ");
			else
				printf_s("- ");

		printf_s("\n");

	}
	printf_s("\n------------------\n");
}
void backtracking(int k)
{
	int i;
	for (i = 1; i <= nr; i++)
	{
		v[k] = i;
		if (validare(k) == 1)
			if (solutie(k) == 1)
				afisare();
			else
				backtracking(k + 1);

	}
}

void main()
{
	printf("introdu nr pentru sah: ");
	scanf_s("%d", &nr);
	backtracking(1);

}