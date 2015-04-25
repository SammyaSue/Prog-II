#include<iostream>
using std::cout;
using std::endl;

#include<stdlib.h> //Necessário para a função rand()
#include<time.h>


float Media(float vet[], int comp){
	float soma = 0;
	for(int i=0;i<comp;i++)	soma += vet[i]; //Laço de somatório dos valores do vetor
	
	return soma/comp; //Retorna o somatório dividido pelo comprimento do vetor
}

int main(){
	float A[10];
	srand(time(NULL)); //Faz a função rand() gerar sempre valores diferentes das execuções anteriores
	cout << "Calcula Media Aritmetica\n--------------------------\nElementos do vetor\n"<<endl;
	for(int i=0;i<sizeof(A)/sizeof(float);i++){
			A[i] = rand(); //Preenche o vetor com valores aleatórios
			cout << "Elemento "<< i+1 << ":" << A[i] << "\n" <<endl;
	}
	cout << "Media aritmetica dos valores do vetor eh " << Media(A, sizeof(A)/sizeof(float)) << "\n" <<endl;
	
	return 0;
}
