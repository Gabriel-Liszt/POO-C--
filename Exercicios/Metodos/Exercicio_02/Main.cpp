#include <iostream>
#include <string.h>
#include "ContaCorrente.h"

int main(){
    ContaCorrente conta1;
    int op;
    
    // Peganado os valores do usuario
    std::cout << "Digite o numero da conta: ";
    std::cin >> conta1.num;

    std::cout << "Digite o saldo da conta: ";
    std::cin >> conta1.saldo;

    std::cout << "Digite o limite da conta: ";
    std::cin >> conta1.limite;

    std::cout << "Digite 1 para conta especial ou 0 para conta comum: ";
    std::cin >> conta1.especial;

    // Mostrar qual operação o usuario deseja fazer
    do{
        
        std::cout << "Digite 1 para sacar, 2 para depositar, 3 para consultar saldo, 4 para verificar se o cheque especial esta sendo utilizado ou 0 para sair: ";
        std::cin >> op;

        switch(op){
            case 1:
                std::cout << "Digite o valor do saque: ";
                std::cin >> conta1.saque;
                conta1.sacar();
                break;
            case 2:
                std::cout << "Digite o valor do deposito: ";
                std::cin >> conta1.deposito;
                conta1.depositar();
                break;
            case 3:
                conta1.ConsutarSaldo();
                break;
            case 4:
                conta1.ChequeEspecial();
                break;
            case 0:
                std::cout << "Saindo...";
                break;
            default:
                std::cout << "Opcao invalida";
                break;
        }
    }while(op != 0);  
}