#include"..\Header Files\Filme.h"

Filme::Filme() : Producoes(){
}

Filme::Filme(string Nome_da_producao, int duration): Producoes(Nome_da_producao) {
    this -> duration = duration;
}

int Filme::getTempo() {
    return duration;
}

void Filme::play() {
    cout << "NOME DO FILME: " << getNome_da_producao() << endl;
    cout << "DURACAO DO FILME: " << duration;
    cout << "-----------" << endl;
    cout << "NOME DOS DIRETORES(AS):" << endl;
    for (int i = 0; i < Diretores_size(); i++){
        Diretor diretor = getDiretor(i);
        cout << "NOME DO DIRETOR(A):" << diretor.getNome() << endl;
        cout << "NUMERO DE PRODUCOES DO DIRETOR(A):" << diretor.getNumero() << endl;
        cout << "########################################" << endl;
    }
    cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
    cout << "NOME DOS ATORES(AS):" << endl;
    for (int i = 0; i < Atores_size(); i++){
        Ator ator = getAtor(i);
        cout << "NOME DO ATOR(A):" << ator.getNome() << endl;
        cout << "TEMPO DE CARREIRA DO ATOR(A):" << ator.getTempo() << endl;
        cout << "########################################" << endl;
    }
}