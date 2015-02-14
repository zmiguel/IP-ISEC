#include <stdio.h>
#include <locale.h>
#include <tgmath.h>
#include <ctype.h>

int converte(void);

void main(void){
    setlocale(LC_ALL, "portuguese");
    int num;
    num = converte();
    printf("%d", num);
}

int converte(void){
    int num=0;
    char l, L;
    printf("Insira uma frase ou palavra\n");
    do{
        scanf("%c", &l);
        L = toupper(l);
        num++;
        printf("%c", L);
    }while(l != '\n');
    return num;
}
