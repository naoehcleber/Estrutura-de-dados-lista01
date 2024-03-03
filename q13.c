#include <stdio.h>
#include <stdlib.h>

typedef struct habitante
{
    char sexo;
    float altura;
    int idade;
    char corOlhos;
} Habitante;


void main(){
    Habitante *ptr;
    int n, maiorIdade, qntdHomens, qntdMulheres, mulheresAdultas, mulheresVerdesBaixas, mulheresAdultasVerdesBaixas;
    float mediaMaluca, mediaMalucaSoma, mediaMalucaQntd, percentualHomens;

    printf("Numero de pesquisados : ");
    scanf("%d",&n);

    ptr = ( Habitante *) malloc(n * sizeof(Habitante));

    for(int i = 0; i < n; i++){
        printf("Insira as caracteristicas do pesquisado \n");

        printf("Sexo : ");
        scanf("%c", &(ptr + i)->sexo);
        while(getchar()!= '\n');

        printf("Altura : ");
        scanf("%f", &(ptr+i)->altura);
        while(getchar()!= '\n');

        printf("Idade : ");
        scanf("%d", &(ptr+i)->idade);
        while(getchar()!= '\n');

        printf("Cor dos olhos : ");
        scanf("%c",&(ptr+i)->corOlhos);
        while(getchar()!= '\n');
    }

    //media de idade das pessoas com olhos castanhos e altura superior a 1m60
    for(int i =0; i < n; i++){

        if((ptr+i)->corOlhos == 'C' && (ptr+i)->altura > 1.60){
            mediaMalucaSoma += (ptr+i)->idade;
            mediaMalucaQntd += 1;
        }
        
    }
    mediaMaluca = mediaMalucaSoma/mediaMalucaQntd;
    printf("media de idade das pessoas com olhos castanhos e altura superior a 1.60 : %f", mediaMaluca);
    //maior idade
    maiorIdade = (ptr+0)->idade;
    for(int i =0; i < n; i++){

        if((ptr+i)->idade > maiorIdade){
            maiorIdade = (ptr+i)->idade;
        }
    }

    printf("Maior Idade : %d \n",maiorIdade);

    //percentual de homens
    
    for(int i =0; i < n; i++){
        if((ptr + i)->sexo == 'M'){
            qntdHomens += 1;
        } else{
            qntdMulheres += 1;
        }
    }

    percentualHomens = qntdHomens*100/(qntdHomens+qntdMulheres);
    printf("Percentual de homens : %f",percentualHomens);
    //A  quantidade  de  indivíduos  do  sexo  feminino  cuja  idade  esteja  entre  20  e  45  anos (inclusive) ou que tenham verdes e altura inferior a 1,70m
    for(int i =0; i < n; i++){
        if((ptr + i)->sexo == 'F' && (ptr+i)->idade > 20 && (ptr+i)->idade < 45 ){
            mulheresAdultas += 1;
        }
        if((ptr + i)->sexo == 'F' && (ptr+i)->corOlhos == 'V' && (ptr+i)->altura < 1.70 ){
            mulheresVerdesBaixas += 1;
        }
    }
    mulheresAdultasVerdesBaixas = mulheresAdultas + mulheresVerdesBaixas;
    printf("A  quantidade  de  indivíduos  do  sexo  feminino  cuja  idade  esteja  entre  20  e  45  anos (inclusive) ou que tenham verdes e altura inferior a 1,70m : %d", mulheresAdultasVerdesBaixas);

}