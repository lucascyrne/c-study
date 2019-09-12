#include <stdio.h>
#include <stdlib.h>

// 01 programa - criando arquivos

int main()
{
    FILE *arquivo; // avisando ao programa que iremos usar arquivos

    arquivo = fopen("C:\\Users\\eemb\\Desktop\\teste.txt", "w");    //equivalente a uma alocação. Nela estou falando pro compilador qual arquivo quero criar, e onde. No caso, estou criando o arquivo "teste.txt" na localização "C:\Users\eemb\Desktop".
                                                                // o "w" é o comando "write". pesquisar na internet os comandos de fopen//
    if(arquivo!=NULL)
    {
        //...
        printf("Abertura OK\n");

        fclose(arq);
    }


}

------------------------escrevendo em aquivos--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *arquivo; // avisando ao programa que iremos usar arquivos

    arquivo = fopen("C:\\Users\\eemb\\Desktop\\teste.txt", "w");    //equivalente a uma alocação. Nela estou falando pro compilador qual arquivo quero criar, e onde. No caso, estou criando o arquivo "teste.txt" na localização "C:\Users\eemb\Desktop".
                                                                // o "w" é o comando "write". pesquisar na internet os comandos de fopen//
    if(arquivo!=NULL)
    {
        //...
        printf("Abertura OK\n");
        fprintf(arquivo, "Hello World\n");  //função para printar coisas diretamente no arquivo. Essa função recebe dois parametros, a primeira, é o ponteiro do arquivo onde será escrito algo. O segundo é a string que deverá ser escrita.
        fprintf(arquivo, "eemb\n");
        fprintf(arquivo, "26/10/2017\n");
        fclose(arquivo);
    }


}

-----------------------lendo em arquivos-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *arquivo; // avisando ao programa que iremos usar arquivos
    char linha[80];//essa string será armazenada

    arquivo = fopen("C:\\Users\\eemb\\Desktop\\teste.txt", "r");   // o "r" é o comando "read". pesquisar na internet os comandos de fopen//
                                                                
    if(arquivo!=NULL)
    {
        //...
        printf("Abertura OK\n");

        fscanf(arquivo, "%[^\n]\n", linha);  //função de leitrua em arquivos. Como no fprintf, o primeiro parametro da função é o ponteiro do arquivo desejado. o segundo é o que será lido, assim como no scanf normal, e o Terceiro parâmetro é a variável onde será armazenadao o que foi lido.
        printf("%s\n", linha);

        fscanf(arquivo, "%[^\n]\n", linha);                 //aqui ele lê até o "\n", e depois dá \n, para passar pra próxima linha do arquivo. Em seguida printar a linha que acabou de ser lida
        printf("%s\n", linha);

        fscanf(arquivo, "%[^\n]\n", linha);
        printf("%s\n", linha);

        fclose(arquivo);
    }


}



-----------------------lendo em arquivos com feof-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *arquivo; // avisando ao programa que iremos usar arquivos
    char linha[80];//essa string será armazenada

    arquivo = fopen("C:\\Users\\eemb\\Desktop\\teste.txt", "r");   // o "r" é o comando "read". pesquisar na internet os comandos de fopen//
                                                                
    if(arquivo!=NULL)
    {
        //...
        printf("Abertura OK\n");

        while(!feof(arquivo)) // isso significa : Enquanto o final do arquivo não chegou, faça...
        {
        fscanf(arquivo, "%[^\n]\n", linha);  //assim, ele vai ler a linha, printar, e pular uma linha. E vai repetir isso até que chege o fim do arquivo.
        printf("%s\n", linha);
        } 

      //também tem a funcão fgets(), o problema dela é que pega também o "\n"
        //a função fgetc() serve pra "limpar" o \n quando se lê, assim:   fscanf(arquivo, "%[^\n]", linha); fgetc(arquivo); fscanf(arquivo, "%[^\n]", linha);... assim vai lendo linha por linha 
        //fgetc() ve a atual posiçao do ponteiro, consome o caractere e pula pra proxima posiçao.
        fclose(arquivo);
    }


}

-----------------------escrevendo em arquivos com "a"-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *arquivo; // avisando ao programa que iremos usar arquivos
    char linha[80];//essa string será armazenada

    arquivo = fopen("C:\\Users\\eemb\\Desktop\\teste.txt", "a");  // o "a" é pra acrescentar algo no final do arquivo, sempre começa a escrever no final do arquivo.
                                                                
    if(arquivo!=NULL)
    {   

        printf("Abertura OK\n");
        fprintf(arquivo, "No Final do arquivo\n");

        fclose(arquivo);
    }


}

-----------------------lendo e escrevendo em arquivos com "r+"-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *arquivo; // avisando ao programa que iremos usar arquivos
    char linha[80];//essa string será armazenada

    arquivo = fopen("C:\\Users\\eemb\\Desktop\\teste.txt", "r+");  // o "r+" é pra ler e, porventura, escrever, se o des3envolvedor quiser
                                                                
    if(arquivo!=NULL)
    {   

        printf("Abertura OK\n");
        fprintf(arquivo, "Era uma vez\n"); // em r+, o ponteiro é "setupado" no começo do arquivo. Então ele vai sobrescrever a string "Era uma vez" no começo do arquivo, pular uma linha e só.

        fclose(arquivo);
    }


}


-----------------------arquivos binarios-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *arquivo; // avisando ao programa que iremos usar arquivos
    char linha[80];//essa string será armazenada

    arquivo = fopen("C:\\Users\\eemb\\Desktop\\testee.bin", "w");  //observe que a extensão do arquivo agora é .bin //para conseguir ler, use "abrir com..."

    if(arquivo!=NULL)
    {   

        printf("Abertura OK\n");
        fprintf(arquivo, "Era uma vez\n"); // em r+, o ponteiro é "setupado" no começo do arquivo. Então ele vai sobrescrever a string "Era uma vez" no começo do arquivo, pular uma linha e só.

        fclose(arquivo);
    }


}

-----------------------arquivos binarios-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *arquivo; // avisando ao programa que iremos usar arquivos
    int idade=80;

    arquivo = fopen("C:\\Users\\eemb\\Desktop\\testee.bin", "wb"); 

    if(arquivo!=NULL)
    {   

        printf("Abertura OK\n");
        fprintf(arquivo, "Era uma vez\n"); // em r+, o ponteiro é "setupado" no começo do arquivo. Então ele vai sobrescrever a string "Era uma vez" no começo do arquivo, pular uma linha e só.

        fwrite(&idade, sizeof(int), 1, arq); //para escrever em arquivos binarios usamos fwrite a ordem dos parametros é : ponteiro do tipo, tamanho do tipo, quantidade de variaveis a serem escritas, arquivo que devera ser usado.

        fclose(arquivo);
    }


}

-----------------------arquivos binarios-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

typedef struct Pessoa
{
    int idade;
    float altura;
    char nome[50];

}eu;


int main()
{
    FILE *arquivo; // avisando ao programa que iremos usar arquivos
    int idade=80;

    arquivo = fopen("C:\\Users\\eemb\\Desktop\\testee.bin", "wb"); 

    if(arquivo!=NULL)
    {   

        printf("Abertura OK\n");
        fprintf(arquivo, "Era uma vez\n"); // em r+, o ponteiro é "setupado" no começo do arquivo. Então ele vai sobrescrever a string "Era uma vez" no começo do arquivo, pular uma linha e só.

        fwrite(&idade, sizeof(int), 1, arq); //para escrever em arquivos binarios usamos fwrite a ordem dos parametros é : ponteiro do tipo, tamanho do tipo, quantas variaveis vc vai escrever (se quero colocar 5 estruturas do tipo pessoa, eu coloco 5 nesse parametro), arquivo que devera ser usado.

        fclose(arquivo);
    }


}