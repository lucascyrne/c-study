#include<stdio.h>
#include<string.h>

char * reverseString(char *pal) {
        static int i = 0;
        static char reverse[10];

        if(*pal) {
                reverseString(pal + 1);
                reverse[i++] = *pal;
        }
        return reverse;
}

char main(int argc, char *argv[]) {
        char *pal, *pal_rev;

        pal = argv[2];
        // printf("palavra: %s\n", pal);
        pal_rev = reverseString(pal);
        printf("\nreverso: %s\n", pal_rev);
        return 0;
}
