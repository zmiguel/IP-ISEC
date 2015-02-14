#include <stdio.h>
#include <locale.h>
#include <tgmath.h>

void main(void){
    setlocale(LC_ALL, "portuguese");
    int n, i=1;
    printf("Indique o lado do qudrado\n");
    scanf("%d", &n);
    for(i;i<=n;i++){
        linha(n);
        printf("\n");
    }
}

void linha(int n){
    int i=1;
    for(1;i<=n;i++){
        printf("* ");
    }
}
