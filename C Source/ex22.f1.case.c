#include <stdlib.h>
#include <stdio.h>
/* Ex 22 Ficha 1 - case's */
int main(void){
    int d, m, y;

    printf("Indique a data, no formato dia/mes/ano\n");
    scanf("%d/%d/%d", &d, &m, &y);

    switch (d){
    case 28:
        switch(m){
        case 2:
            m++;
            d=1;
            break;
        default:
            d+;
        }
        break;
    case 30:
        switch(m){
        case 4:
        case 6:
        case 9:
        case 11:
            d=1;
            m++;
            break;
        default:
            d++;
        }
        break;
    case 31:
        d=1;
        m++;
        if (m ==13){
            m=1;
            y++;
        }
        break;
    default:
        d++;
    }
    printf("A data de amanha: %d/%d/%d", d, m, y)
}
