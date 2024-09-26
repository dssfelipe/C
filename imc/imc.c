#include <stdio.h>

int main() {
    
    char nome[50];
    float peso, altura, imc;
    
    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("Digite o seu peso(Kg): ");
    scanf("%f", &peso);
    printf("Digite a sua altura(m): ");
    scanf("%f", &altura);
    
    imc= peso/(altura*altura);
    
    printf("\nSeu IMC é: %.1f\n", imc);
    
    if(imc < 18.5){
        printf("\nAbaixo do peso, procure um profissional!");
    }else if(imc >= 18.5 && imc <= 24.9){
        printf("\nPeso normal, Parabéns!");
    }else if(imc >= 25 && imc <= 29.9){
        printf("\nSobrepeso, procure um profissional!");
    }else if(imc >= 30){
        printf("\nObesidade, procure um profissional!");
    }
    
    
    

    return 0;
}