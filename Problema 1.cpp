#include <stdio.h>
void vector_par(unsigned int v, unsigned int * v_par, unsigned int pozitie) {
	int cifra;
	if (v == 0)
		return;
	while (v > 0){
		cifra = v % 10;
		if (cifra % 2 == 0) {
			*v_par = *v_par + cifra * pozitie;
			pozitie *= 10;
		}
		v = v / 10;
	} 
}



void main() {
	unsigned int v, pozitie;
	unsigned int v_par = 0;
	printf("Introduceti numarul pe care vreti sa-l transformati: "); scanf_s("%d", &v);
	printf("Numarul initial a fost %d ! \n", v);
	vector_par(v, &v_par, 1);
	printf("Numarul final este %d ! \n", v_par);

}