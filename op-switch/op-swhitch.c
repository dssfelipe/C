#include <stdio.h>

int main() {
    int op;
    int num1, num2, result;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Operações: \n1 = +\n2 = -\n3 = *\n4 = /\n\n");

    printf("Escolha a operação, usando a numeração de 1 a 4: ");
    scanf("%d", &op);

    switch (op) {
        case 1:
            result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            break;

        case 2:
            result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            break;

        case 3:
            result = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, result);
            break;

        case 4:
            if (num2 == 0) {
                printf("Impossível dividir por 0!\n");
            } else {
                result = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, result);
            }
            break;

        default:
            printf("Valor indisponível, escolha de 1 a 4!\n");
    }

    return 0;
}
