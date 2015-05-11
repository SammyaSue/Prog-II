#ifndef CARRINHO_H
#define CARRINHO_H
#include "Produto.h"

class Carrinho{
	public:
		Carrinho();
		void addItem(const Produto &);
	
	private:
		Produto *itens;
		float total;
		float freteTotal;
		int nItens;
		
};

#endif
