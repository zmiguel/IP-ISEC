#include <stdio.h>
#include <locale.h>
#include <tgmath.h>

int main(void){
    setlocale(LC_ALL, "portuguese");
    int a=500, b=1500, i;
    float ca=1.052, cb=1.018;

    for(i=1;a<b;i++){
        a=a*ca;
        b=b*cb;
    }
    printf("Passados %i anos o bairro A vai ter mais habitantes do que o bairro B", i);
}
