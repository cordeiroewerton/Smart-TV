#ifndef SMART_TV_APP_H
#define SMART_TV_APP_H
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class App{
	private:
		string Nome;
		float version;
		
	public:
        App();
		App(string Nome, float version);
		void setNome(string Nome);
		string getNome();
		void setVersion(float version);
		float getVersion();
		virtual void run();
	
};

#endif //SMART_TV_APP_H