#include <stdio.h>

int main() {

		int i;

		printf("Digite 0 para porturguês\n");
		printf("Type 1 for english\n");

		scanf("%d", &i);

		if (i == 0)
				printf("Olá Mundo!\n");
		else if  (i == 1)
				printf("Hello World!\n");

		return 0;

}
