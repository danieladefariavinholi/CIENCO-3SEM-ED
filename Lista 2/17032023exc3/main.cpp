/*Ler um vetor A de 10 números. Após, ler mais um número e guardar em
uma variável X. Armazenar em um vetor M o resultado de cada
elemento de A multiplicado pelo valor X. Logo após, imprimir o vetor M.*/

#include <iostream>
#define a 10

using namespace std;

int main()
{
    float vetorA[a], x, vetorM[a];

    for(int i = 0; i < a; i++)
    {
        cout << "Digite o valor " << i + 1 << ": ";
        cin >> vetorA[i];
    }

    cout << "\nInforme o valor que deseja para multiplicar o vetor:  ";
    cin >> x;

    cout << endl;
    for(int i = 0; i < a; i++)
    {
        vetorM[i] = vetorA[i] * x;
        cout << "Vetor M [" << i << "] = " << vetorM[i] << endl;
    }

    return 0;
}
