#include <stdio.h>

// Função recursiva para movimento da Torre
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimento do Bispo
void moverBispo(int casas) {
    if (casas <= 0) return;
    printf("Cima, Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para movimento da Rainha
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função para movimento do Cavalo com loops avançados
void moverCavalo() {
    // Variáveis de controle combinadas
    for (int vertical = 0, horizontal = 0; vertical < 2 || horizontal < 1; ) {
        // Controle preciso dos passos usando múltiplas condições
        if (vertical < 2) {
            printf("Cima\n");
            vertical++;
            
            // Atualiza condição horizontal quando completa os passos verticais
            if (vertical == 2 && horizontal == 0) {
                printf("Direita\n");
                horizontal++;
            }
        }
        else if (horizontal < 1) {
            printf("Direita\n");
            horizontal++;
        }
        
        // Condição adicional para demonstração de controle avançado
        if (vertical == 1 && horizontal == 0) {
            continue; // Continua para o próximo passo vertical
        }
    }
}
// Função para movimento do Bispo com loops aninhados
void moverBispoLoops(int casas) {
    // Loop externo controla movimento vertical (subida)
    for (int vertical = 0; vertical < casas; vertical++) {
        printf("Cima\n");
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Direita\n");
        }
    }
}

int main() {
    // Movimento da Torre com recursão (5 casas para a direita)
    printf("Movimento da Torre (5 casas para a direita) - Recursivo:\n");
    moverTorre(5);
    
    // Movimento do Bispo com recursão (5 casas na diagonal)
    printf("\nMovimento do Bispo (5 casas na diagonal cima/direita) - Recursivo:\n");
    moverBispo(5);
    
    // Movimento da Rainha com recursão (8 casas para a esquerda)
    printf("\nMovimento da Rainha (8 casas para a esquerda) - Recursivo:\n");
    moverRainha(8);
    
    // Movimento do Cavalo corrigido (2 cima, 1 direita)
    printf("\nMovimento do Cavalo (2 casas para cima e 1 para a direita):\n");
    moverCavalo();
    
    // Movimento do Bispo com loops aninhados corrigido (5 casas na diagonal)
    printf("\nMovimento do Bispo (5 casas na diagonal cima/direita) - Loops Aninhados:\n");
    moverBispoLoops(5);
    
    return 0;
}
