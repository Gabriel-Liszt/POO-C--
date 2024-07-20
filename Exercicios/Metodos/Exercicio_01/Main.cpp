#include <iostream>
#include <string.h>
#include "Lampada.h"

int main(){
    Lampada lampada1;


    //pedir para o usuario informar os valores dos atributos
    std::cout << "Informe se a lampada esta acesa (1 para sim e 0 para nao): ";
    std::cin >> lampada1.estado;

    std::cout << "Informe a potencia da lampada: ";
    std::cin >> lampada1.potencia;

    std::cout << "Informe o preco da lampada: ";
    std::cin >> lampada1.preco;

    std::cout << "Informe a cor da lampada: ";
    std::cin >> lampada1.cor;

    //Chamando os metodos
    lampada1.ligar();
    lampada1.desligar();
    lampada1.estaLigada();
    lampada1.mostrar();
}