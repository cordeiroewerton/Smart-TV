#include"..\Header Files\Pessoa.h"

Pessoa::Pessoa(string Nome){
	this -> Nome = Nome;
}

void Pessoa::setNome(string Nome){
	this -> Nome = Nome;
}

string Pessoa::getNome(){
	return Nome;
}
