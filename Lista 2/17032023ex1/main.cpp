/*Escreva um programa em C++ que permita a leitura dos nomes de 10
pessoas e armaze os nomes lidos em um vetor. Após isto, o algoritmo
deve permitir a leitura de mais 1 nome qualquer de pessoa e depois
escrever a mensagem ACHEI, se o nome estiver entre os 10 nomes lidos
anteriormente (guardados no vetor), ou NÃO ACHEI caso contrário.
*/

#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    string nomes[10], achar;
    int aux = 0;

    for(int i = 0; i < 10; i++)
    {
        cout << "Digite o nome " << i + 1 << ": ";
        cin >> nomes[i];
    }

    cout << "\nDigite o nome que deseja encontrar: ";
    cin >> achar;

     for(int i = 0; i < 10; i++)
    {
        if(nomes[i] == achar)
        {
            aux++;
        }
    }

    if(aux == 0)
    {
        cout << "NÃO ACHEI";
    }
    else
    {
        cout << "ACHEI";
    }


    return 0;
}
