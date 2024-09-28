#include <stdio.h>

int main() {
    //variaveis
   float quilos, gato1, gato2, gato3, gramas, consumo, dias=5;
   
   //recebendo valores
   printf("Digite o peso do saco de ração em quilos(kl): ");
   scanf("%f", &quilos);
   
   printf("Digite a quantidade de ração que Gatão consome:  ");
   scanf("%f", &gato1);
   
   printf("Digite a quantidade de ração que Dudu consome:  ");
   scanf("%f", &gato2);
   
   printf("Digite a quantidade de ração que Yumi consome:  ");
   scanf("%f", &gato3);
   
   if (quilos < 0 || gato1 < 0 || gato2 < 0 || gato3 < 0) {
        printf("\n\nValores inválidos. As quantidades devem ser não negativas.\n");
        return 1;
   }
   
   //calculos
   quilos= quilos*1000;
   gramas= gato1+gato2+gato3;
   consumo= gramas*dias;
   
   //resultado
   printf("\n\nApós cinco dias restará no saco de ração %.4f kilos", (quilos-consumo)/1000);
   
   
   
   
  

    return 0;
}