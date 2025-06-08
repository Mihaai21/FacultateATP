#include <stdio.h>
int solutie[20];
float v[20], suma;  //500 200 100 50 20 10 5 1 05 010 001
int citire()
{
	FILE* f;
	fopen_s(&f, "TextFile2.txt", "r");
	if (f != NULL)
	{
		fscanf_s(f, "%f", &suma);
		for (int i = 0; i < 11; i++)
			fscanf_s(f, "%f", &v[i]);
	}
	else
		return 0;
}


void solutie_bancnote(float v[], float suma, int solutie[], int k)
{
	if (suma != 0)
	{
		if (v[k] <= suma)
		{
			solutie[k]++;
			solutie_bancnote(v, float(suma - v[k]), solutie, k);
		}
		else
			solutie_bancnote(v, suma, solutie, k + 1);
	}
	else
		return;
}


void main() {
	citire();
	printf("Suma: %4.2f \n", suma);
	for (int i = 0; i < 11; i++)
		printf("v[%d] = %4.2f \n", i + 1, v[i]);
	solutie_bancnote(v, suma, solutie, 0);
	int S = 0;
	for (int i = 0; i < 11; i++)
		S = S + solutie[i];
	printf("Suma a fost achtiata cu un numar de %d bancnote si monede!", S);
}













