/* 
    Função : 
    Autor :  João Pedro Fontes Ferreira
    Data :  28/03/2023
    Observações:  
*/

#include <stdio.h>
#include <math.h>

double areaEsfera (float raio) {
    double pi = 3.14159265;
    double area = 4 * pi * pow(raio, 2);

    return area;
}

void inputFloat(float *num, char* message) {
    float n;
    printf("%s", message);
    scanf("%f", &n);
    
    *num = n;
}

int main() {
    double area;
    float raio;

    inputFloat(&raio, "Insira o raio da esfera: ");

    area = areaEsfera(raio);

    printf("A area da esfera de raio %f: %lf", raio, area);   
    
    return 1;
}
