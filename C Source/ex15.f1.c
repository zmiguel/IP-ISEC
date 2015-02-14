#include <stdlib.h>
#include <stdio.h>
/* Ex 15 Ficha 1 */
int main(void){
    int n_lados;
    float m_lado, area, perimetro;

    printf("Indique o numero de lados do poligono [3 a 5]\n");
    scanf("%d", &n_lados);

    if(n_lados == 3){
        printf("indique a medida do lado do poligono\n");
        scanf("%f", &m_lado);
        perimetro = m_lado*3;
        printf("O Triangulo tem de Perimetro: %f\n", perimetro);
    }else if(n_lados == 4){
        printf("indique a medida do lado do poligono\n");
        scanf("%f", &m_lado);
        area = m_lado*m_lado;
        printf("O Quadrado tem de area: %f\n", area);
    }else if(n_lados == 5){
        printf("O Poligono é um Pentagono\n");
    }else{
        printf("Numero de lados é diferento do pedido!!\n");
    }
}
