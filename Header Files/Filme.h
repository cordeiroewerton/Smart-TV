#ifndef SMART_TV_FILME_H
#define SMART_TV_FILME_H
#include "Producoes.h"

class Filme: public Producoes{
private:
    int duration; //Em minutos
public:
    Filme(string Nome_da_producao, int duration);
    Filme();
    int getTempo();
    void play() override;
};

#endif //SMART_TV_FILME_H
