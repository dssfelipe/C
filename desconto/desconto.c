#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis
    char nome[50], sexo;
    float valorCompras, desconto, valorFinal;

    // Entrada de dados
    printf("Digite o nome do cliente: ");
    fgets(nome, sizeof(nome), stdin); // Leitura do nome
    printf("Digite o sexo do cliente (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);
    printf("Digite o valor das compras: R$ ");
    scanf("%f", &valorCompras);

    // Verificação do sexo e aplicação do desconto
    if (sexo == 'M' || sexo == 'm') {
        desconto = 0.05;  // 5% de desconto para homens
    } else if (sexo == 'F' || sexo == 'f') {
        desconto = 0.13;  // 13% de desconto para mulheres
    } else {
        printf("Sexo inválido. Sem desconto aplicado.\n");
        desconto = 0.0;   // Sem desconto se o sexo for inválido
    }

    // Cálculo do valor final com desconto
    valorFinal = valorCompras - (valorCompras * desconto);

    // Exibição do resultado
    printf("Nome: %s", nome);
    printf("Valor das compras com desconto: R$ %.2f\n", valorFinal);

    return 0;
}
