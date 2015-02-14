#include <stdio.h>
#include <locale.h>
#include <tgmath.h>
#include <ctype.h>

#define TAM 5

void main(void){
    setlocale(LC_ALL, "portuguese");
    int i=0, soma=0, n[TAM];
    float media;

    for(i;i<TAM;i++){
        printf("Insira um número\n");
        scanf("%d", &n[i]);

        soma += n[i];
    }
    media =(float) soma/TAM;
    printf("Média igual a: %.3f\n", media);

    for(i=0;i<TAM;i++){
        if(n[i]<media){
            n[i]=0;
        }
    }

    for(i=0;i<TAM;i++){
        printf("%d- %d\n", i, n[i]);
    }
}
