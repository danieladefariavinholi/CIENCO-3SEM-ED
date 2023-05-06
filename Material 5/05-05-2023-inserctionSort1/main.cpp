#include <iostream>

using namespace std;

void imprimeVetor (int x[])
{
    for(int i = 0; i <= 4; i++)
    {
        cout << "Numero: " << x[i] << endl;
    }
}

void insertionSort (int vetor[])
{
    int eleito = 0, j = 0;

    //ordenado de forma crescente
    //laço com a quantidade de elementos do vetor - 1
    for(int i = 1; i <= 4; i++)
    {
        eleito = vetor[i];
        j = i - 1;
        //laço que percorre os elemtos da esquerda do numero eleito ou ate encontrar
        //a posiçao para recolocaçao do numero eleito respeitando a ordenaçao procurada
        while(j >= 0 && vetor[j] > eleito)
        {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = eleito;
    }
}

int main()
{
    int vetor[5];

    //carregando os numeros no vetor
    for(int i = 0; i <= 4; i++)
    {
        cout << "Digite o numero: ";
        cin >> vetor[i];
    }

    cout << endl;
    imprimeVetor(vetor);
    insertionSort(vetor);
    cout << endl;
    imprimeVetor(vetor);

    return 0;
}
