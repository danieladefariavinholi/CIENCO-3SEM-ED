#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main()
{
    list<int> minhaLista; // cria uma lista

    //inser��o de elementos na lista
    minhaLista.push_back(10); // Insere um elemento no final da lista
    minhaLista.push_back(20); // Insere um elemento no final da lista
    minhaLista.insert(next(minhaLista.begin()), 30); // Insere um elemento ap�s o primeiro elemento da lista

    //Acesso aos elementos da lista utilizando o iterador
    cout << "Elementos da lista: ";
    for(list<int>::iterator it = minhaLista.begin(); it != minhaLista.end(); ++it)
    {
        cout << *it << " "; // Imprime cada elemento da lista
    }
    cout << endl;

    // Remo��o de elementos da lista utilizando o iterator
    list<int>::iterator it = minhaLista.begin();
    advance(it, 1); // Avan�a o iterator para o segundo elemento da lista
    minhaLista.erase(it); // Remove o segundo elemento da lista

    //Verifica��o do tamanho da lista
    cout << "Tamanho da lista: " << minhaLista.size() << endl;

    //Verifica��o se a lista est� vazia
    cout << "Lista vazia? " << (minhaLista.empty() ? "Sim" : "Nao") << endl;

    //Acesso ao primeiro e �ltimo elemento da lista
    cout << "Primeiro elemento: " << minhaLista.front() << endl;
    cout << "Ultimo elemento: " << minhaLista.back() << endl;

    // Limpeza da lista
    minhaLista.clear();

    // Verifica��o do tamanho da lista ap�s a limpeza
    cout << "Tamanho da lista apos a limpeza: " << minhaLista.size() << endl;
    return 0;
}
