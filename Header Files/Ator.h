#ifndef SMART_TV_ATOR_H
#define SMART_TV_ATOR_H

#include"..\Header Files\Pessoa.h"

class Ator:public Pessoa{
	
private:
    int tempo_De_Carreira; //em anos
	
public:
    Ator();
    Ator(string Nome, int tempo_De_Carreira);
    void setTempo(int tempo_De_Carreira);
    int getTempo();
	
};
#endif //SMART_TV_ATOR_H