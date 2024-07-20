#ifndef LAMPADA_H
#define LAMPADA_H
#include <iostream>
#include <string.h>

class Lampada {
    public:
        //Atributos da Classe
        bool estado;
        int potencia;
        float preco;
        std::string cor;

    //Metodos da Classe
    void mostrar(){
        std::cout << "A lampada esta acesa? " << estado << std::endl;
        std::cout << "A potencia da lampada e: " << potencia << std::endl;
        std::cout << "O preco da lampada e: " << preco << std::endl;
        std::cout << "A cor da lampada e: " << cor << std::endl;
    }

    void ligar(){
        estado =  true;
    }

    void desligar(){
        estado = false;
    }
    
    bool estaLigada(){
        return estado;
    }

    //Construtor da Classe
    Lampada(){
        estado = false;
        potencia = 0;
        preco = 0.0f;
        cor = "";
    }
};

#endif