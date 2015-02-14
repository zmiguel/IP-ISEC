#include <stdio.h>
#include <locale.h>
#include <tgmath.h>
#include <ctype.h>

int ordem(char);

void main(void){
    setlocale(LC_ALL, "portuguese");
    char c;
    printf("indique o caractere\n");
    scanf("%c", &c);

    if(ordem(c) == 1){
        printf("Ordem 1");
    }else if(ordem(c) == 2){
        printf("Ordem 2");
    }else if(ordem(c) == 3){
        printf("Ordem 3");
    }else if(ordem(c) == 4){
        printf("Ordem 4");
    }else if(ordem(c) == 5){
        printf("Ordem 5");
    }else{
        printf("É uma consoante\n");
    }
}


int ordem(char c){
    if(isdigit(c) == 0){
        if(c == 'a' || c == 'A'){
            return 1;
        }else if(c == 'e' || c == 'E'){
            return 2;
        }else if(c == 'i' || c == 'I'){
            return 3;
        }else if(c == 'o' || c == 'O'){
            return 4;
        }else if(c == 'u' || c == 'U'){
            return 5;
        }else{
            return 0;
        }
    }else{
        printf("O caracter introduzido não é uma letra!!!\n");
    }
}
