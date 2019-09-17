#include<stdio.h>
#include<stdlib.h>

#define COLS 3
#define ROWS 3

void matrixInput(int mat[][COLS]);
void matrixPrint(int mat[][COLS]);
void matrixAdd(int mat1[][COLS], int mat2[][COLS], int res[][COLS]);

int main() {
        int mat1[ROWS][COLS], mat2[ROWS][COLS], res[ROWS][COLS];

        //Input elements in 1st matrix
        printf("Insira os elementos da matriz A de tamanho %dx%d: \n", ROWS, COLS);
        matrixInput(mat1);

        //Input elements in 2st matrix
        printf("Insira os elementos da matriz B de tamanho %dx%d: \n", ROWS, COLS);
        matrixInput(mat2);

        system("clear");

        //Somando matrizes e printando resultado
        matrixAdd(mat1, mat2, res);

        printf("Soma da primeira e segunda matriz: \n");
        matrixPrint(res);

        return 0;
}

/**
 * Function to read input from user and store in matrix.
 * 
 * @mat     Two dimensional integer array to store input.
 */

void matrixInput(int mat[][COLS]) {
        int i, j, linha = 0, coluna = 0;

        for(i = 0; i < ROWS; i++) {
                for(j = 0; j < COLS; j++) {
                        // (*(mat + i) + j) is equal to &mat[i][j]
                        printf("Insira o valor de [%d][%d]: ", linha, coluna++);
                        scanf("%d", (*(mat + i) + j));
                }
                coluna = 0;
                linha++;
        }
        printf("\n");
}

/**
 * Function to print elements of matrix on console.
 * 
 * @mat     Two dimensional integer array to print.
 */

void matrixPrint(int mat[][COLS]) {
        int i, j;

        for(i = 0; i < ROWS; i++) {
                for(j = 0; j < COLS; j++) {
                        // *(*(mat + i) + j) is equal to mat[i][j]
                        printf("%d ", *(*(mat + i) + j));
                        printf("\t");
                }
                printf("\n");
        }
}

/**
 * Function to add two matrices and store their result in given res
 * matrix.
 * 
 * @mat1    First matrix to add.
 * @mat2    Second matrix to add.
 * @res     Resultant matrix to store sum of mat1 and mat2.
 */

void matrixAdd(int mat1[][COLS], int mat2[][COLS], int res[][COLS]) {
        int i, j;

        for(i = 0; i < ROWS; i++) {
                for(j = 0; j < COLS; j++) {
                        // res[i][j] = mat1[i][j] + mat2[i][j]
                        *(*(res + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
                }
        }
}



