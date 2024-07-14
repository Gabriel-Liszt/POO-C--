#include <iostream>
#include <string.h>
#ifndef LIVROVENDA_H
#define LIVROVENDA_H

class LivroVenda{
    public:
    std::string titulo;
    std::string autor;
    std::string genero;
    int ano_publicacao;
    double valor;

    // Mostar os dados do livro
    void mostrar(){
        std::cout << "O titulo do livro: " << titulo << std::endl;
        std::cout << "O nome do autor:" << autor << std::endl ;
        std::cout << "Genero do livro: " << genero << std::endl;
        std::cout << "Ano de publicacao: " << ano_publicacao << std::endl;
        std::cout << "Valor do livro: " << valor << std::endl;
    }

    // Construtor
    LivroVenda(){
        titulo = "";
        autor = "";
        genero = "";
        ano_publicacao = 0;
        valor = 0.0;
    }
};

#endif