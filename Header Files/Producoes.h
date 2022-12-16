#ifndef SMART_TV_PRODUCOES_H
#define SMART_TV_PRODUCOES_H

#include <vector>
#include "Ator.h"
#include "Diretor.h"

class Producoes{
private:
    string Nome_da_producao;
    vector<Ator> Atores;
    vector<Diretor> Diretores;
public:
    Producoes(string Nome_da_producao);
    void setNome_da_producao(string Nome_da_producao);
    string getNome_da_producao();
    void adc_ator(string Nome_do_ator, int Tempo_de_cadeira);
    void adc_diretor(string Nome_do_diretor, int numero_De_Producoes);
    void remov_ator(string Nome_do_ator);
    void remov_diretor(string Nome_do_diretor);
    int Atores_size();
    int Diretores_size();
    Ator getAtor(int i);
    Diretor getDiretor(int i);
    virtual void play();
};

#endif //SMART_TV_PRODUCOES_H
