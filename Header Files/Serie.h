#ifndef SMART_TV_SERIE_H
#define SMART_TV_SERIE_H
#include "Producoes.h"

class Serie: public Producoes{
private:
    int Numero_de_cap;
public:
    Serie();
    Serie(string Nome_da_producao, int Numero_de_cap);
    int getCaps();
    void play() override;
};

#endif //SMART_TV_SERIE_H
