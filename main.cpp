#include <time.h>
#include <fstream>
#include <vector>
#include <string>
#include <iostream>
#include <stdlib.h>
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

    int opc1, opc2, opc3, opc4, opc5, desligar = 0, appOPC, producAUX, pessoaAUX;
    string marcaTV, modeloTV, appNome, producNome, diretorNome, atorNome;
    float SOTV, appVersao;

    cout << "[0] SAIR DA SMART TV" << endl;
    cout << "[1] LIGAR A SMART TV" << endl;
    cout << "DIGITE SUA OPCAO:";
    cin >> opc1;
    while(desligar == 0){
        if(opc1 == 0){
            cout << "SAINDO DA SMART TV";
            desligar = 1;
        }
        else if (opc1 == 1){
            /*cout << "LIGANDO A SMART TV" << endl;
            system("PAUSE");
            system("CLS");*/
            cout << "DIGITE A MARCA DA SUA SMART TV:";
            cin >> marcaTV;
            cout << "DIGITE O MODELO DA SUA SMART TV:";
            cin >> modeloTV;
            cout << "DIGITE A VERSAO DO SO DA SUA TV:";
            cin >> SOTV;
            system("PAUSE");
            system("CLS");
            SmartTV *smartTv = new SmartTV(marcaTV, modeloTV, SOTV);
            smartTv->Ligar();
            cout << "[1] INSTALAR APLICATIVO" << endl;
            cout << "[2] DESINSTALAR APLICATIVO" << endl;
            cout << "[3] ABRIR APLICATIVO" << endl;
            cout << "[4] DESLIGAR SMART TV" << endl;
            cout << "DIGITE SUA OPCAO:";
            cin >> opc2;
            system("PAUSE");
            system("CLS");
            if(opc2 == 1){
                cout << "[1] APLICATIVO TIME" << endl;
                cout << "[2] APLICATIVO STREAMING" << endl;
                cin >> appOPC;
                system("PAUSE");
                system("CLS");
                if(appOPC == 1){
                    cout << "DIGITE O NOME DO APLICATIVO:";
                    cin >> appNome;
                    cout << "DIGITE A VERSAO DO APLICATIVO:";
                    cin >> appVersao;
                    Time *time = new Time(appNome, appVersao);
                    smartTv->instalarApp(*time);
                    system("PAUSE");
                    system("CLS");
                }
                else if(appOPC == 2){
                    cout << "DIGITE O NOME DO APLICATIVO:";
                    cin >> appNome;
                    cout << "DIGITE A VERSAO DO APLICATIVO:";
                    cin >> appVersao;
                    Streaming *streaming = new Streaming(appNome, appVersao);
                    smartTv->instalarApp(*streaming);
                    system("PAUSE");
                    system("CLS");
                }
                else{
                    cout << "OPCAO NAO ENCONTRADA";
                    system("PAUSE");
                    system("CLS");
                }
            }
            else if(opc2 == 2){
                cout << "DIGITE O NOME DO APLICATIVO:";
                cin >> appNome;
                smartTv->desinstalarApp(appNome);
            }
            else if(opc2 == 3){
                while(opc2 == 3){
                    cout << "DIGITE O NOME DO APLICATIVO QUE DESEJA ABRIR:";
                    cin >> appNome;
                    opc3 = smartTv->run(appNome);
                    if(opc3 == 1){
                        cout << "[0] SELECIONAR PRODUCAO" << endl;
                        cout << "[1] ADICIONAR PRODUCAO" << endl;
                        cout << "[2] REMOVER PRODUCAO" << endl;
                        cout << "[3] SAIR DO APLICATIVO" << endl;
                        cout << "DIGITE SUA OPCAO";
                        cin >> opc4;
                        if(opc4 == 0){
                            cout << "DIGITE O NOME DA PRODUCAO:";
                            cin >> producNome;
                            Streaming auxStream;
                            auxStream = smartTv->retornaStream(appNome);
                            auxStream.runProducao(producNome);
                            cout << "[1] ADICIONAR DIRETOR" << endl;
                            cout << "[2] REMOVER DIRETOR" << endl;
                            cout << "[3] ADICIONAR ATOR" << endl;
                            cout << "[4] REMOVER ATOR" << endl;
                            cout << "DIGITE SUA OPCAO:";
                            cin >> opc5;
                            if(opc5 == 1){
                               cout << "DIGITE O NOME DO DIRETOR:";
                               cin >> diretorNome;
                               cout << "DIGITE O NUMERO DE PRODUCOES DO DIRETOR:";
                               cin >> pessoaAUX;
                               auxStream.addDiretor(producNome, diretorNome, pessoaAUX);
                               cout << "DIRETOR ADICIONADOR" << endl;
                               system("PAUSE");
                               system("CLS");
                            }
                            else if(opc5 == 3){
                                cout << "DIGITE O NOME DO ATOR:";
                                cin >> diretorNome;
                                cout << "DIGITE O TEMPO DE CARREIRA:";
                                cin >> pessoaAUX;
                                auxStream.addAtor(producNome, atorNome, pessoaAUX);
                                cout << "ATOR ADICIONADOR" << endl;
                                system("PAUSE");
                                system("CLS");
                            }
                            else if(opc5 == 2){
                                cout << "DIGITE O NOME DO DIRETOR QUE DESEJA REMOVER:";
                                cin >> diretorNome;
                                auxStream.removDiretor(producNome,diretorNome);
                                cout << "DIRETOR REMOVIDO" << endl;
                                system("PAUSE");
                                system("CLS");
                            }
                            else if(opc5 == 4){
                                cout << "DIGITE O NOME DO ATOR QUE DESEJA REMOVER:";
                                cin >> atorNome;
                                auxStream.removAtor(producNome, atorNome);
                                cout << "ATOR REMOVIDO" << endl;
                                system("PAUSE");
                                system("CLS");
                            }
                        }
                        else if(opc4 == 1){
                            cout << "[1] ADICIONAR FILMES" << endl;
                            cout << "[2] ADICIONAR SERIES" << endl;
                            cout << "DIGITE SUA OPCAO";
                            cin >> appOPC;
                            if(appOPC == 1){
                                cout << "DIGITE O NOME DO FILME:";
                                cin >> producNome;
                                cout << "DIGITE QUANTOS MINUTOS O FILME POSSUI:";
                                cin >> producAUX;
                                Filme *filme = new Filme(producNome, producAUX);
                                Streaming auxStream;
                                auxStream = smartTv->retornaStream(appNome);
                                auxStream.operator<<(*filme);
                                smartTv->salvaStream(auxStream);
                                cout << "FILME ADICIONADO" << endl;
                                system("PAUSE");
                                system("CLS");
                            }
                            else if(appOPC == 2){
                                cout << "DIGITE O NOME DA SERIE:";
                                cin >> producNome;
                                cout << "DIGITE QUANTOS MINUTOS O FILME POSSUI:";
                                cin >> producAUX;
                                Serie *serie = new Serie(producNome, producAUX);
                                Streaming auxStream;
                                auxStream = smartTv->retornaStream(appNome);
                                auxStream.operator<<(*serie);
                                smartTv->salvaStream(auxStream);
                                cout << "SERIE ADICIONADA" << endl;
                                system("PAUSE");
                                system("CLS");
                            }
                            else{
                                cout << "OPCAO NAO ENCONTRADA";
                            }
                        }
                        else if(opc4 == 2){
                            cout << "DIGITE O NOME DA PRODUCAO QUE DESEJA APAGAR:";
                            cin >> producNome;
                            Streaming auxStream;
                            auxStream = smartTv->retornaStream(appNome);
                            auxStream.operator>>(producNome);
                            cout << "PRODUCAO REMOVIDA" << endl;
                            system("PAUSE");
                            system("CLS");
                        }
                        else if(opc4 == 3){
                            cout << "SAINDO DO APLICATIVO";
                            //VIR ALTERAR O WHILE
                            system("PAUSE");
                            system("CLS");
                        }
                    }
                }
            }
            else if(opc2 == 4){
                cout << "DESLIGANDO A SMART TV";
                smartTv->Desligar();
                return 0;
            }
            else{
                cout << "OPCAO NAO ENCONTRADA";
                system("PAUSE");
                system("CLS");
            }
        }
        else{
            cout << "OPCAO INCORRETA";
            system("PAUSE");
            system("CLS");
        }
    }
    return 0;
}