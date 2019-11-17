#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void heapify(int arr[], int n, int i);
void heapSort(int arr[], int n);
void printArray(int arr[], int n);

int main() {

    int arr[40000];
    int n = sizeof(arr)/sizeof(arr[0]);
    clock_t time;
    double t_time;
    srand(0);

    printf("\n\tArray: ");
    for(int i = 0; i < 40000; i++){

        arr[i] = rand() % 50;
        printf("%d ", arr[i]);
    }

    time = clock(); 

    heapSort(arr, n);

    printf("\n\tArray ordenada: ");
    printArray(arr, n);

    printf("\n");

    time = clock() - time;

    t_time = ((double)time) / CLOCKS_PER_SEC;
    printf("\tTempo de execucao: %.3lf segundos\n", t_time);

    printf("\n");

    return 0;
}


void heapify(int arr[], int n, int i){

    int maior = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int aux;

    if (left < n && arr[left] > arr[maior])
        maior = left;
    if (right < n && arr[right] > arr[maior])
        maior = right;
    if (maior != i) {
        aux = arr[i];
        arr[i] = arr[maior];
        arr[maior] = aux;  
        heapify(arr, n, maior);
    }

}

void heapSort(int arr[], int n) {

    int aux;

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i=n-1; i>=0; i--) {

        aux = arr[0];
        arr[0] = arr[i];
        arr[i] = aux;     // adaptar pra ponteiro   
        heapify(arr, i, 0);
    }

}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}



