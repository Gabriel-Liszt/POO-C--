#ifndef LAMPADA_H
#define LAMPADA_H
#include <iostream>
#include <string>

class Lampada{

    public:
    bool acesa;
    int potencia;
    float preco;
    std::string cor;

    //Criar metodo para mostrar os valores dos atributos
    void mostrar(){
        std::cout << "A lampada esta acesa? " << acesa << std::endl;
        std::cout << "A potencia da lampada e: " << potencia << std::endl;
        std::cout << "O preco da lampada e: " << preco << std::endl;
        std::cout << "A cor da lampada e: " << cor << std::endl;
    }

    //Fazer construtor para Lampada
    Lampada(){
        acesa = false;
        potencia = 0;
        preco = 0.0f;
        cor = "";
    }
};

#endif