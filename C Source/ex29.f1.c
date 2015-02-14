#include <stdio.h>
#include <locale.h>
#include <tgmath.h>

int main(void){
    setlocale(LC_ALL, "portuguese");
    float p=1, m, mp=1, i=1, pt=0, np=0;

        for(i;p>0;i++){
        printf("Indique o peso, em Kg, da pessoa nr %.0f\n", i);
        scanf("%f", &p);

        if(p>=60){
            np++;
            pt = pt + p;
            m = pt/np;
        }else{
            if(mp<p){
                mp=p;
            }else{
                mp=mp;
            }
        }
    }


    printf("A média dos pesos indicádos é: %.2f\nA pessoa mais pesada com menos de 60Kg pesa: %.2f", m, mp);
}
