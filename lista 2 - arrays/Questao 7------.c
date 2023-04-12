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
    int i, j, maior, menor, quantidade_menor = 0, numeros[100], soma_numeros = 0;
    float media;
    
    int* numeros_menor_media = malloc(sizeof(int));
    
    srand(time(NULL));

    for(i = 0; i < 100; i++) {
        numeros[i] = (rand() % 100);
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
            quantidade_menor++;
            numeros_menor_media = realloc(numeros_menor_media, quantidade_menor * sizeof(int));
        }

        //printf("Array => %d\n", numeros[i]);
    }

    for(i = 0; i < quantidade_menor; i++) {
        for(j = 0; j < 100; j++) {
            if(numeros[j] < media) {
                if(numeros[j] != numeros[j - 1]) {
                    numeros_menor_media[i] = numeros[j];
                    break;
                }
            }
        }
    }

    printf("\n\nMedia: %2.f\n", media);
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n\n", menor);

    for(i = 0; i < quantidade_menor; i++) {
        printf("Menor que media => %d\n", numeros_menor_media[i]);
    }

    return 1;
}