#include <iostream>
#include <string.h>
#ifndef LIVROALUGUEL_H
#define LIVROALUGUEL_H

class LivroAluguel{

    public:
    std::string titulo;
    std::string autor;
    std::string genero;
    int ano_publicacao;
    double valor;
    bool disponivel;


    // Mostrar os dados do livro
    void mostrar(){
        std::cout << "O titulo do livro: " << titulo << std::endl;
        std::cout << "O nome do autor:" << autor << std::endl ;
        std::cout << "Genero do livro: " << genero << std::endl;
        std::cout << "Ano de publicacao: " << ano_publicacao << std::endl;
        std::cout << "Valor do livro: " << valor << std::endl;
        std::cout << "Disponivel: " << disponivel << std::endl;
    }
    
    // Criacao do construtor
    LivroAluguel(){
        titulo = "";
        autor = "";
        genero = "";
        ano_publicacao = 0;
        valor = 0.0;
        disponivel = true;
    }

};

#endif