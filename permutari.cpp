#include <stdio.h>
int n, v[100];
int validare(int k)
{
	int i;
	for (i = 1; i <= k - 1; i++)
		if (v[k] == v[i])
			return 0;
	return 1;
}
int solutie(int k)
{
	if (k == n)
		return 1;
	return 0;
}

void afisare(int k)
{
	for (int i = 1; i <= k; i++)
			printf_s("%d", v[i]);
	printf_s("\n");
}

void bk(int k)
{
	for (int i = 1; i <= n; i++)
	{
		v[k] = i;
		if (validare(k) == 1)
		{
			if (solutie(k) == 1)
				afisare(k);
			else bk(k + 1);
		}
		
	}
}

void main()
{
	printf_s("introduceti n: ");
	scanf_s("%d", &n);
	bk(1);
}

