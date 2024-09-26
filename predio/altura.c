#include <stdio.h>

int main() {
    int qtdandares;
    float altura, alturatotal;

    printf("Informe a quantidade de andares: \n");
    scanf("%d", &qtdandares);

    printf("Informe a altura de cada andar: ");
    scanf("%f", &altura);

    alturatotal = qtdandares * altura;

    printf("\nO tamanho do prédio é: %.2f metros\n", alturatotal);
    
    return 0;
}