/* 
    Função : Sequencia Fibonacci
    Autor :  João Pedro Fontes Ferreira
    Data :  28/03/2023
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

int fibonacci(int n) {
    double phi = ( 1 + sqrt(5) ) / 2; 
    return round( (pow(phi, n) - pow(-phi, -n)) / sqrt(5) );
}

int main() {
    int n, i, f;

    inputInt(&n, "Insira um numero inteiro");

    printf("Sequencia de Fibonacci ate %d:\n", n);

    i = 0;
    while (1) {
        f = fibonacci(i);
        if (f > n) {
            break;
        }
        printf("%d ", f);
        i++;
    }
    
    return 1;
}
