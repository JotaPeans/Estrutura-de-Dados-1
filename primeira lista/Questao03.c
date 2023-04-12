/* 
    Função : Cálculo de cubo de um número
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

int cubo(int num) {
    return pow(num, 3);
    //return num * num * num;
}

int main() {
    int num, powNum;

    inputInt(&num, "Digite um numero: ");

    powNum = cubo(num);
    printf("%d", powNum);
    
    return 1;
}
