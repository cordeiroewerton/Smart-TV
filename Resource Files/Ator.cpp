#include"..\Header Files\Ator.h"

Ator::Ator(string Nome, int tempo_De_Carreira){
	setNome(Nome);
	setTempo(tempo_De_Carreira);
}

void Ator::setTempo(int tempo_De_Carreira){
	this -> tempo_De_Carreira = tempo_De_Carreira;
}

int Ator::getTempo(){
	return tempo_De_Carreira;
}
