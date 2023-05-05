#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void imprimeVetor (int vetor[])
{
    cout << endl;
    
    cout << "vetor: ";
    for(int i = 0; i < 5; i++)
    {
        cout << vetor[i] << "  ";
    }
}

void bubbleSort3 (int vetor[])
{
    int aux = 0;
    
    for(int x = 0; x < 5 ; x++)
    {
        for(int y = x + 1; y < 5; y++)
        {
            if(vetor[y] > vetor[x])
            {
                aux = vetor[y];
                vetor[y] = vetor[x];
                vetor[x] = aux;
            }
        }
    }
}

int main()
{
    int vetor[5];
    
    for(int i = 0; i < 5; i++)
    {
        cout << "Digite o numero" << endl;
        cin >> vetor[i];
    }
    
   bubbleSort3(vetor);
   imprimeVetor(vetor);

    return 0;
}