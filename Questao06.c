/* 
    Função : Cálculo 4 tipos diferentes de  media
    Autor :  João Pedro Fontes Ferreira
    Data :  28/03/2023
    Turma : Estruturas de dados 1 - Quinta-feira noite.
    Observações:  
*/

#include <stdio.h>
#include <math.h>

float calcularMediaAritmetica(float a, float b, float c, float d) {
    float mediaAritmetica = ( a + b + c + d ) / 4;

    return mediaAritmetica;
}

float calcularMediaHarmonica(float a, float b, float c, float d) {
    float mediaHarmonica = 4 / (( 1/a ) + ( 1/b ) + ( 1/c ) + ( 1/d ));

    return mediaHarmonica;
}

float calcularMediaGeometrica(float a, float b, float c, float d) {
    float mult = a * b * c * d;
    float mediaGeometrica = pow(mult, 0.25);
    //conversao da raiz quarta para potencia;
    // 0.25 pois se colocado 1/4 o calculo fica errado;

    return mediaGeometrica;
}

float calcularMediaQuadratica(float a, float b, float c, float d) {
    float mediaQuadratica = sqrt(( pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2) ) / 4);

    return mediaQuadratica;
}

void inputFloat(float *num, char* message) {
    float n;
    printf("%s", message);
    scanf("%f", &n);
    
    *num = n;
}

int main() {
    float a, b, c, d;

    float mediaAritmetica, mediaHarmonica, mediaGeometrica, mediaQuadratica;

    inputFloat(&a, "Digite o primeiro numero: ");
    inputFloat(&b, "Digite o segundo numero: ");
    inputFloat(&c, "Digite o terceiro numero: ");
    inputFloat(&d, "Digite o quarto numero: ");

    mediaAritmetica = calcularMediaAritmetica(a, b, c, d);
    mediaHarmonica = calcularMediaHarmonica(a, b, c, d);
    mediaGeometrica = calcularMediaGeometrica(a, b, c, d);
    mediaQuadratica = calcularMediaQuadratica(a, b, c, d);

    printf("Media aritmetica: %f\n", mediaAritmetica);
    printf("Media harmonica: %f\n", mediaHarmonica);
    printf("Media geometrica: %f\n", mediaGeometrica);
    printf("Media quadratica: %f\n", mediaQuadratica);

    
    return 1;
}
