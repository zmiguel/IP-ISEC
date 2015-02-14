#include <stdio.h>
#include <locale.h>
#include <tgmath.h>
#include <ctype.h>

#define TAM 10

void main(void){
    setlocale(LC_ALL, "portuguese");
    int num, i, i2, a[TAM]={0}, b[TAM]={0}, re[TAM]={0}, in[TAM]={0}, diff[TAM]={0};
    char cont;

     for(i=1;i<=2;i++){
        printf("Indique valores no intrevalo [0,9]");
        printf("\nInsira valores para o %d grupo\n", i);

        for(i2=0;num>=0;i2++){
        printf("indique um numero positivo:\t");
        scanf("%d", &num);
            if(num<=9){
                if(i==1){
                    a[num]=1;
                }else{
                    b[num]=1;
                }
            }else{
                printf("número inválido, continuar? [s/n]\n");
                fflush(stdin);
                scanf("%c", &cont);
                fflush(stdin);
                cont = tolower(cont);
                if(cont != 's'){
                    break;
                }
            }
        }
     }

     for(i=0;i<TAM;i++){
        printf("Reunião\tIntersecção\tDiferença\t");
        re[i]= a[i] || b[i];
        in[i]= a[i] && b[i];
        diff[i] = a[i] && !b[i];
        printf("\n%d\t%d\t%d\n", re[i], in[i], diff[i]);
     }

     for(i=0;i<10;i++){
        printf("%d\t%d\n", a[i], b[i]);
     }
}
