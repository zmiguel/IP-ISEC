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
    int c;

    printf("Intruduza uma frase:\n");
    scanf("%[^\n]", &frase);
    c = contaPrimeiro(frase);
    printf("O Primeiro caracter sem ser espaço repete-se %d vezes", c);

}

int contaPrimeiro(char frase[]){
    int i, p, t, count=0;
    char c;
    t = strlen(frase);
    for(i=0;i>=0;i++){ //ver primeiro caracter sem ser espaço
        if(isalpha(frase[i])){
            p = i;
            break;
        }
    }
    c = tolower(frase[p]);
    for(i=0;i<=t;i++){ //contar caracteres iguais
        frase[i] = tolower(frase[i]);
        if(c == frase[i]){
            count++;
        }
    }
    return count;
}
