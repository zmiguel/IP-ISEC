#include <stdlib.h>
#include <stdio.h>
/* Ex 04 Ficha 3 */
int main(void){
    float x, y;
    printf("Inique as coordenadas do ponto, no formato (x,y)\n");
    scanf("%f,%f", &x, &y);

    if (x>0 && y>0){
        printf("O Ponto está no 1. quadrante\n");
    }else if(x>0 && y<0){
        printf("O Ponto está no 4. quadrante\n");
    }else if(x<0 && y>0){
        printf("O Ponto está no 2. quadrante\n");
    }else if(x<0 && y<0){
        printf("O Ponto está no 3. quadrante\n");
    }else if(x == 0 & y == 0){
        printf("O Ponto está na origen\n");
    }else if (x == 0 && y != 0){
        printf("O Ponto está no eixo do y\n");
    }else if (x != 0 && y == 0){
        printf("O Ponto está no eixo do x\n");
    }else {
        printf("Valores desconhecidos");
    }
}
