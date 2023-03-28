/* 
    Função : 
    Autor :  João Pedro Fontes Ferreira
    Data :  28/03/2023
    Observações:  
*/

#include <stdio.h>

void inputInt(int *num, char* message) {
    int n;
    printf("%s", message);
    scanf("%d", &n);
    
    *num = n;
}

int main() {
    int i, num, divisor;

    do {
        inputInt(&num, "Digite um numero (-1 para encerrar): ");

        for (i = 1; i <= num; i++) {
            if(num % i == 0) {
                printf("divisor de %d: %d\n", num, i);
            }
        }
        
    }
    while (num != -1);
    
    return 1;
}
