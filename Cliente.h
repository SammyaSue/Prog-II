#include<string>
using std::string;

Class Cliente{
public:
	Cliente();
	void CadastraCliente();
	void Logar();
	void AlteraLogin();
private:
	string nome,cpf,login,senha,email;
	int idade;
	
};
