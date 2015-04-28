#include "Cliente.h"
#include<iostream>
using std::cout;
using std::endl;

Cliente::Cliente(){
	this->nome = "";
	this->cpf = "";
	this->login = "";
	this->senha = "";
	this->email = "";
}

Cliente::Cliente(string &nome, string &cpf){
};

Cliente::Cliente(const Cliente &c){
	this->nome = c.nome;
	this->cpf = c.cpf;
	this->login = c.login;
	this->senha = c.senha;
	this->email = c.email;
}

void Cliente::logar(const Cliente &c, string &login, string &senha){
	if(login==c.login && senha==c.senha)	cout<<"Login efetuado com sucesso!\n"<<endl;
	else	cout<<"Usuário e/ou senha incorretos!\n"<<endl;
}
