#ifndef SMART_TV_STREAMING_H
#define SMART_TV_STREAMING_H
#include "App.h"
#include "Filme.h"
#include "Serie.h"

class Streaming: public App{
private:
    vector <Filme> Filmes;
    vector <Serie> Series;
public:
    Streaming();
    Streaming(string Nome, float version);
    void run() override;
    void operator<<(Filme filme);
    void operator<<(Serie serie);
    void operator>>(string Nome_da_producao);
    int getFilmesTam();
    int getSeriesTam();
    Filme getFilme(int i);
    Serie getSerie(int i);
    void runProducao(string NomeProducao);
    void addDiretor(string NomeProducao, string NomeDoDiretor, int NumeroDeProducoes);
    void addAtor(string NomeProducao, string NomeDoAtor, int Tempo_de_carreira);
    void removDiretor(string NomeProducao, string DiretorNome);
    void removAtor(string NomeProducao, string AtorNome);
};

#endif