#include <stdio.h>

int main(){

    printf("Movimento da torre:\n");
    printf("Direita\n");
    printf("Direita\n");
    printf("Cima\n");
    printf("Cima\n");

    printf("\n");


    //Movimento do cavalo

    printf("Movimento do cavalo:\n");

    // Quantidade de casas que o cavalo deve mover

    int casabaixo = 2;
    int casaesquerda = 1;

    // loop externo
    // Mover o cavalo duas casa para baixo

    for (int i = 0; i < casabaixo; i++) {
        printf("Baixo\n");
    }

    // Loop interno
    // Mover o cavalo uma casa para esquerda
    
    int contador = 0;
    while (contador < casaesquerda) {
        printf("Esquerda\n");
        contador++;
    }
    
      return 0;


}