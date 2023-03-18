/*Faça um programa em C++ para ler um valor N qualquer (que será o
tamanho dos vetores). Após, ler dois vetores A e B (de tamanho N cada um)
e depois armazenar em um terceiro vetor Soma a soma dos elementos do
vetor A com os do vetor B (respeitando as mesmas posições) e escrever o
vetor Soma.*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;

    cout << "Informe o número para o tamanho dos vetores: " ;
    cin >> n;

    int vetorA[n], vetorB[n], vetorSoma[n];

    cout <<"\nInforme os valores do vetor A: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout <<"Valor " << i + 1 << ": " ;
        cin >> vetorA[i];
    }

    cout <<"\nInforme os valores do vetor B: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout <<"Valor " << i + 1 << ": ";
        cin >> vetorB[i];
    }

    cout << "\nVetor Soma: " << endl;
     for(int i = 0; i < n; i++)
    {
        vetorSoma[i] = vetorB[i] + vetorA[i];
        cout << "Vetor Soma [" << i << "] = " << vetorSoma[i] << endl;
    }

    return 0;
}
