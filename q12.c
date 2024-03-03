#include <stdio.h>
#include <stdlib.h>


void yyy(int * vetor, int *min, int *max, int n){
    //vai definir o valor minimo e o maximo do vetor;
    
    *min = *(vetor + 0);  
    *max = *(vetor + n-1);
    for(int i = 0; i < n; i++){
        //achar o valor minimo
        if(*(vetor+i) < *min){
            *min = *(vetor+i);
        }
        //achar o valor maximo
        if(*(vetor+i) > *max){
            *max = *(vetor+i);
        }
    }
}

void main(){
    int min, max;
    int *vetor;
    int n;
    
    printf("Insira o tamanho desejado : ");
    scanf("%d", &n);  
   

    vetor = (int*) malloc(n * sizeof(int));
    
    for(int i = 0; i < n; i++){
        *(vetor + i) = i;
   }
   for(int k = 0; k < n; k++){
    printf("%d ", vetor[k]);
   }
   printf("\n");

    yyy(vetor,&min,&max, n);

   printf("minimo : %d\n",min);
   printf("maximo : %d\n",max);

   free(vetor);



}