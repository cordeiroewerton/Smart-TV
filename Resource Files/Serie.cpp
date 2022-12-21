#include"..\Header Files\Serie.h"

Serie::Serie() : Producoes(){
}

Serie::Serie(string Nome_da_producao, int Numero_de_cap): Producoes(Nome_da_producao) {
    this -> Numero_de_cap = Numero_de_cap;
}

int Serie::getCaps() {
    return Numero_de_cap;
}

void Serie::play(){
    cout << "NOME DA SERIE: " << getNome_da_producao() << endl;
    cout << "QUANTIDADE DE CAPITULOS: " << Numero_de_cap;
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