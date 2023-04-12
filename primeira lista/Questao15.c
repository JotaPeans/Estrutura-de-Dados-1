/* 
    Função : Cálculo de juros
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

void inputFloat(float *num, char* message) {
    float n;
    printf("%s", message);
    scanf("%f", &n);
    
    *num = n;
}


int main() {
    float capital,juros,jurosAc,acumulado;
    int anos;

    inputFloat(&capital, "Insira seu capital: ");
    inputFloat(&juros, "Rendimento anual: ");
    inputInt(&anos, "Insira a quantidade de anos: ");

    acumulado = capital * pow(1 + juros/100, anos);
    jurosAc = capital * pow(1 + juros/100, anos) - capital;

    printf("Acumulou R$ %0.2f de juros durante esses anos.\n",jurosAc);
    printf("O capital com o juros acumulado eh de: R$ %0.2f",acumulado);

    
    return 1;
}
