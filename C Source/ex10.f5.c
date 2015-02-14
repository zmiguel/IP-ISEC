#include <stdio.h>
#include <locale.h>
#include <tgmath.h>

int cubo(int);
int pedenum(void);
int somacubo(int);

void main(void){
    setlocale(LC_ALL, "portuguese");
    int i=0, num, soma;
    char res;

    do{
        if(somacubo(pedenum())==1){
            printf("O número e a soma dos seus cubos são iguais!\n");
        }else{
            printf("O número e a soma dos seus cubos NÃO são iguais\n");
        }
        fflush(stdin);
        printf("Continuar? s/n\n");
        scanf("%c", &res);
    }while(res=='s' || res=='S');
}

int cubo(int x){
    if(x>0){
        return x*x*x;
    }else{
        return 0;
    }
}

int pedenum(void){
    int i, num;
    do{
        printf("Indique um numero entre 100 e 999\n");
        scanf("%d", &num);
    }while(num<100 || num>999);
    return num;
}

int somacubo(int num){
    int num1, num2, num3, cubo1, cubo2, cubo3, soma;

    num1 = num%10;
    num2 = (num/10)%10;
    num3 = (num/100)%10;

    cubo1 = cubo(num1);
    cubo2 = cubo(num2);
    cubo3 = cubo(num3);

    soma = cubo1+cubo2+cubo3;

    if(num==soma){
        return 1;
    }else{
        return 0;
    }
}
