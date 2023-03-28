/* 
    Função : 
    Autor :  João Pedro Fontes Ferreira
    Data :  28/03/2023
    Observações:  
*/

#include <stdio.h>

int ehPrimo(int num) {
    int i;

    if(num == 1 || num == 2) return 1;

    for(i = 3; i < num; i++) {
        if(num % i == 0) {
            return 0;
        }
    }

    return 1;
    
}

void inputInt(int *num, char* message) {
    int n;
    printf("%s", message);
    scanf("%d", &n);
    
    *num = n;
}

int main() {
    int numero, primo;

    inputInt(&numero, "Digite um numero: ");

    primo = ehPrimo(numero);

    if(primo) {
        printf("O numero %d eh primo", numero);
    }
    else {
        printf("O numero %d nao eh primo", numero);
    }

    
    return 1;
}
