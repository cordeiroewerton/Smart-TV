#ifndef SMART_TV_FILME_H
#define SMART_TV_FILME_H
#include "Producoes.h"

class Filme: public Producoes{
private:
    float duration;
public:
    Filme(string Nome_da_producao, float duration);
    void play() override;
};

#endif //SMART_TV_FILME_H
