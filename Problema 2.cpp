#include <stdio.h>

int f(int x) {
    if (x >= 12)
        return x - 1;
    else
        return f(f(x + 2));
}

void main() {
    int x, rezultat;

    printf("Introdu valoarea lui x: ");
    if (scanf_s("%d", &x) != 1) {
        printf("Eroare la citire.\n");
        return;
    }

    rezultat = f(x);

    printf("f(%d) = %d\n", x, rezultat);

    getchar();
}