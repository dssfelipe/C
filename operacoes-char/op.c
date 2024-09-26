#include <stdio.h>

int main() {
    int a,b;
    char op;
    
    printf("Escolha a sua operação entre: *, +, - ou /: ");
    scanf("%s", &op);
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    
    if(op=='*')
        printf("O resultado da multiplicacao de %d * %d eh %d", a,b,a*b);
    else if(op=='+')
        printf("O resultado da divisao de %d + %d eh %d", a,b,a+b);
    else if(op=='-')
        printf(" resultado da soma de  %d - %d eh %d", a,b,a-b);
    else if(op=='/' && b == 0)
        printf("Valor igual a 0, invalido");
   else if(op=='/' && b > 0)
        printf("O resultado da subtracao de %d / %d eh %d", a,b,a/b);    
        
    

    return 0;
}