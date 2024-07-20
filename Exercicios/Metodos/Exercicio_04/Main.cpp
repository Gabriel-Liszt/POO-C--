#include <iostream>
#include <string.h>
#include "JogoDaVelha.h"

int main(){
    int op;
    JogoDaVelha jogo;

    do{
        std::cout << "Digite 0 para sair: " << std::endl;
        std::cout << "Digite a linha e a coluna: ";
        int linha, coluna;
        std::cin >> linha >> coluna;

        std::cout << "Digite 1 para X ou 2 para O: ";
        std::cin >> jogo.jogadorAtual;
        if(jogo.jogadorAtual == "1")
            jogo.tabuleiro[linha][coluna] = "X";
        else{
            jogo.tabuleiro[linha][coluna] = "O";
        }
        
        jogo.MostrarTabuleiro();
    }while(op != 0);
}