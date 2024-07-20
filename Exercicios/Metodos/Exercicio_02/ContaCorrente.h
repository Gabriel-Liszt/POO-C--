#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include <iostream>
#include <string.h>

class ContaCorrente {
    public:       
        int num;
        double deposito, saque, saldo, limite;
        bool especial;

    //metodos da classe
    void sacar(){
        if(saque > saldo){
            std::cout << "Saldo insuficiente para saque";
        }else{
            std::cout << "Saque realizado com sucesso";            
            saldo -= saque;
        }
    }

    void depositar(){
        saldo += deposito;
    }

    void ConsutarSaldo(){
        std::cout << "Saldo atual: "<< saldo;
    }

    void ChequeEspecial(){
        if(especial == true){
            if(saldo < 0){
                std::cout << "O cheque especial está sendo utilizado";
            }else{
                std::cout << "O cheque especial não está sendo utilizado";
            }
        }else{
            std::cout << "Conta comum";
        }
    }

    // Construtor da Classe
    ContaCorrente(){
        num = 0;
        saldo = 0.f;
        limite = 0.f;
        especial = false;
    }
};

#endif