#include <time.h>
#include <fstream>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
#include "Header Files/App.h"
#include "Header Files/Ator.h"
#include "Header Files/Diretor.h"
#include "Header Files/Filme.h"
#include "Header Files/Pessoa.h"
#include "Header Files/Producoes.h"
#include "Header Files/SmartTV.h"
#include "Header Files/Streaming.h"
#include "Header Files/Time.h"

int main (){

    int opc1, opc2, tipo_app;
    string marcaTV, modeloTV, appNome;
    float SOTV;

    cout << "[0] SAIR DA SMART TV" << endl;
    cout << "[1] LIGAR A SMART TV" << endl;
    cout << "DIGITE SUA OPCAO:";
    cin >> opc1;
    if(opc1 == 0){
        cout << "SAINDO DA SMART TV";
        return 0;
    }
    else if(opc1 == 1){
        cout << "DIGITE A MARCA DA SUA SMART TV:";
        cin >> marcaTV;
        cout << "DIGITE O MODELO DA SUA SMART TV:";
        cin >> modeloTV;
        cout << "DIGITE A VERSAO DO SISTEMA OPERACIONAL DA SUA SMART TV:";
        cin >> SOTV;
        SmartTV *smart = new SmartTV(marcaTV, modeloTV, SOTV);
        smart->Ligar();
        cout << "[0] PARA INICIALIZAR ALGUM APLICATIVO" << endl;
        cout << "[1] PARA INSTALAR ALGUM APLICATIVO" << endl;
        cout << "[2] PARA DESINSTALAR ALGUM APLICATIVO" << endl;
        cout << "DIGITE SUA OPCAO:";
        cin >> opc2;
        if (opc2 == 0){
            cout << "DIGITE O NOME DO APLICATIVO QUE DESEJA INICIALIZAR:";
            cin >> appNome;
            tipo_app = smart->run(appNome);

        }
        else if(opc2 == 1){

        }
        else if(opc2 == 2){

        }
        else{
            cout << "OPCAO NAO ENCONTRADA";
        }


    }
    else{
        cout << "OPCAO NAO ENCONTRADA";
    }

    return 0;
}