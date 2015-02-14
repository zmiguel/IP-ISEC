#include <stdio.h>
#include <locale.h>
#include <tgmath.h>

int divisor(int);

void main(void){
    setlocale(LC_ALL, "portuguese");
    int i=0, divi, num=4;
    printf("Intruduza numeros inteiros\n");

    for(i;num>0;i++){
        scanf("%d", &num);
        divi = divisor(num);
        if(divi == 2){
            printf("Numero primo!\n");
        }
    }
}

int divisor(int num){
    int i, divi=0, x;
    for(i=1;i<=num;i++){
        x = num % i;
        if(x == 0){
            divi++;
        }
    }
    return divi;
}
