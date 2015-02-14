#include <stdio.h>
#include <locale.h>
#include <tgmath.h>

int media(float, float);

void main(void){
    setlocale(LC_ALL, "portuguese");
    float num1, num2;
    int result;

    printf("Indique dois numeros, formato: num1 num2\n");
    scanf("%f %f", &num1, &num2);
    fflush(stdin);

    result = media(num1, num2);

    printf("O valor inteiro mais proximo de media é: %d", result);
}

int media(float num1, float num2){
    double resultreal;
    int result;
    resultreal = (num1+num2)/2;
    result = (int)resultreal;
    if(resultreal-result>=0.5){
        return result++;
    }else{
        return result;
    }
}
