/*Ler um vetor A de 10 n�meros. Ap�s, ler mais um n�mero e guardar em
uma vari�vel X. Armazenar em um vetor M o resultado de cada
elemento de A multiplicado pelo valor X. Logo ap�s, imprimir o vetor M.*/

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
