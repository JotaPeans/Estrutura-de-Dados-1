/* 
    Função : Exibir os 50 primeiros números ímpares guardados em um array;
    Autor :  João Pedro Fontes Ferreira
    Data :  10/04/2023
    Turma : Estruturas de dados 1 - Quinta-feira noite.
    Observações:  
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeros[100], qtd_impar = 1, i;

    srand(time(NULL));

    for(i = 0; i < 100; i++) {
        numeros[i] = rand() % 100 + 1;
    }

    for(i = 0; i < (sizeof(numeros) / sizeof(int)); i++) {
        if(numeros[i] % 2 != 0 && qtd_impar <= 50) {
            printf("Impar N*%d: %d\n", qtd_impar, numeros[i]);
            qtd_impar++;
        }
    }

    return 1;
}