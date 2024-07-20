#include <iostream>
#include <string.h>
#include "Aluno.h"

int main(){
    Aluno aluno1;

    // Pegando os valores para o objeto aluno1
    std::cout << "Digite o nome do aluno: ";
    std::cin >> aluno1.nome;

    std::cout << "Digite a matricula do aluno: ";
    std::cin >> aluno1.matricula;

    std::cout << "Digite o curso do aluno: ";
    std::cin >> aluno1.curso;

    for(int i = 0; i < 3; i++){
        std::cout << "Digite o nome da disciplina " << i + 1 << ": ";
        std::cin >> aluno1.disciplinas[i];

        std::cout << "Digite a nota da disciplina " << i + 1 << ": ";
        std::cin >> aluno1.notas[i];
    }   

    // Verificando se o aluno foi aprovado ou reprovado 
    aluno1.verificarAprovação();

}