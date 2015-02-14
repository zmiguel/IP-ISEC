#include <stdlib.h>
#include <stdio.h>

int main(void){
   int data_hd, data_hm, data_hy;
   float t_juro, m_ini, m_fin;

   printf("Insira da data no formato: dia/mes/ano\n");
   scanf("%d/%d/%d", &data_hd, &data_hm, &data_hy);
   printf("Indique o montante inicial\n");
   scanf("%f",&m_ini);
   printf("Indique a taxa e juro\n");
   scanf("%f", &t_juro);

   m_fin = (m_ini*(1+(t_juro/100)));
   data_hy++;

   printf("No dia %d/%d/%d, a sua conta tera %.2f euros\n", data_hd, data_hm, data_hy, m_fin);
}
