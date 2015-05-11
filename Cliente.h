#ifndef CLIENTE_H
#define CLIENTE_H
#include<string>
#include"Data.h"
using std::string;

class Cliente{
public:
	Cliente();
	Cliente(string & , string & );
	Cliente(const Cliente &);
	
	void cadastraCliente();
	void logar(const Cliente & , string & , string & );
	void alteraLogin();
private:
	string nome,login,senha,email;
	int idade;
	const string cpf;
	static int nClientes;
	const static int tamSenhaMin=6;
	const static int tamSenhaMax=20;
	const Data dataCadastroCliente;
	
};

#endif
