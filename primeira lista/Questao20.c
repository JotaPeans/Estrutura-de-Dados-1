/* 
    Função : Calculo IMC
    Autor :  João Pedro Fontes Ferreira
    Data :  28/03/2023
    Turma : Estruturas de dados 1 - Quinta-feira noite.
    Observações:  
*/

#include <stdio.h>
#include <math.h>

void inputFloat(float *num, char* message) {
    float n;
    printf("%s", message);
    scanf("%f", &n);
    
    *num = n;
}

int main() {
    float peso, altura, imc;
    printf("-----==+ Calculadora IMC +==-----\n");

    inputFloat(&peso, "Insira seu peso: ");
    inputFloat(&altura, "Insira sua altura em metros: ");

    imc = peso / ( altura * altura );

    if (imc < 18.5) {
        printf("IMC = %.2f Abaixo do peso!\n", imc);
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("IMC = %.2f Normal!\n", imc);
    } else if (imc >= 25 && imc <= 29.9) {
        printf("IMC = %.2f Acima do peso!\n", imc);
    } else {
        printf("IMC = %.2f Você está obeso, procure ajuda!\n", imc);
    }

    return 1;
}
