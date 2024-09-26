#include <stdio.h>

int main() {

    float salario1, salario2, salario3, media, soma;

    printf ("\nInforme o primeiro salario: ");
    scanf ("%f", &salario1);
    printf ("\nInforme o segundo salario: ");
    scanf ("%f", &salario2);
    printf ("\nInforme o terceiro salario: ");
    scanf ("%f", &salario3);
    
    soma= (salario1 + salario2 + salario3);
    media= (soma/3);

    printf ("A média salario dos três meses é: %.2f\n", media);
    



    return 0;
}