#include <iostream>
#define tam 10

using namespace std;

void imprimeVetor (int x[])
{
    for(int i = 0; i < tam; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
}

void selectionSort(int vetor[tam])
{
    int posicaoMenorValor, aux, i, j;

    for(i = 0; i < tam; i++)
    {
        //recebe a posicao inicial para o menor valor
        posicaoMenorValor = i;

        for(j = i + 1; j < tam; j++)
        {
            //caso encontre um valor menor na frente dos analisados
            if(vetor[j] < vetor[posicaoMenorValor])
            {
                posicaoMenorValor = j;
            }
        }

        //verifica se houve mudança e troca de valoresz
        if(posicaoMenorValor != i)
        {
            aux = vetor[i];
            vetor[i] = vetor[posicaoMenorValor];
            vetor[posicaoMenorValor] = aux;
        }
    }
}

int main()
{
    int vetor[tam] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    imprimeVetor(vetor);
    cout << endl;

    selectionSort(vetor);
    imprimeVetor(vetor);
    return 0;
}
