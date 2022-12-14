#include"..\Header Files\Diretor.h"

Diretor::Diretor(string Nome, int numero_De_Producoes) : Pessoa(Nome){
	this -> numero_De_Producoes = numero_De_Producoes;
}

void Diretor::setNumero(int numero_De_Producoes){
	this -> numero_De_Producoes = numero_De_Producoes;
}

int Diretor::getNumero(){
	return numero_De_Producoes;
}
