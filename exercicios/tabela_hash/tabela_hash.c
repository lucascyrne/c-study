#include <stdio.h>

struct pass {
        int value;
        int key;
};
void display(struct pass[], int M);
int main() {

    int i, j, k, M, C, casos;

    printf("Digite a quantidade de casos: ");
    scanf("%i", &casos);

    for (i=0;i<casos;i++) {
        printf("Digite M e C: ");
        scanf("%d %d", &M, &C);
    
    struct pass hash_table[M];

        for(j=0;j<M;j++) {
            for(k=0;k<C;k++){
                hash_table[C % M].value = C;
                hash_table[C % M].key = C % M;
            }
            printf("\n");
            display(hash_table, M);
            int a = 0;
        };
    };  

};

void display(struct pass ar[], int M) {

    int i;

    printf("Valor\tChave\n");
    for(i=0;i<M;i++) {
        printf("%d\t%d\n", ar[i].value, ar[i].key);
    };


};

