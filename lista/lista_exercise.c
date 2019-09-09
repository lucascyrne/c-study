#include <stdio.h>
#include <stdlib.h>

typedef struct pessoas 
    {
        int * inicio;
        int * fim;
        struct pessoas *node;

    }link;

int main() {

    // DECLARAÇÃO
    
    link *anterior, * inicial, *proximo, *auxiliar;
    void *volta;
    int resp, i, rm, rm_int;

    printf("\nanterior: %p\n", anterior);
    inicial = (link *)malloc(sizeof(link)); // ERRO OUTPUT: 0x55ccf60f7280
    printf("(link *)malloc(sizeof(link)) = %p\n", (link*)malloc(sizeof(link)));
    printf("inicial: %p\n", inicial);
    printf("proximo: %p\n", proximo);
    printf("auxiliar: %p\n", auxiliar); 

    // ANTIBUG CONDITIONAL

    if (inicial == NULL)
        exit(1);

    proximo = inicial;
    printf("(proximo = inicial) = %p\n\n", inicial);

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &resp);
    printf("5 100 9 81 70 33 2 1000\n");
    for(i=0;i<resp;i++)
    {   
        scanf("%d", &proximo->id);
        printf("\nproximo->id = %d", proximo->id);
        proximo->node = (link *)malloc(sizeof(link));
        printf("\nproximo->node = %p", proximo->node);
        proximo = proximo->node;
        printf("\nproximo = %p\n", proximo);
    }
    printf("\n");
    proximo->node = NULL;
    proximo = inicial;
    printf("(proximo = inicial) = %p\n", proximo);
    
    // PRINTAR LISTA
    
    while(proximo != NULL)
    {
        printf("%d ", proximo->id);
        proximo = proximo->node;
    }
    return 0;
}