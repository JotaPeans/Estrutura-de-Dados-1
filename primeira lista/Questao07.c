/* 
    Função : Cálculo de distancia entre dois pontos
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

int main() {
    int A[] = {0, 0};
    int B[] = {0, 0};

    float distanciaEntreDoisPontos;

    inputInt(&A[0], "Digite a primeira coordenada de A: ");
    inputInt(&A[1], "Digite a segunda coordenada de A: ");

    inputInt(&B[0], "Digite a primeira coordenada de B: ");
    inputInt(&B[1], "Digite a segunda coordenada de B: ");

    distanciaEntreDoisPontos = sqrt( pow(B[0] - A[0], 2) + pow(B[1] - A[1], 2) );

    printf("A distancia entre o ponto A e o ponto B: %f", distanciaEntreDoisPontos);
    
    return 1;
}
