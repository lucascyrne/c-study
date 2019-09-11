#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *p1, *p2;
int res;

char comparaString() {
    int cont = 0, i, j, tamanho1, tamanho2;
    
    tamanho1 = strlen(p1);
    tamanho2 = strlen(p2);

    if(tamanho1 == tamanho2) {
        for(i = 0;i < tamanho1;i++) {
            for(j = 0;j < tamanho2;j++) {
                if(p1[i] == p2[j]) {
                    cont++;
                    p2[j] = 0;
                    break;
                }
            }
        }
        if(cont==tamanho1) {
            return 1;
        } else {
            return 0;
        }
    } else {
        return 0;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    argc = 3;
    p1 = argv[2];
    p2 = argv[3];
    res = comparaString(p1, p2);    
    printf("%i", res);
}