#include <stdio.h>
#include <math.h>

int main()
{
    int mes, tempo;
    double montante, juros, aporte, total;
    scanf("%d", &mes);
    scanf("%lf %lf", &aporte, &juros);
    juros += 1;

    for (int i = 0; i < mes; i++)
    {
        tempo = i + 1;
        montante = aporte * pow(juros, tempo);
        total += montante;
        printf("Montante ao fim do mes %d: R$ %.2lf\n", i + 1, total);
    }

    return 0;
}