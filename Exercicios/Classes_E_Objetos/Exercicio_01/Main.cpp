#include <iostream>
#include <string>
#include "Lampada.h"
int main(){
    Lampada lampada1;

//fazer leitura dos atributos da lampada1
    std::cout << "Digite a cor da lampada: ";
    std::cin >> lampada1.cor;
    std::cout << "Digite a potencia da lampada: ";
    std::cin >> lampada1.potencia;
    std::cout << "Digite o preco da lampada: ";
    std::cin >> lampada1.preco;

    lampada1.mostrar();

    return 0;
}