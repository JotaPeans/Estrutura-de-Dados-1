/* 
    Função : Cálculo numero de arranjos de objetos distintos
    Autor :  João Pedro Fontes Ferreira
    Data :  28/03/2023
    Turma : Estruturas de dados 1 - Quinta-feira noite.
    Observações:  
*/

#include <stdio.h>
#include <math.h>

double arranjos (int n, int r){
    int i;
    double fatorialN = 1.0, fatorialNR = 1.0;
    
    for(i=1; i<=n; i++){
        fatorialN *= i;
    }

    for(i=1; i<= n-r; i++){
        fatorialNR *= i;
    }

    return fatorialN / fatorialNR;
}

void inputInt(int *num, char* message) {
    int n;
    printf("%s", message);
    scanf("%d", &n);
    
    *num = n;
}

int main() {
    int n, r;

    inputInt(&n, "Insira o numero total de objetos (n):");

    inputInt(&r, "Insira o numero de objetos escolhidos (r): ");

    if(r > n)
        printf("r nao pode ser maior que n!");
    else
       printf("O numero de arranjos de %d objetos escolhidos com %d de cada vez eh: %g", n, r, arranjos(n, r));

    
    return 1;
}
