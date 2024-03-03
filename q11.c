#include <stdio.h>
#include <stdlib.h>

void xxx(int mnts, int *h, int *m){
    //converter minutos em horas e minutos
    *h = mnts/60;
    *m = mnts%60;

}

void main(){
    int mnts;
    int h, m;
    printf("Insira quantos minutos : ");
    scanf("%d",&mnts);

    xxx(mnts,&h,&m);

    printf("%dh:%d min", h,m);
}