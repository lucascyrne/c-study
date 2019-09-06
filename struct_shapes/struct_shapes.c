#include <stdio.h>

int user, passo;

char linha() {
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-\n");
}

struct point {
    int x, y;
}p1, p2, p3, p4, p5;

int quadrado() {
    linha();
    printf("Ponto inicial na matriz: ");
    scanf("%i %i", &p1.x, &p1.y);
    passo = p1.x - p1.y;
    if (passo < 0) {
        passo *= (-1);
    }
    p2.x = (p1.x + passo);
    p2.y = (p1.y);
    p3.x = (p1.x + passo);
    p3.y = (p1.y - passo);
    p4.x = (p1.x);
    p4.y = (p1.y - passo);

    printf("Primeiro ponto: (%i,%i)\n", p1.x, p1.y);
    printf("Segundo ponto: (%i,%i)\n", p2.x, p2.y);
    printf("Terceiro ponto: (%i,%i)\n", p3.x, p3.y);
    printf("Quadrado ponto: (%i,%i)\n", p4.x, p4.y);
}

int retangulo() {
    linha();
    printf("Ponto inicial na matriz: ");
    scanf("%i %i", &p1.x, &p1.y);
    passo = p1.x - p1.y;
    if (passo < 0) {
        passo *= (-1);
    }
    p2.x = (p1.x + passo + 1);
    p2.y = (p1.y);
    p3.x = (p1.x + passo + 1);
    p3.y = (p1.y - passo);
    p4.x = (p1.x);
    p4.y = (p1.y - passo);

    printf("Primeiro ponto: (%i,%i)\n", p1.x, p1.y);
    printf("Segundo ponto: (%i,%i)\n", p2.x, p2.y);
    printf("Terceiro ponto: (%i,%i)\n", p3.x, p3.y);
    printf("Quadrado ponto: (%i,%i)\n", p4.x, p4.y);
}

int trapezio() {

}

int triangulo() {

}

int circulo() {

}

int main() {
    printf("\nEscolha uma opcao:\n");
    printf("a) Quadrado\n");
    printf("b) Retangulo\n");
    printf("c) Triangulo\n");
    printf("d) Trapezio\n");
    printf("e) Circulo\n");
    printf("\nEscolha:");
    scanf("%c", &user);

    if (user == 'a') {
        quadrado();
    } else if (user == 'b') {
        retangulo();
    } // falta fazer para triangulo, trapezio e circulo

    getchar();
    return 0;
}