/* 
    Função : Conversão de graus em radianos
    Autor :  João Pedro Fontes Ferreira
    Data :  28/03/2023
    Turma : Estruturas de dados 1 - Quinta-feira noite.
    Observações:  
*/

#include <stdio.h>

float converteGrauRadiano(float angulo) {
    double pi = 3.14159265;
    float R;

    R = angulo * ( pi / 180 );

    return R;
};

void inputFloat(float *num, char* message) {
    float n;
    printf("%s", message);
    scanf("%f", &n);
    
    *num = n;
}

int main() {
    float angulo, randians;

    inputFloat(&angulo, "Digite um angulo (em graus): ");

    randians = converteGrauRadiano(angulo);

    printf("O angulo %f em randianos eh: %f", angulo, randians);
    
    return 1;
}
