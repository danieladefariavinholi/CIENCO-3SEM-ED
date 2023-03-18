/*Faça um programa em C++ para ler 20 números e armazenar em um vetor.
Após a leitura total dos 20 números, o algoritmo deve escrever esses 20
números lidos na ordem inversa.*/

#include <iostream>
#include <locale>
#define n 20

using namespace std;

void inverso(int vetor[], int num)
{
    for(int i = num - 1; i >= 0; i--)
    {
        cout << "Vetor[" << i << "] = " << vetor[i] << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Digite o valor " << i + 1 << ": ";
        cin >> vetor[i];
    }

    cout << "\nVetor mostrado da forma inversa" << endl;
    inverso(vetor, n);

    return 0;
}
