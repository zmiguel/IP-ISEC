#include <stdio.h>
#include <locale.h>
#include <tgmath.h>

int main(void){
    setlocale(LC_ALL, "portuguese");
    float p=1, pa=0, pna=0, pt=0;
    char tipo;
    int i=0, npa=0, npna=0;
    printf("Indique o preço do produto e o tipo de produto, no formato: ");
    for(i;p>0;i++){
        printf("TIPO(A ou N) PREÇO:\n");
        scanf("%c", &tipo);
        scanf("%f", &p);
        fflush(stdin);
        /*printf("%f %f %f %f %c %d %d %d\n", p, pa, pna, pt, tipo, i, npa, npna);*//*DEBUG*/
        if((tipo=='A' || tipo=='a') && p>0){
            pa = pa+p;
            npa++;
        }else if((tipo=='N' || tipo=='n') && p>0){
            pna = pna+p;
            npna++;
        }else{
            printf("Dados Inválidos\n");
        }
    }
    pt = pa*1.06 + pna*1.23;
    printf("TALÃO:\n\tAlimentares(%d):\n\t\tSem Iva:%.2f\n\t\tCom Iva:%.2f\n\tNão Alimentares(%d):\n\t\tSem Iva:%.2f\n\t\tCom Iva:%.2f\n\tPreço Total:%.2f",npa, pa, pa*1.06, npna, pna, pna*1.23, pt);
}
