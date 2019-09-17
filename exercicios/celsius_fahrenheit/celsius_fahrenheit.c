#include <stdio.h>

int main() {

    int temp;
    float res;
    char user;

    printf("Escolha: \na) Celsius\nb) Fahrenheit\n");
    printf("Opcao: ");
    scanf("%c", &user);
    printf("Digite a temperatura: ");
    scanf("%d", &temp);
    if (user == 'a') {
        printf("Convertendo em Fahrenreit...");
        res = temp * 1.8;
        res = res + 32;
        printf("O resultado e %.2f", res);
    } else if (user == 'b') {
        printf("Convertendo em Celsius...");
        res = temp - 32;
        res = res / 1.8;
        printf("O resultado e %.2f", res);
    } else {
        printf("Comando inválido. Tente novamente.");
    }
    
    return 0;




    

}