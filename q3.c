#include <stdio.h>
#include <stdlib.h>

void main(){
    char key, choice;
    int num, count;
    long date;
    float yield;
    double price;
    //A)

    printf("Endereco de key : %p\n", &key);
    printf("Endereco de choice : %p\n", &choice);
    printf("Endereco de num : %p\n", &num);
    printf("Endereco de count : %p\n", &count);
    printf("Endereco de date : %p\n", &date);
    printf("Endereco de yield : %p\n", &yield);
    printf("Endereco de price : %p \n", &price);
    
    //B)

    printf("Quantidade de mem'oria reservada para char : %d\n", sizeof(char));
    printf("Quantidade de memoria reservada para int : %d\n", sizeof(int));
    printf("Quantidade de memoria reservada para long : %d\n", sizeof(long));
    printf("Quantidade de memoria reservada para float : %d\n", sizeof(float));
    printf("Quantidade de memoria reservada para double : %d\n",sizeof(double));

    //o COMPILADOR reservou a memoria na ordem em que as variaveis foram declaradas pois o codigo hexadecimal de cada variavel eh precisamente :
    // HEXADECIMAL DA VARIAVEL ANTERIOR + QUANTIDADE DE MEMORIA RESERVADA PARA O TIPO DE VARIAVEL 

}