#include <stdio.h>
#include <locale.h>
#include <tgmath.h>

float quadrado(float);

void main(void){
    setlocale(LC_ALL, "portuguese");
    float num, quad;
    int i;
    printf("Introduza um número\n");
    for(i=1;num>0;i++){
        scanf("%f", &num);
        fflush(stdin);
        quad = quadrado(num);
        printf("O quadrado de %.2f é %.2f\n", num, quad);
    }
}

float quadrado(float num){
    float res;
    res = num*num;
    return res;
}
