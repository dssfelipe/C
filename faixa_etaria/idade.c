#include <stdio.h>

int main() {
    
    int idade;
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    
    switch(idade/10){
        case 0:
        case 1:
            if(idade < 13)
                printf("Crianca");
            else if(idade < 18)
                printf("Adolecente");
            else
                printf("Adulto");
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            if(idade < 65)
                printf("Adulto");
            else
                printf("Idoso");
        break;
        
        default:
            printf("idoso");
        break;
    }
    
    
    return 0;
}