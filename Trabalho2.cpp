#include<stdlib.h>
#include<time.h>
#include<iostream>
using std::cout;
using std::endl;

void Prod(float &a, float &b, float &prod){
	prod = a*b;
}

int main(){
	srand(time(NULL));
	float n1 = 1 + (rand()%100);
	float n2 = 1 + (rand()%100);
	float n3;
	float *ptr1 = &n1,*ptr2 = &n2,*ptr3 = &n3;
	Prod(*ptr1,*ptr2,*ptr3);
	cout<<"Produto entre "<<n1<<" e "<<n2<<": "<<*ptr3<<"\n"<<endl;
	
	
	return 0;
}
