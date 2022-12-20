#include <fstream>
#include"..\Header Files\SmartTV.h"

SmartTV::SmartTV() {
}

SmartTV::SmartTV(string marca, string modelo, float versaoSO) {
    this -> marca = marca;
    this -> modelo = modelo;
    this -> versaoSO = versaoSO;
}

void SmartTV::Ligar() {
    fstream arq1("../DadosStreaming.bin",ios::in);
    fstream arq2("../DadosTime.bin",ios::in);
    if(arq1.is_open()) {
        while (arq1.read(reinterpret_cast<char *>(&streamingaux), sizeof(streamingaux))) {
            appStreaming.push_back(streamingaux);
        }
    }
    if(arq2.is_open()) {
        while (arq2.read(reinterpret_cast<char *>(&timeaux), sizeof(timeaux))) {
            appTime.push_back(timeaux);
        }
    }
    arq1.close();
    arq2.close();
}

void SmartTV::Desligar() {
    fstream arq1("../DadosStreaming.bin", ios::out);
    fstream arq2("../DadosTime.bin", ios::out);
    if(arq1.is_open()){
        for(int i = 0; i < appStreaming.size(); i++){
            streamingaux = appStreaming[i];
            arq1.write(reinterpret_cast<char *>(&streamingaux),sizeof(streamingaux));
        }
    }
    if(arq2.is_open()){
        for(int i = 0; i < appTime.size(); i++){
            timeaux = appTime[i];
            arq2.write(reinterpret_cast<char *>(&timeaux),sizeof(timeaux));
        }
    }
    arq1.close();
    arq2.close();
}

void SmartTV::instalarApp(Time time) {
    appTime.push_back(time);
}

void SmartTV::instalarApp(Streaming streaming) {
    appStreaming.push_back(streaming);
}

void SmartTV::desinstalarApp(string Nome_do_App) {
    for(int i = 0; i < appTime.size(); i++){
        timeaux = appTime.at(i);
        if(timeaux.getNome() == Nome_do_App){
            appTime.erase(appTime.begin() + (i-1));
        }
    }
    for(int i = 0; i < appStreaming.size(); i++){
        streamingaux = appStreaming.at(i);
        if(streamingaux.getNome() == Nome_do_App){
            appStreaming.erase(appStreaming.begin() + (i-1));
        }
    }
}

void SmartTV::run(string Nome_do_App) {
    for(int i = 0; i < appTime.size(); i++){
        timeaux = appTime.at(i);
        if(timeaux.getNome() == Nome_do_App){
            timeaux.run();
        }
    }
    for(int i = 0; i < appStreaming.size(); i++){
        streamingaux = appStreaming.at(i);
        if(streamingaux.getNome() == Nome_do_App){
            streamingaux.run();
        }
    }
}