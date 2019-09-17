#include <stdio.h>

int main() {

    int i, num1, num2, num3, menor, maior, meio;
   
    printf("Escolha numeros entre 0 e 1000.\n");
    printf("Escolha o primeiro numero: ");
    scanf("%d", &num1);
    printf("Escolha o segundo numero: ");
    scanf("%d", &num2);
    printf("Escolha o terceiro numero: ");
    scanf("%d", &num3); 

    if(num1<num2 && num1<num3) {
        menor = num1;
        if(num2<num3) {
            meio = num2;
            maior = num3;
        } else {
            meio = num3;
            maior = num2;
        }
    } else if(num1>num2 && num1>num3) {
        maior = num1;
        if(num2>num3) {
            meio = num2;
            menor = num3;
        } else {
            meio = num3;
            menor = num2;
        }
    } 

    printf("\nmenor: %d meio: %d maior: %d", menor, meio, maior);

    return 0;


}