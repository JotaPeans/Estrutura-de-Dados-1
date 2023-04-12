/* 
    Função : Ler n notas e calcular a média. O tamanho n é inserido pelo usuário;
    Autor :  João Pedro Fontes Ferreira
    Data :  10/04/2023
    Turma : Estruturas de dados 1 - Quinta-feira noite.
    Observações:  
*/

#include <stdio.h>

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
    int nota, i, soma_notas = 0;
    float media, numero_notas;

    inputFloat(&numero_notas, "Insira a quantidade de notas: ");

    int notas[ (int) numero_notas ];

    for(i = 0; i < numero_notas; i++) {
        inputInt(&nota, "Insira uma nota: ");
        notas[i] = nota;
    }

    for(i = 0; i < numero_notas; i++) {
        soma_notas += notas[i];
    }

    media = soma_notas / numero_notas;

    printf("%.2f", media);

    return 1;
}