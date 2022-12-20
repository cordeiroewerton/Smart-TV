#include"..\Header Files\Ator.h"

Ator::Ator() : Pessoa(){

}

Ator::Ator(string Nome, int tempo_De_Carreira) : Pessoa(Nome){
	this -> tempo_De_Carreira = tempo_De_Carreira;
}

void Ator::setTempo(int tempo_De_Carreira){
	this -> tempo_De_Carreira = tempo_De_Carreira;
}

int Ator::getTempo(){
	return tempo_De_Carreira;
}
