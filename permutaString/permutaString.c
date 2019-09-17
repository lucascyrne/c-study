#include <stdio.h>
#include <string.h>

void mudaPos(char *ch1, char *ch2) {
        char tmp;
        tmp = *ch1;
        *ch1 = *ch2;
        *ch2 = tmp;
}

void permutaStr(char *cht, int stno, int endno) {
        int i;
        if (stno == endno)
        printf("%s  ", cht);
        else {
                for (i = stno; i <= endno; i++) {
                        mudaPos((cht+stno), (cht+i));
                        permutaStr(cht, stno+1, endno);
                        mudaPos((cht+stno), (cht+i)); 
                }
        }
}
 
int main() {

        char str[] = "sarah";
        printf("\n\n Pointer : Generate permutations of a given string :\n"); 
        printf("--------------------------------------------------------\n"); 
        int len = strlen(str);
        printf(" The permutations of the string are : \n");
        permutaStr(str, 0, len-1);
        printf("\n\n");
        return 0;
}