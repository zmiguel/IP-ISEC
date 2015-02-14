#include <stdlib.h>
#include <stdio.h>
/* Ex 22 Ficha 1 */
int main(void){
    int d, m, y;

    printf("Indique a data, no formato dia/mes/ano\n");
    scanf("%d/%d/%d", &d, &m, &y);

    if(d<31 && (m == 1 || m == 3 || m == 5 || m == 6 || m == 8 || m == 10 || m == 12)){
            d++;
            printf("A Data de amanha: %d/%d/%d", d, m, y);
       }else if(d==31 && (m == 1 || m == 3 || m == 5 || m == 6 || m == 8 || m == 10)){
            d = 1;
            m++;
            printf("A Data de amanha: %d/%d/%d", d, m, y);
        }else if(d==31 && m == 12){
            d=1;
            m=1;
            y++;
            printf("A Data de amanha: %d/%d/%d", d, m, y);
        }else if(d<30 && (m == 4 || m == 7 || m == 9 || m == 11)){
            d++;
            printf("A Data de amanha: %d/%d/%d", d, m, y);
        }else if(d == 30 && (m == 2 || m == 4 || m == 7 || m == 9 || m == 11)){
            d=1;
            m++;
            printf("A Data de amanha: %d/%d/%d", d, m, y);
        }else if(d<28 && m == 2){
            d++;
            printf("A Data de amanha: %d/%d/%d", d, m, y);
        }else if(d==28 && m == 2){
            d=1;
            m=3;
            printf("A Data de amanha: %d/%d/%d", d, m, y);
        }else{
            d++;
            printf("A Data de amanha: %d/%d/%d", d, m, y);
        }
}
