#include <stdio.h>
int main ()
{
	int numero, entrada;
	int resultado, i;

	scanf("%d", &numero);
	for (i = 0; i < numero; i++)
	{
        scanf("%d", &entrada);
        resultado = entrada - 2015;
	if (resultado > 0)
			printf("%d A.C.\n", resultado + 1);
	else if (resultado < 0)
			printf("%d D.C.\n", -resultado);
	else
			printf("1 A.C.\n");
		
	}
}