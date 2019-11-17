#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int partition(int a[], int low, int high);
void quickSort(int a[], int low, int high);
void swap(int *n1, int *n2);

int main() {

    int a[10];
    clock_t time, t_time;
    int n = sizeof(a)/sizeof(a[0]);
    srand(0);

    printf("Array: \n");
    for(int i = 0; i < 10; i++) {
        a[i] = rand() % 150;
        printf("%d ", a[i]);
    }

    time = clock();

    printf("\n");
    quickSort(a, 0, n-1);

    printf("Array ordenada: \n");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    time = clock() - time;

    t_time = ((double)time) / CLOCKS_PER_SEC;
    printf("Tempo de execucao: %.3lf segundos.\n", t_time);

    printf("\n");

    return 0;

}

void swap(int *n1, int *n2) {

    int aux;

    aux = *n1;
    *n1 = *n2;
    *n2 = aux;

}

int partition(int a[], int low, int high) {
    
    int pivot = a[high];
    int i = (low - 1);

    for(int j = low; j <= high - 1; j++) {
        if(a[j] < pivot) {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[high]);
    return (i + 1);
}

void quickSort(int a[], int low, int high) {

    if(low < high) {
        int pi = partition(a, low, high);

        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }

}


