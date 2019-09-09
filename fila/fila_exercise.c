#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef int TIPOCHAVE;

typedef struct dado {
    TIPOCHAVE chave;
    //outros campos...
} REGISTRO;

typedef struct aux {
    REGISTRO reg;
    struct aux* prox;
} ELEMENTO, * PONT;

typedef struct fileira{
    PONT inicio;
    PONT fim;
}FILA;

void inicializarFila(FILA* f) {
    f->inicio = NULL;
    f->fim = NULL;
}

int tamanho(FILA* f) {
    ELEMENTO * end = f->inicio;
    int tam = 0;
    while(end != NULL) {
        tam++;
        end = end->prox;
    }
    return tam;
}

void exibirFila(FILA* f) {
    PONT end = f->inicio;
    printf("Fila: \"");
    while(end != NULL) {
        printf("%i ", end->reg.chave);
        end = end->prox;
    }
    printf("\"\n");
}

int inserirNaFila(FILA* f, REGISTRO* reg) {
    PONT novo = (PONT)malloc(sizeof(ELEMENTO));
    novo->reg = reg;
    novo->prox = NULL;
    if(f->inicio==NULL) f->inicio=novo;
    else f->fim->prox = novo;
    f->fim = novo;
    return 1;
}

int excluirDaFila(FILA* f, REGISTRO* reg) {
    if(f->inicio==NULL) return 0;
    *reg = f->inicio->reg;
    PONT apagar = f->inicio;
    f->inicio = f->inicio->prox;
    free(apagar);
    if(f->inicio == NULL) f->fim = NULL;
    return 0;
}

int main() {
    FILA f;
    int resp, id;
    inicializarFila(&f);
    scanf("%d", &resp);
    for(int i=0;i<resp;i++) {
        scanf("%d", &id);
        inserirNaFila(&f, id);
    }
    exibirFila(&f);


    getchar();
    return 0;
}