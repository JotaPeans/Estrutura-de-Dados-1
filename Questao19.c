/* 
    Função : Tempo necessário para uma massa ficar menor doq 0,05g
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
    float massaInicial, massaAtual;
    float tempo = 0;

    inputFloat(&massaInicial, "Insira a massa incial do material radioativo em gramas: ");

    massaAtual = massaInicial;
    while (massaAtual >= 0.05) {
        massaAtual /= 2;
        tempo += 50;
    }

    printf("Tempo necessario para a massa se tornar menor que 0.05 gramas são aproximadamente: %.2f segundos.\n", tempo);

    printf("Tempo necessario aproximadamente em minutos: %.2f minutos\n", ( tempo/60.0 ));
    
    return 1;
}
