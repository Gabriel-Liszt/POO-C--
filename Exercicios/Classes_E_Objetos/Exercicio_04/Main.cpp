#include <iostream>
#include <string.h>
#include "LivroAluguel.h"

int main(){
    LivroAluguel livro;

    // Ler os dados do livro
    std::cout << "Digite o titulo do livro: ";          
    std::getline(std::cin, livro.titulo);

    std::cout << "Digite o nome do autor do livro: ";
    std::getline(std::cin, livro.autor);

    std::cout << "Digite o genero do livro: ";
    std::getline(std::cin, livro.genero);

    std::cout << "Digite o ano de publicacao do livro: ";
    std::cin >> livro.ano_publicacao;

    std::cout << "Digite o valor do livro: ";
    std::cin >> livro.valor;

    std::cout << "Digite se o livro esta disponivel (1 - Sim, 0 - Nao): ";
    std::cin >> livro.disponivel;

    // Mostrar os dados do livro
    livro.mostrar();
}