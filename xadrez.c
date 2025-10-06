#include <stdio.h>

int main() {
     
    // A torre move-se em linha reta (horizontal ou vertical).
    // Vamos simular 5 casas para a direita.
    int i; 
    int casasTorre = 5; 

    printf("Movimento da TORRE \n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n");

    // O bispo move-se na diagonal
    // Vamos simular 5 casas para cima e direita.
    int casasBispo = 5;
    int contador = 1;

    printf("Movimento do BISPO \n");
    while (contador <= casasBispo) {
        printf("Cima, Direita (%d)\n", contador);
        contador++;
    }

    printf("\n");

    // A rainha pode mover-se em qualquer direção
    // Vamos simular 8 casas para a esquerda
    int casasRainha = 8;
    int passo = 1;

    printf("Movimento da RAINHA \n");
    do {
        printf("Esquerda (%d)\n", passo);
        passo++;
    } while (passo <= casasRainha);

    printf("\n");

   
    printf("Simulação concluída!\n");

    return 0;
}
