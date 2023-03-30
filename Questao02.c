/* 
    Função : 
    Autor :  João Pedro Fontes Ferreira
    Data :  28/03/2023
    Observações:  
*/

#include <stdio.h>
#include <math.h>

float calculaDescontoINSS(float total, float descontoINSS) {
    float descontado;

    descontado = total - ( total * (descontoINSS / 100) );

    return descontado;
}

void inputFloat(float *num, char* message) {
    float n;
    printf("%s", message);
    scanf("%f", &n);
    
    *num = n;
}

void inputInt(int *num, char* message) {
    int n;
    printf("%s", message);
    scanf("%d", &n);
    
    *num = n;
}

int main() {
    float horaAula, descontoINSS, total, totalDescontado;
    int qntdAulas;

    inputFloat(&horaAula, "Digite o valor da hora aula: ");
    inputInt(&qntdAulas, "Digite a quantidade de aulas dadas: ");
    inputFloat(&descontoINSS, "Digite o valor do desconto INSS (em porcentagem): ");

    total = qntdAulas * horaAula;

    totalDescontado = calculaDescontoINSS(total, descontoINSS);

    printf("Salario final: R$%.2f", totalDescontado);
    
    return 1;
}
