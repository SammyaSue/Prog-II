#include "Carrinho.h"

Carrinho::Carrinho(){
	itens = new Produto[0];
	this->total = 0;
	this->freteTotal = 0;	
	this->nItens = 0;
}

void Carrinho::addItem(const Produto &item){
	Produto *aux = new Produto[nItens];
	for(int i=0;i<nItens;i++)	aux[i] = itens[i]; 
	delete [] itens;
	
	itens = new Produto[++nItens];
	for(int i=0;i<nItens-1;i++)	itens[i] = aux[i]; 
	
	itens[nItens] = item;
	
	delete [] aux;	
	
}
