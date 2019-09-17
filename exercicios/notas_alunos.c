/* 
Escreva um programa que determina se o aluno foi ou 
não aprovado na disciplina. Não esqueça de considerar 
a situação de segunda chamada e final. Considere que 
uma nota negativa indica que o aluno faltou a avaliação. 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int loop = 1;
    
    while(loop == 1) {

        char user;
        float nota1,nota2,nota3,seg_cha,final;
        printf("Deseja atribuir notas? S/N      PROFESSO(A): ");
        scanf("%c", &user);

        if (user == 'S') {
            printf("Digite a primeira nota: ");
            scanf("%f", &nota1);
            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);
            printf("Digite a terceira nota: ");
            scanf("%f", &nota3);
        } else if (user == 'N') {
            printf("Obrigado por usar o programa.");
            loop = 0;
            break;
        } else {
            printf("Resposta invalida.");
            loop = 0;
            break;
        }

        if (nota1 < 0) {
            nota1 = 0;
        }

        if (nota2 < 0) {
            nota2 = 0;
        }

        if (nota3 < 0) {
            nota3 = 0;
        }

        printf("NOTA 1: %f\n", nota1);

        float soma1 = nota1 + nota2 + nota3;
        float media1 = soma1 / 3;

        printf("MEDIA 1: %f\n", media1);

        if (media1 <= 5) {
            printf("NAO APROVADO ATE SEGUNDA CHAMADA.\n");
            printf("Digite a nota da segunda chamada: ");
            scanf("%f", &seg_cha);
        }

        if (seg_cha < 0) {
            seg_cha = 0;
        }

        float soma2 = media1 + seg_cha;
        float media2 = soma2 / 2;
        printf("MEDIA2: %f\n", media2);
        if (media2 < 5) {
            printf("Digite a nota da final: ");
            scanf("%f", &final);
        } else {
            printf("Parabens, voce foi aprovado!");
            loop = 1;
            break;
        }

        if (final < 0) {
            final = 0;
        }

        float soma3 = media2 + final;
        float media3 = soma3 / 2;

        if (media3 >= 5) {
            printf("Parabens, sua media foi %f e voce foi aprovado!\n", media3);
        } else {
            printf("Sinto muito, voce nao foi aprovado.\n");
        }

        return 0;
    }

    

}