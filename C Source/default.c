#include <stdio.h>
#include <locale.h>
#include <tgmath.h>
#include <ctype.h>
#include <string.h>

#define TAM 5000

int calcular(char[], char, char[]);

void main(void){
    setlocale(LC_ALL, "portuguese");
    char n1[TAM], n2[TAM], op;

    printf("Indique o primeiro numero:\t");
    scanf("%[^\n]", &n1);
    fflush(stdin);
    printf("Indique a operação a realizar:\t");
    scanf("%c", &op);
    fflush(stdin);
    printf("Indique o segundo numero:\t");
    scanf("%[^\n]", &n2);
    fflush(stdin);

    printf("Total: %d", calcular(n1,op,n2));

}

int calcular(char n1[], char op, char n2[]){
    int i, nn1=0, nn2=0, conta;

    if(n1[0]=='-'){
        for(i=1;;i++){
            if(n1[i]==0){
                break;
            }else{
                nn1 *=10;
                nn1 += n1[i]-48;

            }
        }
        nn1= nn1*-1;
    }else{
        for(i=0;;i++){
            if(n1[i]==0){
                break;
            }else{
                nn1 *=10;
                nn1 += n1[i]-48;

            }
        }
    }

    if(n2[0]=='-'){
        for(i=1;;i++){
            if(n2[i]==0){
                break;
            }else{
                nn2 *=10;
                nn2 += n2[i]-48;

            }
        }
        nn2= nn2*-1;
    }else{
        for(i=0;;i++){
            if(n2[i]==0){
                break;
            }else{
                nn2 *=10;
                nn2 += n2[i]-48;

            }
        }
    }

    if(op=='*'){
        conta = nn1*nn2;
    }else if(op=='-'){
        conta = nn1-nn2;
    }else if(op=='+'){
        conta = nn1+nn2;
    }else if(op=='/'){
        conta = nn1/nn2;
    }

    return conta;
}
