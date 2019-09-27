#include<stdio.h>


char funcaoUm() {
        printf("Mensagem 1");
}

char funcaoDois() {
        printf("Mensagem 2");
}

char funcaoTres() {
        printf("Mensagem 3");
}

char funcaoQuatro() {
        printf("Mensagem 4");
}

char funcaoCinco() {
        printf("Mensagem 5");
}


void main() {

        char(*funcoes[4]) = {funcaoUm, funcaoDois, funcaoTres, funcaoQuatro, funcaoCinco})

        printf("Digite um numero de 1 a 5: ");
        scanf("%i", int resp);

        if(resp == 1) {
                funcoes[0];
        } else if(resp == 2) {
                funcoes[1];
        } else if(resp == 3) {
                funcoes[2];
        } else if(resp == 4) {
                funcoes[3];
        } else if(resp == 5) {
                funcoes[4];
        } else {
                printf("Resposta inválida, tente novamente");
                break;
        }


}