/* 
    Função : Mostrar os n primeiros números de Fibonacci usando Arrays;
    Autor :  João Pedro Fontes Ferreira
    Data :  10/04/2023
    Turma : Estruturas de dados 1 - Quinta-feira noite.
    Observações:  
*/

#include <stdio.h>
#include <math.h>

void inputInt(int *num, char* message) {
    int n;
    printf("%s", message);
    scanf("%d", &n);
    
    *num = n;
}

int main() {
    int i, n;

    inputInt(&n, "Insira a quantidade (N) da sequencia de Fibonacci: ");

    int numeros_fib[n];

    for(i = 0; i <= n; i++) {
        if(i == 0) {
            numeros_fib[i] = 1;
        }
        else if(i == 1) {
            numeros_fib[i] = i;
        }
        else {
            numeros_fib[i] = numeros_fib[i - 1] + numeros_fib[i - 2];
        }
                
    }

    printf("---===+ SEQUENCIA +===---");
    for(i = 0; i < n; i++) {
        printf("%d\n", numeros_fib[i]);
    }

    return 1;
}