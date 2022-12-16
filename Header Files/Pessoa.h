#ifndef SMART_TV_PESSOA_H
#define SMART_TV_PESSOA_H

#include <iostream>
using namespace std;
class Pessoa{
	private:
		string Nome;
		
	public:
		Pessoa(string Nome);
		string getNome();
		void setNome(string Nome);
	
};

#endif //SMART_TV_PESSOA_H