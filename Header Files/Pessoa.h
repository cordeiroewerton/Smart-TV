#ifndef SMART_TV_PESSOA_H
#define SMART_TV_PESSOA_H
#include <vector>
#include <string>
#include <iostream>
using namespace std;
class Pessoa{
private:
    string Nome;
		
public:
    Pessoa();
    Pessoa(string Nome);
    string getNome();
    void setNome(string Nome);
	
};

#endif //SMART_TV_PESSOA_H