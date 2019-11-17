#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void exibeVetor(int gVetor[], int n);
int insertSort(int gVetor[], int n);

void main (void)
{
    int gVetor[40000];
    int n = sizeof(gVetor)/sizeof(gVetor[0]);
    clock_t time;
    double t_time;
    srand(0);

    for(int i = 0; i < 40000; i++)
        gVetor[i] = rand();

    time = clock();

    insertSort(gVetor, n);
    printf("\nArray Ordenada: \n");
    exibeVetor(gVetor, n);

    time = clock() - time;
    printf("\n");

    t_time = ((double)time) / CLOCKS_PER_SEC;
    printf("Tempo de execucao: %.3lf segundos\n", t_time);
          
}


int insertSort(int gVetor[], int n)
{   
    int i, j, key;
    
    for (i = 1; i < n; i++) 
    {
        key = gVetor[i];
        j = i - 1;
        while(j >= 0 && gVetor[j] > key) 
        {
            gVetor[j + 1] = gVetor[j];
            j = j - 1;
        }
        gVetor[j + 1] = key;
    }
}


void exibeVetor(int gVetor[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ",gVetor[i]);
    printf("\n");
}

