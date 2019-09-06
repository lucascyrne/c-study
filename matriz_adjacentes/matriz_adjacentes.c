#include <stdio.h>

const int n = 4;

//função para achar produto máximo
int MaxProduto(int arr[][n], int n) {

    int max = 0, result;
	int maximo[6]; // aqui tem 3 x e y.
    
    //iterando as linhas
    for (int i = 0;i < n;i++) {
        //iterando as colunas
        for (int j = 0;j < n;j++) {
            // checa o produto maximo em uma linha horizontal
            if ((j - 3) >= 0) {
                result = arr[i][j] * arr[i][j-1] * arr[i][j-2];
                if (max < result) {
                    max = result;
                    maximo[0]=i;
                    maximo[1]=j;
                    maximo[2]=i;
                    maximo[3]=j-1;
                    maximo[4]=i;
                	maximo[5]=j-2;
                } 
            }

            // checa o produto maximo em uma linha vertical
            if ((i - 3) >= 0) {
                result = arr[i][j] * arr[i-1][j] * arr[i-2][j];
                if(max<result) {
                    max = result;
                    maximo[0]=i;
                    maximo[1]=j;
                    maximo[2]=i-1;
                    maximo[3]=j;
                    maximo[4]=i-2;
                	maximo[5]=j;
                }
            } 

            // checa o produto maximo na diagonal e anti-diagonal
            if ((i - 3) >= 0 && (j - 3) >= 0) {
                result = arr[i][j] * arr[i-1][j-1] * arr[i-2][j-2];
                if (max < result) {
                    max = result;
                    maximo[0]=i;
                    maximo[1]=j;
                    maximo[2]=i-1;
                    maximo[3]=j-1;
                    maximo[4]=i-2;
                	maximo[5]=j-2;
                }
            }
        }
    }

    printf("(%d,%d) (%d,%d) (%d,%d)", maximo[0],maximo[1],maximo[2],maximo[3],maximo[4],maximo[5]);
    return max;
}

int main() {

    int arr[][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,0,1,2},
                    {3,4,5,6}};

    MaxProduto(arr, n);

    return 0;

}

