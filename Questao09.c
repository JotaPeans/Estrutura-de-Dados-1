/* 
    Função : 
    Autor :  João Pedro Fontes Ferreira
    Data :  28/03/2023
    Observações:  
*/

#include <stdio.h>
#include <math.h>

void intervaloTempo(int T1[], int T2[]) {
    float hora1 = T1[0];
    float minuto1 = T1[1];
    float hora2 = T2[0];
    float minuto2 = T2[1];

    float tempo1, tempo2, diffTempo;
    int diffHora, diffminuto, tempoInteiro, minutosInteiro;

    tempo1 = hora1 + (minuto1 / 60);
    tempo2 = hora2 + (minuto2 / 60);

    diffTempo = fabs(tempo1 - tempo2);

    tempoInteiro = trunc(diffTempo);
    minutosInteiro = trunc((diffTempo - tempoInteiro) * 60);

    if(minutosInteiro < 10) {
        printf("Intervalo de tempo => %d:0%d", tempoInteiro, minutosInteiro);
    }
    else {
        printf("Intervalo de tempo => %d:%d", tempoInteiro, minutosInteiro);
    }
}

int main() {
    int hora1, minuto1;
    int hora2, minuto2;

    int T1[2];
    int T2[2];

    printf("Insira uma hora no formato hh:mm\n");
    scanf("%d:%d", &hora1, &minuto1);

    printf("Insira outra hora no formato hh:mm\n");
    scanf("%d:%d", &hora2, &minuto2);

    T1[0] = hora1;
    T1[1] = minuto1;
    T2[0] = hora2;
    T2[1] = minuto2;

    intervaloTempo(T1, T2);
    
    return 1;
}
