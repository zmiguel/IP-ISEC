#include <stdio.h>
#include <locale.h>
#include <tgmath.h>
#include <ctype.h>
#include <string.h>

#define TAM 5000

int tamarray(int[],int[],int);

void main(void){
    setlocale(LC_ALL, "portuguese");
    int ar1[TAM], ar2[TAM], i, t, t1, t2, p=1;

    printf("Indique o numero de digitos do numero que vai introduzir\n");
    scanf("%d", &t1);
    printf("Indique um numero com %d Digitos\n", t1);
    for(i=0;i<t1;i++){
        printf("digito nr %d\n", p);
        scanf("%d", &ar1[i]);
        p++;
    }
    p = 1;
    printf("parte 2\n");
    printf("Indique um numero com %d Digitos\n", t1);
    for(i=0;i<t1;i++){
        printf("digito nr %d\n", p);
        scanf("%d", &ar2[i]);
        p++;
    }

    if(tamarray(ar1,ar2,t1) == 1){
        printf("Os Numeros sao iguais!!");
    }else{
        printf("Os numeros NÃO sao iguais!!");
    }
}

int tamarray(int ar1[], int ar2[], int t1){
    int i=0, res=2;

        for(i;i<=t1;i++){
            if(ar1[i] == ar2[i]){
                res = 1;
            }else{
                return 0;
            }
        }
    return res;
}
