#ifndef JOGODAVELHA_H
#define JOGODAVELHA_H
#include <iostream>
#include <string.h>

class JogoDaVelha{
    public:
        std::string tabuleiro[3][3];
        std::string jogadorAtual;

        // metodos da Classe

        void MostrarTabuleiro(){  
         std::cout << "  0 1 2" << std::endl;
        for (int i = 0; i < 3; ++i) {
            std::cout << i << " ";
            for (int j = 0; j < 3; ++j) {
                std::cout << tabuleiro[i][j];
                if (j < 2) std::cout << "|";
            }
            std::cout << std::endl;
            if (i < 2) std::cout << "  -----" << std::endl;
        }
        }

        //construtor da classe
        JogoDaVelha(){

        }
};

#endif