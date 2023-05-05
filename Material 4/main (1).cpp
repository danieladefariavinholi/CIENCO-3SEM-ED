#include <iostream>
#include <stdlib.h>
#include <string>

#define tam 10

using namespace std;

void imprimeVetor (int vetor[])
{
    cout << endl;
    
    for(int i = 0; i < tam; i++)
    {
        cout << " |" << vetor[i] << "| ";
    }
}

void bubbleSort (int vetor[tam])
{
    int aux;
    
    //valor da esquerda sendo analisado
    for(int x = 0; x < tam; x++)
    {
        //valor da direita sendo analisado
        for(int y = x + 1; y < tam; y++)
        {
            //analisa se é necessario a troca
            if(vetor[x] > vetor[y])
            {
                aux = vetor[x];
                vetor[x] = vetor[y];
                vetor[y] = aux;
            }
        }
    }
}

int main()
{
    int vetor[tam] = {10,9,8,7,6,5,4,3,2,1};
    
    imprimeVetor(vetor);
    cout << endl;
    
   bubbleSort(vetor);
   imprimeVetor(vetor);

    return 0;
}