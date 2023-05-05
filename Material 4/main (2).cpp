#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void imprimeVetor (int vetor[])
{
    cout << endl;
    
    for(int i = 0; i <= 4; i++)
    {
        cout << i + 1 << " numero: " << vetor[i] << endl;
    }
}

void bubbleSort2 (int vetor[])
{
    int aux = 0;
    
    //ordenanado de forma crescente
    //laço com a quantidade de elementos do vetor -1
    for(int x = 1; x <= 4; x++)
    {
        //laço que percorre da ultima posiçao
        //ate posicao x do vetor
        for(int y = 4; y >= x; y--)
        {
            if(vetor[y] < vetor[y - 1])
            {
                aux = vetor[y];
                vetor[y] = vetor[y - 1];
                vetor[y - 1] = aux;
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
    
   bubbleSort2(vetor);
   imprimeVetor(vetor);

    return 0;
}