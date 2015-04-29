#include "Livro.h"
#include<string>
using std::string;

class LivroFisico: public Livro{
public:
	LivroFisico();
	float calculaFrete(float );
private:
	string capa, tipo;
	float peso;
};

