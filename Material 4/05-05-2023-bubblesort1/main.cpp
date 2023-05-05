#include <iostream>
#include <stdlib.h>
#include <string>

#define TAM 10

using namespace std;

void imprimeVetor(int vetor[]){
	int i;
	cout << endl;
	for (i = 0; i < TAM; i++){
		cout << " |" << vetor[i] << "| ";
	}
}

void bubbleSort(int vetor[TAM]){
	int x, y, aux;

	// valor da esquerda sendo analizado
	for(x = 0; x < TAM; x++){
		//valor da direita sendo analizado
		for (y = x + 1; y < TAM; y++){
			//análise se é necessário a troca
			if (vetor[x] > vetor[y]){
				aux = vetor[x];
				vetor[x] = vetor[y];
				vetor[y] = aux;
			}
		}
	}
}

int main(){

	int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

	imprimeVetor(vetor);
	cout << endl;

	bubbleSort(vetor);
	imprimeVetor(vetor);

}
