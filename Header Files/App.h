#include <iostream>
using namespace std;

class App{
	private:
		string Nome;
		float version;
		
	public:
		App(string Nome, float version);
		void setNome(string Nome);
		string getNome();
		void setVersion(float version);
		float getVersion();
		virtual void run();
	
};