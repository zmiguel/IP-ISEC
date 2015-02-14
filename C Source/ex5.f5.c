#include <stdio.h>
#include <locale.h>
#include <tgmath.h>

void main(void){
    setlocale(LC_ALL, "portuguese");
    int n=1, h, h2, esp, i=1;
    printf("Indique a altura do losangulo\n");
    scanf("%d", &h);
    h2 = h/2;
    esp =  h2;
    for(i;i<=h2;i++){
        espacos(esp);
        esp--;
        linha(n);
        printf("\n");
        n += 2;
    }
    linha(h);
    printf("\n");
    n = h-2;
    esp = 1;
    for(i=1;i<=h2;i++){
        espacos(esp);
        esp++;
        linha(n);
        printf("\n");
        n -= 2;
    }
}

void linha(int n){
    int i=1;
    for(i;i<=n;i++){
        printf("*");
    }
    return;
}

void espacos(int n){
    int i=1;
    for(i;i<=n;i++){
        printf(" ");
    }
    return;
}
