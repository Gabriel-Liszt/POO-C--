#ifndef ALUNO_H
#define ALUNO_H
#include <iostream>
#include <string.h>

class Aluno {
    public:
        // Atributos da Classe
        std::string nome;
        std::string matricula;
        std::string curso;
        std::string disciplinas[3];
        double notas[3];

    // Metodos da classe
    void verificarAprovação(){
        for(int i = 0; i < 3; i++){
            if(notas[i] < 6){
                std::cout << "O aluno" << nome << "foi reprovado na disciplina" << disciplinas[i];
            }else{
                std::cout << "O aluno" << nome << "foi aprovado na disciplina" << disciplinas[i];
            }
        }
    }

    // Construtor da Classe
    Aluno(){
        nome = "";
        matricula = "";
        curso = "";
        disciplinas[0] = "";
        disciplinas[1] = "";
        disciplinas[2] = "";
    }
};
#endif