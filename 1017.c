#include <stdio.h>

int main() {
    int tempo, velocidade;
    double litros;

    scanf("%d %d", &tempo, &velocidade);

    double distancia = tempo * velocidade;

    litros = distancia / 12;

    printf("%.3lf\n", litros);

    return 0;
}