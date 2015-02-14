#include <stdio.h>
#include <locale.h>
#include <tgmath.h>
#include <ctype.h>
#include <string.h>

#define TAM 500

int contaPrimeiro(char[]);

void main(void){
    setlocale(LC_ALL, "portuguese");
    char frase[TAM];
    int i, c, t, p;

    printf("Intruduza uma frase:\n");
    scanf("%[^\n]", &frase);
    t = strlen(frase);
    for(i=0;i>=0;i++){ //ver primeiro caracter sem ser espaço
        if(isalpha(frase[i])){
            p = i;
            break;
        }
    }
    for(i=0;i<=t;i++){
        if(frase[i] == ' '){
            frase[i] = '\n';
        }
    }
    for(i=p;i<=t;i++){
        printf("%c", frase[i]);
    }
}
