#ifndef PRODUTO_H
#define PRODUTO_H
#include<string>
using std::string;

class Produto{
	public:
		Produto();
		void alteraPreco();
	
	private:
		string nome;
		float preco;
};

#endif
