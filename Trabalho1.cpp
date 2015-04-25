#include<iostream>
using std::cout;
using std::endl;

#include<stdlib.h> //Necess�rio para a fun��o rand()
#include<time.h>


float Media(float vet[], int comp){
	float soma = 0;
	for(int i=0;i<comp;i++)	soma += vet[i]; //La�o de somat�rio dos valores do vetor
	
	return soma/comp; //Retorna o somat�rio dividido pelo comprimento do vetor
}

int main(){
	float A[10];
	srand(time(NULL)); //Faz a fun��o rand() gerar sempre valores diferentes das execu��es anteriores
	cout << "Calcula Media Aritmetica\n--------------------------\nElementos do vetor\n"<<endl;
	for(int i=0;i<sizeof(A)/sizeof(float);i++){
			A[i] = rand(); //Preenche o vetor com valores aleat�rios
			cout << "Elemento "<< i+1 << ":" << A[i] << "\n" <<endl;
	}
	cout << "Media aritmetica dos valores do vetor eh " << Media(A, sizeof(A)/sizeof(float)) << "\n" <<endl;
	
	return 0;
}
