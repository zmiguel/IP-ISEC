#include <stdio.h>
#include <locale.h>
#include <tgmath.h>
#include <ctype.h>
#include <string.h>

#define TAM 5000

int modstring(char[], char, int);

void main(void){
    setlocale(LC_ALL, "portuguese");
    char string[TAM], c;
    int t;

    printf("Indique uma frase:\n");
    scanf("%[^\n]", &string);
    fflush(stdin);
    t = strlen(string);
    printf("indique o caacter que quer multiplicar:\n");
    scanf("%c", &c);
    fflush(stdin);

    if(modstring(string, c, TAM) == 1){
        printf("Feito!");
    }else{
        printf("Não deu...");
    }

}

int modstring(char string[], char c, int t){
    int i=0, cont=0, p, t2=0;

    while(string[i] != '\0'){
        t2++;
        if(strlen(string)<t-1){
            if(string[i] == c){
                i++;
                for(p=strlen(string);p>=i;p--){
                    string[p+1] = string[p];
                }
                string[i] = c;
                cont++;
            }
            i++;
        }
    }
    i=0;
    while(string[i]!='\0'){
        printf("%c", string[i]);
        i++;
    }
    printf("\n");
    if(cont>0){
        return 1;
    }else{
        return 0;
    }
}
