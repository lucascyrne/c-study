#include <stdio.h>

int main() {

    int m, n, p, q, c, d, k, sum = 0;
        int first[10][10], second[10][10], multiply[10][10];

        printf("Numero de linhas e colunas da matriz A\n");
        scanf("%d%d", &m, &n);

        printf("Enter number of rows and columns of second matrix\n");
	scanf("%d%d", &p, &q);

        if(n!=p) {
                printf("Não é possível multiplicar essas matrizes.");
        } else {
                
                printf("Digite os elementos da matriz A: ");
                for (c=0; c<m; c++) {
                        for (d=0; d<n; d++) {
                                scanf("%d", &first[c][d]);
                        }
                                
                }
                printf("Digite os elementos da matriz B: ");
                for (c=0; c<p; c++) {
                        for (d = 0; d < n; d++) {
                                scanf("%d", &second[c][d]);
                        }
                }

                for (c = 0;c < m; c++) {
                        for (d = 0;d < q; d++) {
                                for (k = 0; k < p; k++) {
                                        sum += first[c][k] * second[k][d];
                                }
                                multiply[c][d];
                                sum = 0;
                        }
                }

                printf("Produto das matrizes: \n");
                for (c = 0; c < m; c++) {
                        for (d = 0; d < q; d++) {
                                printf("%d\t", multiply[c][d]);
                        }
                        printf("\n");
                }

        }

        return 0;

}