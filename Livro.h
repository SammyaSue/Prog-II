#include<string>
using std::string;

Class Livro{
public:
	Livro();
	void CadastraLivro();
	void AlteraPreco();
private:
	string nome,genero,idioma;
	float preco;
	int nPaginas;
};
