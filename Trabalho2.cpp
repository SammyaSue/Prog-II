#include<stdlib.h> //Necessário para o uso da função rand()
#include<time.h>
#include<iostream>
using std::cout;
using std::endl;


void Prod(float &a, float &b, float &prod){
	prod = a*b;
}

int main(){
	srand(time(NULL)); //Garante a geração de números aleatórios a cada execução
	float n1 = 1 + (rand()%100); //Gera número aleatório de 1 a 100
	float n2 = 1 + (rand()%100);
	float n3;
	float *ptr1 = &n1,*ptr2 = &n2,*ptr3 = &n3; //Declaração dos ponteiros para armazenamento do endereço das variáveis
	Prod(*ptr1,*ptr2,*ptr3); 
	cout<<"Produto entre "<<n1<<" e "<<n2<<": "<<*ptr3<<"\n"<<endl;
	
	
	return 0;
}
