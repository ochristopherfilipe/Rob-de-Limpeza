#include <stdio.h>
#include <math.h>

int main() {
    int largura, comprimento, area, tempo;

    printf("TimeCleaner: A Calculadora de Limpeza Eficiente\n");

    printf("Insira a largura da area a ser limpa: ");
    scanf("%d", &largura);

    printf("Insira o comprimento da area a ser limpa: ");
    scanf("%d", &comprimento);

    // Calcular a �rea do local
    area = largura * comprimento;
    printf("A area tem %d metros quadrados.\n", area);

    // Calcular o tempo que o rob� levar� para limp�-lo
    tempo = (int) ceil((double) area / 5.0);

    // Imprimir a sa�da
    printf("O roba de limpeza TimeCleaner levara %d minutos para limpar a sala.\n", tempo);

    return 0;
}

