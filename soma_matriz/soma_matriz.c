#include<stdio.h>
#include<stdlib.h>

int main() {

	int ordem, i, j, linha = 0, coluna = 0;
	int matrizA[10][10], matrizB[10][10], matrizSoma[10][10];
	
	printf("Digite o tamanho da ordem (até 10): ");
	scanf("%d", &ordem);
	printf("\n");
	for(i = 0; i < ordem; i++) {
		for(j = 0; j < ordem; j++) {
			printf("insira um valor em matrizA[%d][%d]: ", linha, coluna++);
			scanf("%d", &matrizA[i][j]);
		}
		coluna = 0;
		linha++;
	}

	linha = 0, coluna = 0;

	for(i = 0; i < ordem; i++) {
		for(j = 0; j < ordem; j++) {
			printf("insira um valor em matrizB[%d][%d]: ", linha, coluna++);
			scanf("%d", &matrizB[i][j]);
		}
		coluna = 0;
		linha++;
	}

	system("clear");

	printf("\n\nOs elementos da matriz A sao: \n");
	for(i = 0; i < ordem; i++) {
		for(j = 0; j < ordem; j++) {
			printf("%d", matrizA[i][j]);
			printf("\t");
		}
		printf("\n");
	}

	printf("\n\nOs elementos da matriz B sao: \n");
	for(i = 0; i < ordem; i++) {
		for(j = 0; j < ordem; j++) {
			printf("%d", matrizB[i][j]);
			printf("\t");
		}
		printf("\n");
	}

	for(i = 0; i < ordem; i++) {
		for(j = 0; j < ordem; j++) {
			matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
		}
	}

	printf("\n\nO resultado da soma entre a Matriz A e B é: \n");
	for(i = 0; i < ordem; i++) {
		for(j = 0; j < ordem; j++) {
			printf("%d", matrizSoma[i][j]);
			printf("\t");
		}
		printf("\n");
	}
}