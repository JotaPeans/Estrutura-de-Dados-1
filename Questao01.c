/* 
    Função : 
    Autor :  João Pedro Fontes Ferreira
    Data :  28/03/2023
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
    int a, b;
    float h;
    inputInt(&a, "Digite um numero: ");
    inputInt(&b, "Digite outro numero: ");

    h = sqrt(pow(a, 2) + pow(b, 2));

    printf("%f", h);

    return 1;
}