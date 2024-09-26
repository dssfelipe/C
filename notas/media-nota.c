#include <stdio.h>

int main() {
    
    char nome_aluno[50];
    float n1,n2,n3,n4,soma,media;

        /*Nome do usuario*/
        printf("Informe o nome do aluno: \n");
        scanf("%49s", nome_aluno);
        
        /*Declarando notas*/
        printf("Digite o resultado da primeira nota: \n");
        scanf("%f", &n1);
        printf("Digite o resultado da segunda nota: \n");
        scanf("%f", &n2);
        printf("Digite o resultado da terceira nota: \n");
        scanf("%f", &n3);
        printf("Digite o resultado da quarta nota: \n");
        scanf("%f", &n4);

        /*calculos*/
        soma = n1 + n2 + n3 + n4;
        media = soma / 4;
        

        /*Resultados*/
        printf("\nNome do aluno: %s\n", nome_aluno);
        printf("Média das notas é: %.2f\n", media);
    
    return 0;
}