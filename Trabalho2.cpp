#include<stdlib.h> //Necess�rio para o uso da fun��o rand()
#include<time.h>
#include<iostream>
using std::cout;
using std::endl;


void Prod(float &a, float &b, float &prod){
	prod = a*b;
}

int main(){
	srand(time(NULL)); //Garante a gera��o de n�meros aleat�rios a cada execu��o
	float n1 = 1 + (rand()%100); //Gera n�mero aleat�rio de 1 a 100
	float n2 = 1 + (rand()%100);
	float n3;
	float *ptr1 = &n1,*ptr2 = &n2,*ptr3 = &n3; //Declara��o dos ponteiros para armazenamento do endere�o das vari�veis
	Prod(*ptr1,*ptr2,*ptr3); 
	cout<<"Produto entre "<<n1<<" e "<<n2<<": "<<*ptr3<<"\n"<<endl;
	
	
	return 0;
}
