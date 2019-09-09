#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int a = 10;
    int *add = &a;
    int b = *add;
    add = &b;
    *add = 5;
    (*add)++;
    printf("\na = %i\n", a);
    printf("&a = %p\n", &a);
    printf("b = %i\n", b);
    printf("&b = %p\n", &b);
    printf("add = %p\n", add);
    printf("*add = %i\n\n", *add);    

    int x = 42;
    int *pt = &x;
    printf("x = %d\n", x);
    printf("&x = %p\n", &x);
    printf("pt = %p\n", pt);
    printf("&pt = %p\n", &pt);
    printf("*pt = %d\n", *pt);

    int y, *p;
    y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
    --x;
    (*p) += x;
    printf("\nx = %i\n", x);
    printf("y = %i\n", y);
    printf("p = %p\n", p);
    printf("*p = %i\n", *p);

    /* struct s {
        int i;
        float f;
        int *point_member;
        struct s *next;
    }struct1, struct2;

    a = 5;
    add = &a;
    struct s *point_s; // cria uma variável struct s
    point_s = &struct1;
    (*point_s).i = 10;
    point_s->f = 4.3;
    *add = point_s->i;
    struct1.point_member = &a;
    struct1.next = struct2.next; */

    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    printf("\narr[0] value: %d, memory adress: %p\n", *ptr, ptr); ++ptr;
    printf("arr[1] value: %d, memory adress: %p\n", *ptr, ptr); ++ptr;
    printf("arr[2] value: %d, memory adress: %p\n", *ptr, ptr); ++ptr;
    printf("arr[3] value: %d, memory adress: %p\n", *ptr, ptr); ++ptr;
    printf("arr[4] value: %d, memory adress: %p\n", *ptr, ptr); ++ptr;

    x = 20;
    ptr = &x;
    printf("\n%u\n", *ptr);

    getchar();
    return 0;    

}