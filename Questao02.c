/* 
    Função : 
    Autor :  João Pedro Fontes Ferreira
    Data :  28/03/2023
    Observações:  
*/

#include <stdio.h>
#include <math.h>

// até R$ 1.302,00	7,5%
// de R$ 1.302,01 até R$ 2.571,29	9%
// de R$ 2.571,30 até R$ 3.856,94	12 %
// de R$ 3.856,95 até R$ 7,507,49	14%

float calculaDescontoINSS(float salario) {
    float porcentagem, desconto;
    int faixaSalarial, i;

    if(salario <= 1302) {
        faixaSalarial = 1;
    }
    else if(salario > 1302 && salario <= 2571.29) {
        faixaSalarial = 2;
    }
    else if(salario > 2571.29 && salario <= 3856.94) {
        faixaSalarial = 3;
    }
    else if(salario > 3856.94 && salario <= 750749) {
        faixaSalarial = 1;
    }

    for (i = 1; i < faixaSalarial+1; i++) {
        if(i == 1) {
            if(salario < 1302.00) {
                desconto += (( 7.5 / 100 ) * salario);
            }
            else {
                desconto += (( 7.5 / 100 ) * 1302.00);
            }
        }
        else if(i == 2) {
            if(salario > 2571.29) {
                desconto += (( 9 / 100 ) * ( 2571.29 - 1302.00 ));
            }
            else {
                desconto += (( 9 / 100 ) * ( salario - 1302.00 ));
            }
        }
        else if(i == 3) {
            if(salario > 3856.94) {
                desconto += (( 12 / 100 ) * ( 3856.94 - 2571.29 ));
            }
            else {
                desconto += (( 12 / 100 ) * ( salario - 2571.29 ));
            }
        }
        else if(i == 4) {
            if(salario > 7507.49) {
                desconto += (( 14 / 100 ) * ( 750749 - 3856.94 ));
            }
            else {
                desconto += (( 14 / 100 ) * ( salario - 3856.94 ));
            }
        }

    }

    return desconto;
}

void inputFloat(float *num, char* message) {
    float n;
    printf("%s", message);
    scanf("%f", &n);
    
    *num = n;
}

int main() {
    float salario, desconto;

    inputFloat(&salario, "Digite um salario: ");

    desconto = calculaDescontoINSS(salario);

    printf("%f\n", desconto);
    
    return 1;
}
