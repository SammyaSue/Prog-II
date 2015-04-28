#include<string>
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
	string nome,cpf,login,senha,email;
	int idade;
	
};
