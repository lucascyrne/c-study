#include <stdio.h>

int main(void) {
    int *ponteiro, **ponteiroDoPonteiro, valor;
    valor = 50;
    ponteiro = &valor;
    ponteiroDoPonteiro = &ponteiro; //note que a variável realmente já é um ponteiro
//o que está na posição da memória apontada pela posição da memória de ponteiroDoPonteiro
    printf("\n%d", **ponteiroDoPonteiro);
    return 0;
}