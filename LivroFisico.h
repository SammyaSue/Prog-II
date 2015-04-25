#include "Livro.h"
#include<string>
using std::string;

Class LivroFisico: public Livro{
public:
	LivroFisico();
	float CalculaFrete(float );
private:
	string capa, tipo;
	float peso;
};

