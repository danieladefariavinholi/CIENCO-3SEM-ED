/* • Você foi contratado para criar um programa em C++ que permite ao usuário digitar uma
lista de números inteiros e, em seguida, exibir os números na ordem de inserção e em
ordem inversa.
• Instruções:
• Utilize a classe list para armazenar uma lista de números inteiros.
• Solicite ao usuário que digite 5 números inteiros.
• Insira os números na lista, um por vez.
• Após a inserção dos números, exiba os números da lista na ordem em que foram inseridos,
separados por espaços.
• Em seguida, exiba os números da lista em ordem inversa, separados por espaços.
• Compile e execute o programa para testá-lo.
• Verifique se a saída do programa está correta e se os números são exibidos corretamente
na ordem de inserção e em ordem inversa*/

#include <iostream>
#include <list>
#include <iterator>

using namespace std;

void imprime(const list<int>& lista)
{
    list<int>::const_iterator elemento;
    elemento = lista.begin();
    do
    {
        cout << *elemento << " ";
        elemento++;
    }
    while(elemento != lista.end());

    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    list<int> lista;
    int aux;

    for(int i = 0; i < 5; i++)
    {
        cout << "Insira o " << i + 1 << " número: ";
        cin >> aux;
        lista.push_back(aux);
    }

    cout << endl;
    cout << "Elementos da lista: ";
    imprime(lista);

    lista.reverse();
    cout << "\nElemenos da lista na ordem inversa: ";
    imprime(lista);

    return 0;
}
