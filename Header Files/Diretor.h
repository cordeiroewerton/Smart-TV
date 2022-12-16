#ifndef SMART_TV_DIRETOR_H
#define SMART_TV_DIRETOR_H

#include"..\Header Files\Pessoa.h"

class Diretor:public Pessoa{
	private:
		int numero_De_Producoes;
		
	public:
		Diretor(string Nome, int numero_De_Producoes);
		void setNumero(int numero_De_Producoes);
		int getNumero();
	
};

#endif //SMART_TV_DIRETOR_H
