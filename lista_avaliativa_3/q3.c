#include <stdio.h>
#include <string.h>

int validaPlaca(char *placa){
    int i, soma = 0;
    if(strlen(placa) == 8){
        for(i = 0; i < 6; i++){
            if(placa[i] >= 'A' && placa[i] <= 'Z')
                soma += placa[i] - 'A' + 10;
            else if(placa[i] >= '0' && placa[i] <= '9')
                soma += placa[i] - '0';
        }
        if(placa[6] != '-') return 0;
        if(placa[7] >= '0' && placa[7] <= '9')
            soma += placa[7] - '0';
        else if(placa[7] >= 'A' && placa[7] <= 'I')
            soma += placa[7] - 'A' + 1;
        else return 0;
        if(soma % 11 == 0) return 1;
    }
    return 0;
}

int diaDaSemana(char *dia){
    if(!strcmp(dia, "Segunda-feira")) return 1;
    if(!strcmp(dia, "Terca-feira")) return 2;
    if(!strcmp(dia, "Quarta-feira")) return 3;
    if(!strcmp(dia, "Quinta-feira")) return 4;
    if(!strcmp(dia, "Sexta-feira")) return 5;
    if(!strcmp(dia, "Sabado")) return 6;
    if(!strcmp(dia, "Domingo")) return 7;
    return 0;
}

int proibicaoRodizio(char *placa, char *dia){
    if(!validaPlaca(placa)) return 0;
    int diaSemana = diaDaSemana(dia);
    if(diaSemana == 0) return 0;
    if(diaSemana == 2 || diaSemana == 4 || diaSemana == 6){
        if(placa[6] == '-'){
            if(placa[7] == '0' || placa[7] == '1' || placa[7] == '2' || placa[7] == '3' || placa[7] == '4' || placa[7] == '5' || placa[7] == '6' || placa[7] == '7' || placa[7] == '8' || placa[7] == '9') return 1;
        }
    }
    return 0;
}

int main(){
    char placa[10], dia[20];
    scanf("%s", placa);
    scanf("%s", dia);
    if(proibicaoRodizio(placa, dia)) printf("Proibido\n");
    else printf("%s pode circular %s\n", &placa, &dia);
    return 0;
}
