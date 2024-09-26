#include <stdio.h>
#include <math.h>

void main() {
    char nome[50];
    float nota1, nota2, nota3, nota4, media;
    
    printf("Informe o seu nome: ");
    scanf("%s", nome);
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);
    printf("Informe a quarta nota: ");
    scanf("%f", &nota4);
    
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    
    printf("\nA média do aluno %s é: %.2f\n", nome, media);
    
    if(media >= 6) {
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }
}