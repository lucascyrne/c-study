#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *elem1, int *elem2);
void exibeVetor(int gVetor[], int n);
int selectSort(int gVetor[], int n);

void main () 
{
    int gVetor[40000];
    int size = sizeof(gVetor) / sizeof(gVetor[0]);
    clock_t time;
    double t_time;
    srand(0);

    for( int i = 0; i < 40000; i++)
        gVetor[i] = rand();

    time = clock();

    selectSort(gVetor, size);
    printf("\nArray Ordenada: \n");
    exibeVetor(gVetor, size);

    time = clock() - time;
    printf("\n");

    t_time = ((double)time) / CLOCKS_PER_SEC;
    printf("Tempo de Execucaoo: %.3lf segundos.\n", t_time);
}

int selectSort(int gVetor[], int size) {
    int i, j, min;

    for(i = 0; i < size-1; i++) 
    {
        min = i;
        for(j = i + 1; j < size; j++) 
            if(gVetor[j] < gVetor[min])
                min = j;
        swap(&gVetor[min], &gVetor[i]);
    }
        
}

void exibeVetor(int gVetor[], int size) 
{
    for(int i = 0; i < 40000; i++)
        printf("%d ", gVetor[i]);
    printf("\n");
}

void swap(int *elem1, int *elem2) 
{
    int aux = *elem1;
    *elem1 = *elem2;
    *elem2 = aux;
}