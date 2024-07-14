#ifndef LIVRO_H
#define LIVRO_H
#include <iostream>
#include <string>   

class Livro{
    public:
    std::string titulo, autor, genero; 
    int ano_publicacao;

    //Metodo para mostrar os  valores dos atributos.
    void mostrar(){
        std::cout << "O titulo do livro eh: "<< titulo << std::endl;
        std::cout << "O nome do autor do livrp eh: "<< autor << std::endl;
        std::cout << "O genero do livro eh: " << genero << std::endl;
        std::cout << "O ano de publicacao do livro eh: " << ano_publicacao<< std::endl;
    }

    //Construtor da classe Livro.
    Livro(){
        //corpo do construtor
        ano_publicacao = 0;
        titulo = "";
        autor = "";
        genero = "";
    }
};

#endif