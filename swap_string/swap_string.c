#include<stdio.h>

void swap(int argc, char *argv[]);

void main(int argc, char *argv[]) {

        swap(argc - 1, argv + 1);
        printf("argv[1] = %d\targv[2] = %d\n", *argv[1], *argv[2]);

        getchar();
}

void swap(int argc, char *argv[]) {
        char *temp[15];
        
        *temp[15] = *argv[1];
        *argv[1] = *argv[2];
        *argv[2] = *temp[15];
}
