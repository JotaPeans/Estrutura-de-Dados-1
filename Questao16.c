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
    char months[][12] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Nobembro", "Dezembro"};
    int month, i;

    inputInt(&month, "Insira o numero de um mes: ");

    if(month <= 0 || month > 12) {
        printf("Mes Invalido");
        return 0;
    }

    printf("%s", months[month - 1]);
    
    return 1;
}
