#include"..\Header Files\Time.h"

Time::Time():App(){
}

Time::Time(string Nome, float version) : App(Nome, version){
}

void Time::run(){
	time_t rawtime;
	struct tm * timeinfo;

	time ( &rawtime );
	timeinfo = localtime ( &rawtime );
	printf ( "Data atual do sistema é: %s", asctime (timeinfo) );
}




