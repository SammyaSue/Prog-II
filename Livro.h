#include<string>
using std::string;

class Livro{
public:
	Livro();
	void cadastraLivro();
	void alteraPreco();
private:
	string nome,genero,idioma;
	float preco;
	int nPaginas;
};
