#include<stdio.h>
#include<stdlib.h>

typedef struct arvHeap {
    struct arvHeap *left;
    struct arvHeap *right;
    int data;
}tree;

tree *createNode(tree *raiz, int data);
tree *insertNode(tree *raiz, int data);
tree *swapNode(tree *raiz, int data);
int printTree(tree *raiz);

int main() {

    tree *raiz = (tree *)malloc(sizeof(tree));
    int gVetor[16];
    int n = sizeof(gVetor)/sizeof(gVetor[0]);
    srand(0);

    for(int i = 0; i < n; i++) {
        gVetor[i] = rand();
        createNode(raiz, gVetor[i]); // inicializa a árvore Heap
        insertNode(raiz, gVetor[i]); // novo nó será criado e inserido no fim da árvore
        printTree(raiz); // exibe árvore em fdsOrdem
    }

}

int *createNode(tree *raiz, int data) { // Inicializa a árvore Heap

    tree new_node = (tree *)malloc(sizeof(tree));

    new_node->data = data;
    new_node->left = new_node->right = NULL;

    return new_node;    

}

int *insertNode(tree *raiz, int data) { // Inserção de Nó com SWAP
    
    if(raiz == NULL) {
        return createTree(raiz, data);
    } else if(data > raiz->data) {
        return swapNode(raiz, new_node);
    }

}

int *swapNode(tree *raiz, tree *new_node) { // nó será comparado com seu pai, se pai > filho, SWAP

    tree *temp = (tree *)malloc(sizeof(tree));

    temp->data = new_node->data;
    temp->left = new_node->left;
    temp->right = new_node->right;

    new_node->data = raiz->data;
    new_node->left = raiz->left;
    new_node->right = raiz->right;

    raiz->data = temp->data;
    raiz->left = temp->left;
    raiz->right = temp->right;

}

void *printTree(tree *raiz) {

    if(raiz != NULL) {
        printf("%i", raiz->data);
        if(raiz->left) {
            printTree(raiz->left);
        } else {
            printf(raiz->right);
        }
    }

}


