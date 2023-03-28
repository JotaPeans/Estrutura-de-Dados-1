/* 
    Função : 
    Autor :  João Pedro Fontes Ferreira
    Data :  28/03/2023
    Observações:  
*/

#include <stdio.h>
#include <math.h>

int calculaProdutoNotavelCubo(int x, int y) {
    int produtoNotavel;

    produtoNotavel = pow(x, 3) + pow(y, 3) + (3 * (pow(x, 2) * y)) + (3 * (x * pow(y, 2)));

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

    produtoNotavel = calculaProdutoNotavelCubo(x, y);

    printf("%d", produtoNotavel);
    
    return 1;
}
