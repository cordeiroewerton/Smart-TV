#include <time.h>
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
#include "Resource Files\App.cpp"
#include "Resource Files\Ator.cpp"
#include "Resource Files\Diretor.cpp"
#include "Resource Files\Filme.cpp"
#include "Resource Files\Pessoa.cpp"
#include "Resource Files\Producoes.cpp"
#include "Resource Files\SmartTV.cpp"
#include "Resource Files\Streaming.cpp"
#include "Resource Files\Time.cpp"

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
        cout << "DIGITE A MARCA DA SUA SMART TV";
        cin >> marcaTV;
        cout << "DIGITE O MODELO DA SUA SMART TV";
        cin >> modeloTV;
        cout << "DIGITE A VERSAO DO SISTEMA OPERACIONAL DA SUA SMART TV";
        cin >> SOTV;
        SmartTV *smart = new SmartTV(marcaTV, modeloTV, SOTV);
        smart->Ligar();
        cout << "[0] PARA INICIALIZAR ALGUM APLICATIVO" << endl;
        cout << "[1] PARA INSTALAR ALGUM APLICATIVO" << endl;
        cout << "[2] PARA DESINSTALAR ALGUM APLICATIVO" << endl;
        cout << "DIGITE SUA OPCAO";
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
