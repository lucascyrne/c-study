#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data, altura, index, pl, pr;
    struct node *left, *right;
}leaf;

int altura(leaf *raiz);

int max(int altRight, int altLeft);

int atualizaAltura(leaf *raiz);

leaf *rotacaoSimplesDireita(leaf *raiz);

leaf *rotacaoSimplesEsquerda(leaf *raiz);

int balanceTree(leaf *raiz);

leaf *balance(leaf *raiz);

leaf *createTree(int data, int index);

leaf *insertLeaf(leaf *raiz, int data, int index);

void searchLeaf(leaf *raiz, int data);

int main() {

    leaf *raiz = NULL;

    int i, c, q, k;
    scanf("%d", &c);

    for(i = 0; i < c; i++) {
        scanf("%d %d", &q, &k);
        if(q == 1) {
            raiz = insertLeaf(raiz, k, 1);
        } else {
            searchLeaf(raiz, k);
        }
    }
}  

int altura(leaf *raiz) {
    
    if(raiz == NULL) {
        return 0;
    } else {
        return raiz->altura;
    }
}

int max(int altRight, int altLeft) {
    if(altRight > altLeft) {
        return altRight;
    } else {
        return altLeft;
    }
}

int atualizaAltura(leaf *raiz) {
    if(raiz != NULL) {
        raiz->altura = max(altura(raiz->left), altura(raiz->right)) + 1;
    }
}

leaf *rotacaoSimplesDireita(leaf *raiz) {
    leaf *aux;

    aux = raiz->left;
    raiz->left = aux->right;
    aux->right = raiz;
    atualizaAltura(raiz);
    atualizaAltura(aux);
    aux->index += raiz->pl;
    aux->pr += raiz->pl;
    raiz->pr += aux->pr;
    aux->pr = 0;

    return aux;
}

leaf *rotacaoSimplesEsquerda(leaf *raiz) {
    leaf *aux;

    aux = raiz->right;
    raiz->right = aux->left;
    aux->left = raiz;
    atualizaAltura(raiz);
    atualizaAltura(aux);
    aux->index += raiz->pr;
    aux->pr += raiz->pr;
    raiz->pr += aux->pl;
    aux->pl = 0;

    return aux;
}

int balanceTree(leaf *raiz) {
    if(raiz == NULL) {
        return 0;
    } else {
        return altura(raiz->left) - altura(raiz->right);
    }
}

leaf *balance(leaf *raiz) {
    atualizaAltura(raiz);
    int b1 = balanceTree(raiz);

    if(b1 < -1) {
        if(balanceTree(raiz->right) > 1) {
            raiz->right = rotacaoSimplesDireita(raiz->right);
            return rotacaoSimplesEsquerda(raiz);
        }
    } else if(b1 > 1) {
        if(balanceTree(raiz->left) < -1) {
            raiz->left = rotacaoSimplesEsquerda(raiz->left);
            return rotacaoSimplesDireita(raiz);
        }
    }
    return raiz;
}

leaf *createTree(int data, int index) {
    leaf *temp = (leaf *)malloc(sizeof(leaf));

    temp->data = data;
    temp->altura = 1;
    temp->index = index;
    temp->pr = temp->pl = 0;
    temp->right = temp->left = NULL;

    return temp;
}

leaf *insertLeaf(leaf *raiz, int data, int index) {
    if(raiz == NULL) {
        return createTree(data, index);
    } else if(data < raiz->data) {
        raiz->index += 1;
        raiz->pr += 1;

        if(raiz->left != NULL) {
            raiz->left = insertLeaf(raiz->left, data, index);
        } else {
            raiz->left = insertLeaf(raiz->left, data, raiz->index - 1);
            raiz->pl = 0;
        }
    } else {
       if(raiz->right != NULL) {
           raiz->right = insertLeaf(raiz->right, data, index);
       } else {
           raiz->right = insertLeaf(raiz->right, data, raiz->index + 1);
           raiz->pr = 0;
       }
    }

    return balance(raiz);
}

void searchLeaf(leaf *raiz, int data) {
    leaf *i = raiz;

    while(i != NULL) {
        if(data == i->data) {
            printf("%d\n", i->index);
            return;
        } else if(data < i->data) {
            if(i->pl) {
                if(i->left != NULL) {
                    i->left->index += i->pl;
                    i->left->pl += i->pl;
                    i->left->pr += i->pl;
                }
                i->pl = 0;
            }
            i = i->left;
        } else {
            if(i->pr) {
                if(i->right != NULL) {
                    i->right->index += i->pr;
                    i->right->pl += i->pr;
                    i->right->pr += i->pr;
                }
                i->pr = 0;
            }
            i = i->right;
        }
    }
    printf("Data tidak ada\n");
}




