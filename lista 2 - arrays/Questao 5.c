/* 
    Função : Calcular a variância e o desvio-padrão de 20 temperaturas guardadas em um array (que foram digitadas pelo usuário);
    Autor :  João Pedro Fontes Ferreira
    Data :  10/04/2023
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

int main() {
    int i, temperaturas[20], temperatura;
    float variancia, desvio_padrao, media, soma_temperaturas, soma_p_variancia = 0;

    for(i = 0; i < 20; i++) {
        inputInt(&temperatura, "Insira uma temperatura: ");
        temperaturas[i] = temperatura;
        soma_temperaturas += temperatura;
    }

    media = soma_temperaturas / 20;

    for(i = 0; i < 20; i++) {
        soma_p_variancia += pow(temperaturas[i] - media, 2);
    }

    variancia = soma_p_variancia / 20;
    desvio_padrao = sqrt(variancia);

    printf("\nMedia: %.2f\n", media);
    printf("Variancia: %.2f\n", variancia);
    printf("Desvio padrao: %.2f\n\n", desvio_padrao);

    return 1;
}