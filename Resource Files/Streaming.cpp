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
    for(int i = 0; i < Filmes.size(); i++){
        Filme filmeaux = Filmes.at(i);
        if(filmeaux.getNome_da_producao() == Nome_da_producao){
            Filmes.erase(Filmes.begin() + (i-1));
        }
    }
    for(int i = 0; i < Series.size(); i++){
        Serie serieaux = Series.at(i);
        if(serieaux.getNome_da_producao() == Nome_da_producao){
            Series.erase(Series.begin() + (i-1));
        }
    }
}

int Streaming::getFilmesTam() {
    return Filmes.size();
}

int Streaming::getSeriesTam() {
    return Series.size();
}

Filme Streaming::getFilme(int i){
    return Filmes[i];
}

Serie Streaming::getSerie(int i){
    return Series[i];
}

ostream & operator<<(ostream & os, Streaming & streaming){ //
    int tam = streaming.getFilmesTam();
    Filme filmeaux;
    Serie serieaux;
    cout << "--------FILMES--------" << endl;
    for (int i = 0; i < tam; i++){
        filmeaux = streaming.getFilme(i);
        cout << "NOME DO FILME:" << filmeaux.getNome_da_producao() << endl;
    }
    cout << "--------SERIES--------" << endl;
    tam = streaming.getSeriesTam();
    for (int i = 0; i < tam; i++){
        serieaux = streaming.getSerie(i);
        cout << "NOME DO FILME:" << serieaux.getNome_da_producao() << endl;
    }
    return os;
}

void Streaming::run(){
    cout << *this;
}