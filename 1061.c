#include <stdio.h>

int main ()
{

	int diaInicial, hrInicial, minInicial, SegInicial;
  	int DiaFinal, hrFinal, minFinal, SegFinal;
	int SegsComeco, SegsFinais;
	int tempoFinal;
	char string[10];

	scanf("%s %u", string, &diaInicial);
	scanf("%u : %u : %u", &hrInicial, &minInicial, &SegInicial);

	scanf("%s %u", string, &DiaFinal);
	scanf("%u : %u : %u", &hrFinal, &minFinal, &SegFinal);


	SegsComeco = SegInicial + minInicial*60 + hrInicial*60*60 + diaInicial*60*60*24;
	SegsFinais = SegFinal + minFinal*60 + hrFinal*60*60 + DiaFinal*60*60*24;


	tempoFinal = SegsFinais - SegsComeco;


	printf("%u dia(s)\n", tempoFinal/(60*60*24));
	tempoFinal = tempoFinal % (60*60*24);
	printf("%u hora(s)\n", tempoFinal/(60*60));
	tempoFinal = tempoFinal % (60*60);
	printf("%u minuto(s)\n", tempoFinal/(60));
	tempoFinal = tempoFinal % (60);
	printf("%u segundo(s)\n", tempoFinal);


}