#include <stdio.h>


// A torre se move em linha reta
void moverTorreRecursivo(int casas) {
    if (casas == 0)
        return; 

    printf("Direita\n"); 
    moverTorreRecursivo(casas - 1); 
}


// Dois loops aninhados simulando os deslocamentos
void moverBispoRecursivo(int casas) {
    if (casas == 0)
        return;

    // Loop externo controla o movimento vertical
    for (int i = 0; i < 1; i++) {
        printf("Cima\n");

        // Loop interno controla o movimento horizontal
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }

    
    moverBispoRecursivo(casas - 1);
}


// A rainha combina os movimentos da torre e do bispo
void moverRainhaRecursivo(int casas) {
    if (casas == 0)
        return;

    printf("Direita\n"); 
    printf("Cima\n");    

    moverRainhaRecursivo(casas - 1);
}



// O cavalo faz um movimento em L
void moverCavaloLoop(int movimentos) {
    for (int i = 1; i <= movimentos; i++) {
        for (int j = 1; j <= 2; j++) {

            if (j == 2) {
                printf("Cima\n");
                continue; 
            }

            if (i % 2 == 0) {
                printf("Direita\n");
            } else {
                printf("Cima\n");
            }

            // Interrompe o loop em condição específica
            if (i == movimentos && j == 2) {
                printf("Direita\n");
                break;
            }
        }
    }
}


// Função principal

int main() {
    int casas = 3;      
    int movimentos = 2; 

    printf("TORRE \n");
    moverTorreRecursivo(casas);

    printf("\n BISPO \n");
    moverBispoRecursivo(casas);

    printf("\n RAINHA \n");
    moverRainhaRecursivo(casas);

    printf("\n CAVALO \n");
    moverCavaloLoop(movimentos);

    return 0;
}