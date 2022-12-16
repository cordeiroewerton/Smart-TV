#include"..\Header Files\Producoes.h"

Producoes::Producoes(string Nome_da_producao) {
    this -> Nome_da_producao = Nome_da_producao;
}

void Producoes::setNome_da_producao(string Nome_da_producao) {
    this -> Nome_da_producao = Nome_da_producao;
}

string Producoes::getNome_da_producao() {
    return Nome_da_producao;
}

void Producoes::adc_ator(string Nome_do_ator, int Tempo_de_cadeira) {
    Ator *ator = new Ator(Nome_do_ator, Tempo_de_cadeira);
    Atores.push_back(*ator);
}

void Producoes::adc_diretor(string Nome_do_diretor, int numero_De_Producoes) {
    Diretor *diretor = new Diretor(Nome_do_diretor, numero_De_Producoes);
    Diretores.push_back(*diretor);
}

void Producoes::remov_ator(string Nome_do_ator) {
    for(int i = 0; i < Atores.size(); i++){
        Ator nome = Atores.at(i);
        if(Nome_do_ator == nome.getNome()){
            Atores.erase(Atores.begin() + (i-1));
        }
    }
}

void Producoes::remov_diretor(string Nome_do_diretor) {
    for(int i = 0; i < Diretores.size(); i++){
        Diretor nome = Diretores.at(i);
        if(Nome_do_diretor == nome.getNome()){
            Diretores.erase(Diretores.begin() + (i-1));
        }
    }
}

void Producoes::play() {

}