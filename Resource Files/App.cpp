#include"..\Header Files\App.h"

App::App(string Nome, float version){
	this -> Nome = Nome;
	this -> version = version;
}

void App::setNome(string Nome){
	this -> Nome = Nome;
}				

string App::getNome(){
	return Nome;
}				

void App::setVersion(float version){
	this -> version = version;
}
		
float App::getVersion(){
	return version;
}

void App::run(){
}
