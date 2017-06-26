#include <iostream>
#include <stdlib.h>
#include <time.h>
#define N 10

using namespace std;
/*17. Escrever um algoritmo que lê 2 vetores X(10) e Y(10) . 
Crie, a seguir, um vetor Z que seja a) a diferença entre X e Y; b)
 a soma entre X e Y; c) o produto entre X e Y; Escreva o vetor Z a
  cada cálculo.*/
int main(int argc, char** argv){
	
	//vetores
	int x[N];
	int y[N];
	int z[N];
	/*maicon 123/
	
	//função para gera numeros aleatorior
	srand((unsigned)time(NULL));
	
	//alimentando vetor "x"
	for(int i = 0; i < N; i++){
		x[i] = rand()% 10;
	}
	
	//alimentando vetor "y"
	for(int i = 0; i < N; i++){
		y[i] = rand()% 10;
	}
	
	//imprimindo vetor x
	cout << "VETOR X: \n";
	for(int i = 0; i < N; i++){
		cout <<"["<< x[i] <<"] ";
	}
	
	//imprimindo vetor y
	cout << "VETOR Y: \n";
	for(int i = 0; i < N; i++){
		cout <<"["<< y[i] <<"] ";
	}
	
	//calculando a diferença de x por y
	for(int i = 0; i < N; i++){
		z[i] = x[i] - y[i];	
	}
	

	cout << "\n\n";
	//imprimindo a diferença
	cout << "A DIFERENCA ENTRE X E Y: \n"; 
	for(int i = 0; i < N; i++){
		cout <<"["<< z[i] <<"] ";
	}
	
	cout << "\n\n";
	//calculando a soma de x por y	
	for(int i = 0; i < N; i++){
		z[i] = x[i] + y[i];	
	}
	
	cout << "\n\n";
	//imprimindo a soma
	cout << "A SOMA ENTRE X E Y: \n"; 
	for(int i = 0; i < N; i++){
		cout << "[" << z[i] <<"] ";
	}
	
	//produto de x por y
	for(int i = 0; i < N; i++){
		z[i] = x[i] * y[i];
	}
	
	cout << "\n\n";
	//imprimindo produto
	cout << "PRODUTO DE X POR Y: \n";
	for(int i = 0; i < N; i++){
		cout <<"[" <<z[i] <<"] ";
	}
	
	return 0;
}
