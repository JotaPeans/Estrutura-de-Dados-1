/* 
    Função : Cálculo somatorio
    Autor :  João Pedro Fontes Ferreira
    Data :  28/03/2023
    Turma : Estruturas de dados 1 - Quinta-feira noite.
    Observações:  
*/

#include <stdio.h>

int somatorio(int num) {
    int i;
    int soma = 0;

    for(i = 0; i <= num; i++) {
        soma += i;
    }

    return soma;
}

void inputInt(int *num, char* message) {
    int n;
    printf("%s", message);
    scanf("%d", &n);
    
    *num = n;
}

int main() {
    int num, soma;

    inputInt(&num, "digite um numero: ");

    soma = somatorio(num);

    printf("O somatorio eh: %d", soma);
    
    return 1;
}
