#include"..\Header Files\Pessoa.h"

class Ator:public Pessoa{
	
	private:
		int tempo_De_Carreira; //em anos
	
	public:
		Ator(string Nome, int tempo_De_Carreira);
		void setTempo(int tempo_De_Carreira);
		int getTempo();
	
};
