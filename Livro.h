#include<string>
using std::string;

class Livro{
public:
	Livro();
	void cadastraLivro();
	
private:
	string genero,idioma;
	int nPaginas;
};
