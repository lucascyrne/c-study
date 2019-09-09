#include <stdio.h>

int main() {
    int i = 3, j = 5;
    int *p, *q;
    p = &i;
    q = &j;
    printf("output: %d %d %d\n", *p - *q, **&p, 3*-*p/(*q) + 7);
    printf("Equacao: '*p = 3 e *q = 5: *p - *q, **&p, 3*-*p/(*q) + 7'");
    printf("\nValor de '3*-*p': %d", 3*-*p);
}