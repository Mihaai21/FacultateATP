#include <stdio.h>
void cmmdc(unsigned int x, unsigned int y, unsigned int *rezultat) {
	int mai_mare;
	if (x > y)
		mai_mare = x;
	else
		mai_mare = y;
	mai_mare = mai_mare / 2;
	for (int i = mai_mare; i >= 1; i--) {
		if (x % i == 0 && y % i == 0) {
			*rezultat = i;
			return;
		}
	}
}

void main() {
	unsigned int x, y, rezultat = 0;
	printf("Introdu primul numar: \n"); scanf_s("%d", &x);
	printf("Introdu al doilea nuamr: \n"); scanf_s("%d", &y);
	cmmdc(x, y, &rezultat);
	printf("CMMDC al numerelor %d si %d este %d !", x, y, rezultat);
}