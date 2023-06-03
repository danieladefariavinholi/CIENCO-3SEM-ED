/* � Voc� foi contratado para criar um programa em C++ que permite ao usu�rio digitar uma
lista de n�meros inteiros e, em seguida, exibir os n�meros na ordem de inser��o e em
ordem inversa.
� Instru��es:
� Utilize a classe list para armazenar uma lista de n�meros inteiros.
� Solicite ao usu�rio que digite 5 n�meros inteiros.
� Insira os n�meros na lista, um por vez.
� Ap�s a inser��o dos n�meros, exiba os n�meros da lista na ordem em que foram inseridos,
separados por espa�os.
� Em seguida, exiba os n�meros da lista em ordem inversa, separados por espa�os.
� Compile e execute o programa para test�-lo.
� Verifique se a sa�da do programa est� correta e se os n�meros s�o exibidos corretamente
na ordem de inser��o e em ordem inversa*/

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
        cout << "Insira o " << i + 1 << " n�mero: ";
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
