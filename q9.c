#include <stdio.h>
#include <stdlib.h>

void main(){
    float *rates;
    rates = (float*) malloc(6 * sizeof(float)); 
    *(rates + 0) = 12.9;
    *(rates + 1) = 18.6;
    *(rates + 2) = 11.4;
    *(rates + 3) = 9.5;
    *(rates + 4) = 15.2;
    *(rates + 5) = 17.6;
    for(int i = 0; i <6; i++){
        printf("%f ", rates[i]);
    }
    free(rates);

}