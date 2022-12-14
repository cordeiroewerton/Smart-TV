#ifndef SMART_TV_SMARTTV_H
#define SMART_TV_SMARTTV_H
#include "Streaming.h"
#include "Time.h"
#include <fstream>

class SmartTV{
private:
    string marca;
    string modelo;
    float versaoSO;
    vector <Time> appTime;
    vector <Streaming> appStreaming;
    Streaming streamingaux;
    Time timeaux;
public:
    SmartTV();
    SmartTV(string marca, string modelo, float versaoSO);
    void Ligar();
    void Desligar();
    void instalarApp(Time time);
    void instalarApp(Streaming straming);
    void desinstalarApp(string Nome_do_App);
    int run(string Nome_do_App);
    Streaming retornaStream(string nomeApp);
    void salvaStream(Streaming streaming);

};

#endif //SMART_TV_SMARTTV_H
