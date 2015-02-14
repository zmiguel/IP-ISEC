#include <stdio.h>
#include <locale.h>
#include <tgmath.h>

int main(void){
    setlocale(LC_ALL, "portuguese");
    float b, e, res, i;
    printf("Indique a base e o expoente no formato: b e\n");
    scanf("%f %f", &b, &e);

    res=b;

    for(i=1;i<e;i++){
        res=res*b;
    }


   /* res = pow(b,e); */
    printf("Resultado: %.2f", res);
}
