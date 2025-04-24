#include <stdio.h>
void n_cu_zero(unsigned int n, unsigned int *nr_de_zero ) {
	int cifra = 0;
	if (n == 0) {
		*nr_de_zero += 1;
		return;
	}
	do {
		cifra = n % 10;
		if (cifra == 0) {
			*nr_de_zero += 1;
		}
		n = n / 10;
	} while (n != 0);
}


void main() {
	unsigned int n, nr_de_zero = 0;
	printf("Introduceti numarul pe care vreti sa-l verificati: "); scanf_s("%d", &n);
	n_cu_zero(n, &nr_de_zero);
	printf("Numarul de '0' pe care il are numarul introdus este de %d zerouri", nr_de_zero);
}
