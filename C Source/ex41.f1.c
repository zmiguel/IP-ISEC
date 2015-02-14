#include <stdio.h>
#include <locale.h>
#include <tgmath.h>

float peso, altura, imc;
float calcimc(float, float);

int main(void){
    setlocale(LC_ALL, "portuguese");
    printf("Indique o seu peso e a sua altura, no formato: PESO _ ALTURA\nExemplo: 50,8 1,75\n");
    scanf("%f %f", &peso, &altura);
    imc = calcimc(peso, altura);

    /*printf("%f %f %f", peso, altura, imc);*/

    if (imc <= 18.5){
        printf("IMC: %.2f\n", imc);
        printf("Abaixo do peso normal\n");
    }else if(imc <= 25 && imc > 18.5){
        printf("IMC: %.2f\n", imc);
        printf("Peso normal");
    }else if(imc <= 30 && imc > 25){
        printf("IMC: %.2f\n", imc);
        printf("Acima do peso normal");
    }else if(imc > 30){
        printf("IMC: %.2f\n", imc);
        printf("Obsidade");
    }
}

float calcimc(float peso, float altura){
    if (peso > 0 && altura > 0){
        imc = (peso / (altura*altura));
        return imc;
    }else{
        printf("Peso ou altura inválidos\n");
    }
}
