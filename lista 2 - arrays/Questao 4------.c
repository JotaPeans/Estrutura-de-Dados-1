/* 
    Função : Exibir os 50 primeiros números ímpares guardados em um array;
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
    int i, numero, maior, menor, quantidade_maior_media = 0, soma_numeros = 0;
    float media, quantidade_numeros;

    inputFloat(&quantidade_numeros, "Insira a quantidade de numeros: ");

    int numeros[ (int) quantidade_numeros ];

    for(i = 0; i < quantidade_numeros; i++) {
        inputInt(&numero, "Insira um numero: ");
        numeros[i] = numero;
    }

    for(i = 0; i < quantidade_numeros; i++) {
        soma_numeros += numeros[i];
    }

    media = soma_numeros / quantidade_numeros;
    maior = numeros[0];
    menor = numeros[(sizeof(numeros) / sizeof(int)) - 1]; //quantidade_numeros == ( sizeof(numeros) / sizeof(int) )

    for(i = 0; i < quantidade_numeros; i++) {
        if(numeros[i] > maior) {
            maior = numeros[i];
        }

        if(numeros[i] < menor) {
            menor = numeros[i];
        }

        if(numeros[i] > media) {
            quantidade_maior_media++;
        }
    }



    printf("\nMedia: %.2f\n", media);
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Quantidade de numero(s) maior(es) que a media: %d\n\n", quantidade_maior_media);

    return 1;
}