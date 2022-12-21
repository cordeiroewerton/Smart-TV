#include"..\Header Files\Streaming.h"

Streaming::Streaming():App(){
}

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
    cout << "\n--------FILMES--------" << endl;
    for (int i = 0; i < tam; i++){
        filmeaux = streaming.getFilme(i);
        cout << "NOME DO FILME:" << filmeaux.getNome_da_producao() << endl;
        cout << "DURACAO DO FILME:" << filmeaux.getTempo() << endl;
    }
    cout << "--------SERIES--------" << endl;
    tam = streaming.getSeriesTam();
    for (int i = 0; i < tam; i++){
        serieaux = streaming.getSerie(i);
        cout << "NOME DA SERIE:" << serieaux.getNome_da_producao() << endl;
        cout << "QUANTIDADE DE CAPITULOS:" << serieaux.getCaps() << endl;
    }
    return os;
}

void Streaming::run(){
    cout << *this;
}

void Streaming::runProducao(string NomeProducao) {
    for(int i = 0; i < Filmes.size(); i++){
        Filme filmeaux = Filmes.at(i);
        Serie serieaux = Series.at(i);
        if(filmeaux.getNome_da_producao() == NomeProducao){
            filmeaux.play();
        }
        else if(serieaux.getNome_da_producao() == NomeProducao){
            serieaux.play();
        }
    }
}

void Streaming::addDiretor(string NomeProducao, string NomeDoDiretor, int NumeroDeProducoes) {
    for(int i = 0; i < Filmes.size(); i++){
        Filme filmeaux = Filmes.at(i);
        Serie serieaux = Series.at(i);
        if(filmeaux.getNome_da_producao() == NomeProducao){
            filmeaux.adc_diretor(NomeDoDiretor,NumeroDeProducoes);
        }
        else if(serieaux.getNome_da_producao() == NomeProducao){
            serieaux.adc_diretor(NomeDoDiretor,NumeroDeProducoes);
        }
    }
}

void Streaming::addAtor(string NomeProducao, string NomeDoAtor, int Tempo_de_carreira) {
    for(int i = 0; i < Filmes.size(); i++){
        Filme filmeaux = Filmes.at(i);
        Serie serieaux = Series.at(i);
        if(filmeaux.getNome_da_producao() == NomeProducao){
            filmeaux.adc_ator(NomeDoAtor, Tempo_de_carreira);
        }
        else if(serieaux.getNome_da_producao() == NomeProducao){
            serieaux.adc_ator(NomeDoAtor,Tempo_de_carreira);
        }
    }
}

void Streaming::removDiretor(string NomeProducao, string NomeDoDiretor) {
    for(int i = 0; i < Filmes.size(); i++){
        Filme filmeaux = Filmes.at(i);
        Serie serieaux = Series.at(i);
        if(filmeaux.getNome_da_producao() == NomeProducao){
            filmeaux.remov_diretor(NomeDoDiretor);
        }
        else if(serieaux.getNome_da_producao() == NomeProducao){
            serieaux.remov_diretor(NomeDoDiretor);
        }
    }
}

void Streaming::removAtor(string NomeProducao, string NomeDoAtor) {
    for(int i = 0; i < Filmes.size(); i++){
        Filme filmeaux = Filmes.at(i);
        Serie serieaux = Series.at(i);
        if(filmeaux.getNome_da_producao() == NomeProducao){
            filmeaux.remov_ator(NomeDoAtor);
        }
        else if(serieaux.getNome_da_producao() == NomeProducao){
            serieaux.remov_ator(NomeDoAtor);
        }
    }
}