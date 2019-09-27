#include<stdio.h>
#include<stdlib.h>


typedef struct Folha {
        struct Folha *direita;
        struct Folha *esquerda;
        struct Folha *pai;        
        int data;
        int altura;
}Leaf;


void *createTree(int new_data, Leaf *esq, Leaf *dir, Leaf *Raiz);
void *growLeaves(int new_data, Leaf *Tree);
int dataget();

void main() { 
        int new_data, resp;
        Leaf *esq;
        Leaf *dir;
        Leaf *Raiz, *Tree;

        new_data = dataget();
        if(new_data > 100) {
                printf("Wrong value, choose another");
                return;

        } else {
                createTree(new_data, esq, dir, Raiz);
        }
        printf("Deseja continuar? S / N");
        scanf("%i", &resp);
        if(resp == 0) {
                printf("Fim da árvore");
                return;
        } else {
                new_data = dataget();
                growLeaves(new_data, Tree);
        }

        
        return;
}

int dataget() {
        int new_data;

        printf("Create new tree?");
        printf("\nPick a value < 100: ");
        scanf("%i", &new_data);

        return new_data;
}

void *createTree(int new_data, Leaf *esq, Leaf *dir, Leaf *Raiz) {

        Raiz = (Leaf *)malloc(sizeof(Leaf));
        Raiz->data = new_data;
        esq = (Leaf *)malloc(sizeof(Leaf));
        Raiz->esquerda = esq;
        dir = (Leaf *)malloc(sizeof(Leaf));
        Raiz->direita = dir;
        esq->pai = Raiz;
        dir->pai = Raiz;

        return(Raiz);
}

void *growLeaves(int new_data, Leaf *Tree) {

        if(Tree == NULL) {
                Tree = createTree(new_data, NULL, NULL, NULL);
        } else {
                if(new_data <= Tree->data) {
                        Tree->esquerda = growLeaves(new_data, Tree->esquerda);
                        Tree->esquerda->pai = Tree;
                } else {
                        Tree->direita = growLeaves(new_data, Tree->direita);
                        Tree->direita->pai = Tree;
                }
        }

        return(Tree);
}