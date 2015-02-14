#include <stdio.h>
#include <locale.h>
#include <tgmath.h>
#include <ctype.h>
#include <string.h>

#define TAM 500

void main(void){
    setlocale(LC_ALL, "portuguese");
    char frase[500];
    int i, tam, c;

    printf("Indique a sua frase!:\n");
    scanf("%[^\n]", &frase);
    tam = strlen(frase);
    c = tam;
    tam--;
    for(i=0;i<c;i++){
        printf("%c", frase[tam]);
        tam--;
    }
}
