#include<string>
using std::string;

class Livro: public Produto{
public:
	Livro();
	void cadastraLivro();
	
private:
	string genero,idioma;
	int nPaginas;
};