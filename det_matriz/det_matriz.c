#include <stdio.h>

int main(void) {

    int matriz[3][3],i,j, det;

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("valor de [%i][%i] ?\n", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("%d", matriz[i][j]);
            printf("\t");
        }
        printf("\n");
    }

    printf("\n");

    printf("Determinante da matriz: ");

    det = (matriz[0][0] * matriz[1][1] * matriz[2][2] + matriz[0][1] * matriz[1][2] * matriz[2][0] + matriz[0][2] * matriz[1][0] * matriz[2][1]) - (matriz[0][0] * matriz[1][2] * matriz[2][1] + matriz[0][1] * matriz[1][0] * matriz[2][2] + matriz[0][2] * matriz[1][1] * matriz[2][0]);

    printf("%i\n", det);

    getchar();
    return 0;

}