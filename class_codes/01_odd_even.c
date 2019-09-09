#include <stdio.h>

int main() {

		int i;

		printf("Digite um número inteiro e te direi se é par ou ímpar\n");
		scanf("%d", &i);

		if (i%2)
				printf("%d é ímpar!\n", i);
		else if (i)
				printf("%d é par!\n", i);
		else
				printf("%d não é par nem ímpar!\n", i);
		return 0;

}
