/* 
    Função : Preencher um array de 100 elementos com elementos aleatórios (inteiros), calcular e exibir, a média, o maior, o menor e quantos (e quais são) os menores que a média.
    Autor :  João Pedro Fontes Ferreira
    Data :  10/04/2023
    Turma : Estruturas de dados 1 - Quinta-feira noite.
    Observações:  
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void inputInt(int *num, char* message) {
    int n;
    printf("%s", message);
    scanf("%d", &n);
    
    *num = n;
}

int main() {
    int i, maior, menor, qtd_menor_media = 0, numeros[100], soma_numeros = 0;
    float media;
    
    srand(time(NULL));

    for(i = 0; i < 100; i++) {
        numeros[i] = (rand() % 700 + 1);
        soma_numeros += numeros[i];
    }

    media = soma_numeros / 100;
    maior = numeros[0];
    menor = numeros[(sizeof(numeros) / sizeof(int)) - 1];

    for(i = 0; i < 100; i++) {
        if(numeros[i] > maior) {
            maior = numeros[i];
        }

        if(numeros[i] < menor) {
            menor = numeros[i];
        }

        if(numeros[i] < media) {
            qtd_menor_media++;
        }

    }

    printf("\n\nMedia: %2.f\n", media);
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Quantidade de valores menor que a media: %d\n", qtd_menor_media);
    printf("Numeros menores que a media: \n");

    for(i = 0; i < 100; i++) {
        if(numeros[i] < media) {
            printf("%d\n", numeros[i]);
        }
    }

    return 1;
}