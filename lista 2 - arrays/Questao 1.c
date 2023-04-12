/* 
    Função : Ler 10 números e exibir todos na tela;
    Autor :  João Pedro Fontes Ferreira
    Data :  10/04/2023
    Turma : Estruturas de dados 1 - Quinta-feira noite.
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
    int nums[10], num, i;
    for(i = 0; i < 10; i++) {
        inputInt(&num, "Insira um numero: ");
        nums[i] = num;
    }
    
    for(i = 0; i < 10; i++) {
        printf("nums[ %d ] => %d\n", i, nums[i]);
    }

    return 1;
}