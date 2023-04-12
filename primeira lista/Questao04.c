/* 
    Função : Cálculo de produto notavel
    Autor :  João Pedro Fontes Ferreira
    Data :  28/03/2023
    Turma : Estruturas de dados 1 - Quinta-feira noite.
    Observações:  
*/

#include <stdio.h>
#include <math.h>

int calculaProdutoNotavelQuadrado(int x, int y) {
    int produtoNotavel;

    produtoNotavel = pow(x, 2) + pow(y, 2) + (2 * (x * y));

    return produtoNotavel;
}

void inputInt(int *num, char* message) {
    int n;
    printf("%s", message);
    scanf("%d", &n);
    
    *num = n;
}

int main() {
    int x, y, produtoNotavel;

    inputInt(&x, "Digite o valor pra X: ");
    inputInt(&y, "Digite o valor pra Y: ");

    produtoNotavel = calculaProdutoNotavelQuadrado(x, y);

    printf("%d", produtoNotavel);
    
    return 1;
}
