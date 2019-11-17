#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *elem1, int *elem2);
void exibeVetor(int gVetor[], int n);
int bubbleSort(int gVetor[], int n);

void main ()
{
    int gVetor[40000];
    int n = sizeof(gVetor)/sizeof(gVetor[0]);
    clock_t time;
    double t_time;
    srand(0);

    for(int i = 0; i < 40000; i++)
        gVetor[i] = rand();

    time = clock();    

    bubbleSort(gVetor, n);
    printf("\nArray ordenada: \n");
    exibeVetor(gVetor, n);

    time = clock() - time; 
	printf("\n");

	t_time = ((double)time) / CLOCKS_PER_SEC;
    printf("Tempo de execucao: %.3lf segundos\n", t_time);
}   

int bubbleSort(int gVetor[], int n) 
{
    int i, j;
    for(i = 0; i < n-1; i++)
        for(j = 0; j < n-i-1; j++)
            if(gVetor[j] > gVetor[j+1])
                swap(&gVetor[j], &gVetor[j+1]);
}

void exibeVetor(int gVetor[], int n) // imprime no terminal o vetor
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", gVetor[i]);
    printf("\n");
}

void swap(int *elem1, int *elem2) // faz a troca entre um vetor e o vetor anterior ao mesmo
{   
    int aux = *elem1;
    *elem1 = *elem2;
    *elem2 = aux;  
}