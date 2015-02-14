#include <stdio.h>
#include <locale.h>
#include <tgmath.h>
#include <ctype.h>
#include <string.h>

#define TAM 5000

int NumSemanas(int, int, int, int, int, int);

void main(void){
    setlocale(LC_ALL, "portuguese");
    int d1, d2, m1, m2, a1, a2, semanas;

    printf("Indique a primeira data [DD/MM/AAAA]\n");
    scanf("%d/%d/%d", &d1, &m1, &a1);
    printf("Indique a segunda data [DD/MM/AAAA]\n");
    scanf("%d/%d/%d", &d2, &m2, &a2);

    semanas = NumSemanas(d1, d2, m1, m2, a1, a2);
    printf("passaram %d semanas", semanas);
}

int NumSemanas(int d1, int d2, int m1, int m2, int a1, int a2){
    int sem=0, i, i2, temp;

    if((m2==1 || m2==3 || m2==5 || m2==7 || m2==8 || m2==10) && d2>31){
        return 0;
    }else if((m2==4 || m2==6 || m2==9 || m2==11) && d2>30){
        return 0;
    }else if(m2==2 && d2>28){
        return 0;
    }else if(m2==12 && d2>31){
        return 0;
    }

    for(i=0;;i++){
        d1 += 7;
        if((m1==1 || m1==3 || m1==5 || m1==7 || m1==8 || m1==10) && d1>31){
            m1++;
            d1 = d1-31;
        }else if((m1==4 || m1==6 || m1==9 || m1==11) && d1>30){
            m1++;
            d1 = d1-30;
        }else if(m1==2 && d1>28){
            m1++;
            d1 = d1-28;
        }else if(m1==12 && d1>31){
            m1=1;
            d1=d1-31;
            a1++;
        }
        printf("Data1: %d/%d/%d\n", d1, m1, a1);
        printf("Data2: %d/%d/%d\n\n", d2, m2, a2);

        if(d1>d2 && m1==m2 && a1==a2){
            break;
        }else{
            sem++;
        }
    }
    return sem;
}
