
#include <iostream>
#include <string.h>
#include "Livro.h"

int main(){
    Livro livro1;
    
    //Atribuindo valores aos atributos do objeto livro1.
    std::cout <<"Digite o titulo do livro: ";
    std::getline(std::cin ,livro1.titulo);

    std::cout <<"Digite o nome do autor do livro: ";
    std::getline(std::cin, livro1.autor);

    std::cout <<"Digite o genero do livro: ";
    std::getline(std::cin,livro1.genero);

    std::cout <<"Digite o ano de publicacao do livro: ";
    std::cin >> livro1.ano_publicacao;

    //Mostrando os valores dos atributos do objeto livro1.
    livro1.mostrar();
    return 0;
}