#include <stdio.h>

struct data {
    int dia, mes, ano;
}data1, data2;

int a=365, m=30, d=1, i, diaT, mesT, anoT, dias;

int main() {
    for(i=0;i<2;i++) {
        if(i==0) {
            printf("1ª Entrada (dia/mês/ano): ");
            scanf("%i/%i/%i", &data1.dia, &data1.mes, &data1.ano);
        }
        if(i==1) {
            printf("\n2ª Entrada (dia/mês/ano): ");
            scanf("%i/%i/%i", &data2.dia, &data2.mes, &data2.ano);
        }
    }

    anoT = (data1.ano - data2.ano);
    anoT = anoT * a;
    mesT = (data1.mes - data2.mes);
    mesT = mesT * m;
    diaT = (data1.dia - data2.dia);
    diaT = diaT * d;
    if(diaT != 0) {
        diaT - 1;
    }
    if(anoT<0) {
        anoT*=(-1);
    }
    if(mesT<0) {
        mesT*=(-1);
    }
    if(diaT<0) {
        diaT*=(-1);
    }
    dias = anoT + mesT + diaT;

    printf("\nHá uma diferença  de %i dias\n", dias);

    getchar();
    return 0;
}

// 6 + 210 + 