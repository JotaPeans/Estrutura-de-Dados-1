/* 
    Função : 
    Autor :  João Pedro Fontes Ferreira
    Data :  28/03/2023
    Observações:  
*/

#include <stdio.h>
#include <stdlib.h>

float velocidade_media(float distancia, float tempo){
    float vm;

    vm = distancia / tempo;

    return vm;
}

void inputFloat(float *num, char* message) {
    float n;
    printf("%s", message);
    scanf("%f", &n);
    
    *num = n;
}

int main(){
    float dist, horas, vm;

    inputFloat(&dist, "Digite a distancia percorrida (em Km): ");
    inputFloat(&horas, "Digite o tempo gasto (em horas): ");

    vm = velocidade_media(dist, horas);

    printf("A velocidade media do percurso: %.2f km/h\n",  vm);
    
    return 1;
}

