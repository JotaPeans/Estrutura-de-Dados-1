/* 
    Função : Cálculo numero de arranjos de objetos distintos
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
    int n = 1;  
    float pago, desconto, valor;

    printf("-----==+Concessionaria FERMAT+==-----\n\n");

    while (n != 0) {  
        inputFloat(&pago, "insira o valor do veiculo (0 para encerrar)\n");

        if (pago == 0) {  
            printf("Programa encerrado.\n");
            return 0;
        }

        printf("Para conseguir desconto, informe o tipo de combustivel usado:\n");

        inputInt(&n, "[ 1 ] - Gasolina\n[ 2 ] - Alcool\n[ 3 ] - Diesel\n");

        switch (n) {
            case 1:
                desconto = 0.28 * pago;
                break;
            case 2:
                desconto = 0.22 * pago;
                break;
            case 3:
                desconto = 0.12 * pago;
                break;
            default:
                printf("\nOpcao invalida!\n\n");
                continue;  
        }

        valor = pago - desconto;
        printf("Desconto total eh de: R$ %.2f e o valor que voce vai pagar eh de: R$ %.2f\n\n", desconto, valor);
    }
    
    return 1;
}
