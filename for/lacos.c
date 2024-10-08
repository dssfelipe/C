#include <stdio.h>

int main() {
    
    int a, b, c, i;
    a=1;
    b=2;
    
    printf("%d %d ", a, b); // Imprime os dois primeiros números

    for(i=3; i <= 100; i++){
        c=a+b;
        printf("%d ", c);
        a=b;
        b=c;
    }

    return 0;
}
