#include<stdio.h>
#include<stdlib.h>

struct leaf {
        int data;
        struct leaf *left;
        struct leaf *right;
        struct leaf *pai;
};

struct leaf* newLeaf(int data) {
        struct leaf* newLeaf = (struct leaf *)malloc(sizeof(struct leaf));
        newLeaf->data = data;
        newLeaf->left = NULL;
        newLeaf->right = NULL;

        return newLeaf;
};

struct leaf *tree(int data, struct leaf* esq, struct leaf* dir) {
        struct leaf *raiz;

        raiz = (struct leaf *)malloc(sizeof(struct leaf));
        raiz->data = data;
        raiz->left = esq;
        raiz->right = dir;
        esq->pai = raiz;
        dir->pai = raiz;

        return raiz;
}

struct leaf *insert(struct leaf *raiz, int data) {

        if(raiz == NULL) return newLeaf(data);
        if(data < raiz->data) {
                raiz->left = insert(raiz->left, data);
                raiz->left->pai = raiz;
        } else {
                raiz->right = insert(raiz->right, data);
                raiz->right->pai = raiz;
        }

        return raiz;

}

struct leaf *search(struct leaf *raiz, int data) {
        if(raiz == NULL || raiz->data == data) {
                return raiz;
        }

        if(data < raiz->data) {
                return search(raiz->left, data);
        } else {
                return search(raiz->right, data);
        }
}

int preOrd(struct leaf *raiz);



int main() {

        struct leaf *raiz = NULL;
        raiz = insert(raiz, 50);
        insert(raiz, 30);
        insert(raiz, 20);
        insert(raiz, 70);

        preOrd(raiz);

        getchar();
        return 0;

}

int preOrd(struct leaf *raiz) {
        if(raiz != NULL) {
                printf("%i ", raiz->data);
                preOrd(raiz->left);
                preOrd(raiz->right);
        }
};

