#include"..\Header Files\Streaming.h"

Streaming::Streaming(string Nome, float version) : App(Nome, version){
}

void Streaming::operator<<(Filme filme) {
    Filmes.push_back(filme);
}

void Streaming::operator<<(Serie serie) {
    Series.push_back(serie);
}

void Streaming::operator>>(string Nome_da_producao){
    Filme *filmeaux = new Filme();
    Serie *serieaux = new Serie();
    for(int i = 0; i < Filmes.size(); i++){
        filmeaux = Filmes[i];
        if(filmeaux->getNome_da_producao() == Nome_da_producao){
            Filmes.erase(Filmes.begin() + (i-1));
        }
    }
    for(int i = 0; i < Series.size(); i++){
        filmeaux = Series[i];
        if(filmeaux->getNome_da_producao() == Nome_da_producao){
            Series.erase(Filmes.begin() + (i-1));
        }
    }
}

void Streaming::run(){

}