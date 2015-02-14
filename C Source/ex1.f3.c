#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "portuguese");
    float a, b, c, inroot, root, rp, rn;
    printf("Indique os valores de A, B e C no formato: a b c\n");
    scanf("%f %f %f", &a, &b, &c);
    inroot = ((b*b)-(4*a*c));

    if(inroot>0){
        root = sqrt(inroot);
        rp = ((-b+root)/(2*a));
        rn = ((-b-root)/(2*a));
        printf("X e igual a: %.2f, %.2f    positivo, negativo\n", rp, rn);
    }else{
        printf("Raiz negativa");
    }
}
