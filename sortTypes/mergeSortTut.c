1. DIVIDIR ARRAY EM SUB-ARRAYS ATÉ QUE SE TORNEM 
LISTAS COM UM ÚNICO ELEMENTO.

                  4, 7, 2, 6, 4, 1, 8, 3

                4, 7, 2, 6       4, 1, 8, 3
            
              4, 7       2, 6    4, 1      8, 3
        
1º passo   [4]    [7]  [2]  [6] [4]  [1] [8]   [3]


2. COMPARA ELEMENTOS EM DUPLAS RETORNANDO-OS COMO UMA
SUB-ARRAY[2] E REALIZANDO A TROCA DE SUAS POSIÇÕES 
CASO NÃO CUMPRAM OS REQUISITOS [a < b].

                  4, 7, 2, 6, 4, 1, 8, 3

                4, 7, 2, 6       4, 1, 8, 3
            
    2º passo [4, 7]     [2, 6]  [1, 4]     [3, 8]
        
           4       7    2    6  4     1    8     3

3. COMPARO O TOPO DE 2 PILAS [4, 2] E RETORNO O MENOR 
ELEMENTO COMO SUB-ARRAY[0] E O OUTRO COMO SUB-ARRAY[1]
FAZENDO O MESMO POSTERIORMENTE COM O "FUNDO" DAS 
PILHAS.

                  4, 7, 2, 6, 4, 1, 8, 3

    3º passo   [2, 4, 6, 7]      [1, 3, 4, 8]
            
             4, 7       2, 6    1, 4       3, 8 
        
           4       7    2    6  4     1    8     3

4. REALIZA NOVAMENTE A COMPARAÇÃO COM AS LISTAS 
GERADAS ATÉ QUE CHEGUE À UMA ULTIMA LISTA ORDENADA.

