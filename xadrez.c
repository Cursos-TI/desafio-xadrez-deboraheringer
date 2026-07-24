#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// 1. TORRE: Função recursiva (5 casas para a Direita)
void MoverTorre(int passos) {
    if (passos > 0) {
        printf("Direita \n"); 
        MoverTorre(passos - 1);  
    }
}

// 2.BISPO
void MoverBispo(int passos) {
    if (passos > 0) {
        for (int v = 0; v < 1; v++) {
            printf("Cima\n");
            for (int h = 0; h < 1; h++) {
                printf("Direita\n");
            }
        }
        MoverBispo(passos - 1); 
    }
}

// 3. RAINHA: Função recursiva (8 casas para a Esquerda)
void MoverRainha(int passos) {
    if (passos > 0) {
        printf("Esquerda \n");
        MoverRainha(passos - 1); 
    }
}

int main() {
    const int PASSOS_TORRE = 5;
    const int PASSOS_BISPO = 5;
    const int PASSOS_RAINHA = 8;
    const int PASSOS_CAVALO = 3;

    // 1. MOVIMENTAÇÃO DA TORRE
    printf("\n--- Movimentação da Torre ---\n");
    MoverTorre(PASSOS_TORRE);

    // 2. MOVIMENTAÇÃO DO BISPO
    printf("\n--- Movimentação do Bispo ---\n");
    MoverBispo(PASSOS_BISPO);

    // 3. MOVIMENTAÇÃO DA RAINHA
    printf("\n--- Movimentação da Rainha ---\n");
    MoverRainha(PASSOS_RAINHA);

    // 3. MOVIMENTAÇÃO DO CAVALO
    printf("\n--- Movimentação do Cavalo ---\n");
    for (int i = 0, j = 0; i < PASSOS_CAVALO; i++) {
        // Etapa 1: Subida vertical (2 casas para Cima)
        if (i < 2) {
            printf("Cima\n");
            continue; // Pula o resto do bloco e força a próxima iteração do 'for'
        }

        // Etapa 2: Curva horizontal (1 casa para a Direita)
        while (j < 1) {
            printf("Direita\n");
            j++;
            break; // Interrompe o loop 'while' imediatamente após a execução
        }
    }

    return 0;
}
