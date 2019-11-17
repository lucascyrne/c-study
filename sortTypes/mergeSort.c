#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void mergeSort(int a[], int b[], int p1, int p2);
void merge(int a[], int b[], int inicio, int meio, int fim);

int main() {
    int a[40000], b[40000];
    int n = sizeof(a)/sizeof(a[0]);
    clock_t time;
    double t_time;
    srand(0);

    printf("\n");

    printf("\n\tArray: ");
    for(int i = 0; i < 40000; i++) {
        a[i] = rand() % 50;
        printf("%d ", a[i]);
    }

    time = clock();

    printf("\n");
    mergeSort(a, b, 0, n);
    printf("\n");

    printf("\n\tArray Ordenada: ");

    for(int i = 0; i < n; i++) 
        printf("%d ", a[i]);

    time = clock() - time;

    t_time = ((double)time) / CLOCKS_PER_SEC;
    printf("\n\tTempo de execucao: %.3lf segundos\n", t_time);

    printf("\n");

    return 0;

}

void mergeSort(int a[], int b[], int inicio, int fim) {

    int meio;

    if(inicio < fim) {
        meio = (inicio + fim) / 2;
        mergeSort(a, b, inicio, meio);
        mergeSort(a, b, meio+1, fim);
        merge(a, b, inicio, meio, fim);
    } else {
        return;
    }

}

void merge(int a[], int b[], int inicio, int meio, int fim) {

    int p1, p2, i;

    for(p1 = inicio, p2 = meio + 1, i = inicio; p1 <= meio && p2 <= fim; i++) {
        if(a[p1] <= a[p2]) {
            b[i] = a[p1++];
            // printf("\n\tb[i] = a[p1++]: %d", b[i]);
            // printf("\n\ta[p1] = %d", a[p1]);
            // printf("\n\ta[p1++] = %d", a[p1++]);
            // printf("\n\tb[i] = %d", b[i]);
        } 
        else  {
            b[i] = a[p2++];
            // printf("\n\tb[i] = a[p2++]: %d", b[i]);
            // printf("\n\ta[p2] = %d", a[p2]);
            // printf("\n\ta[p2++] = %d", a[p2++]);
            // printf("\n\tb[i] = %d", b[i]);
        }
    }
    // printf("\n");

    while(p1 <= meio)
        b[i++] = a[p1++];

    while(p2 <= fim)
        b[i++] = a[p2++];

    for(i = inicio; i <= fim; i++)
        a[i] = b[i];

}
