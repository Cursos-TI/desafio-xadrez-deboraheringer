#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    const int PASSOS_TORRE = 5;
    const int PASSOS_BISPO = 5;
    const int PASSOS_RAINHA = 8;
    const int PASSOS_CAVALO = 3;

    // 1. MOVIMENTAÇÃO DA TORRE (Uso do laço 'for')
    printf("--- Movimentação da Torre ---\n");
    for (int i = 1; i <= PASSOS_TORRE; i++) {
        printf("Direita\n");
    }

    // 2. MOVIMENTAÇÃO DO BISPO (Uso do laço 'while')
    printf("\n--- Movimentação do Bispo ---\n");
    int passoBispo = 1;
    while (passoBispo <= PASSOS_BISPO) {
        printf("Cima, Direita\n");
        passoBispo++; 
    }

    // 3. MOVIMENTAÇÃO DA RAINHA (Uso do laço 'do-while')
    printf("\n--- Movimentação da Rainha ---\n");
    int passoRainha = 1;
    do {
        printf("Esquerda\n");
        passoRainha++; 
    } while (passoRainha <= PASSOS_RAINHA);

    // 3. MOVIMENTAÇÃO DO CAVALO (Uso do laço 'for' e 'while')
    printf("\n--- Movimentação do Cavalo ---\n");
    int passoCavalo = 1;
    while (passoCavalo<=PASSOS_CAVALO){
        for (passoCavalo; passoCavalo < PASSOS_CAVALO; passoCavalo++){
            printf("Baixo\n");
        }
        printf("Esquerda\n");
        passoCavalo++;

    }

    return 0;
}
