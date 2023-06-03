#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main()
{
    list<int> minhaLista; // cria uma lista

    //inserção de elementos na lista
    minhaLista.push_back(10); // Insere um elemento no final da lista
    minhaLista.push_back(20); // Insere um elemento no final da lista
    minhaLista.insert(next(minhaLista.begin()), 30); // Insere um elemento após o primeiro elemento da lista

    //Acesso aos elementos da lista utilizando o iterador
    cout << "Elementos da lista: ";
    for(list<int>::iterator it = minhaLista.begin(); it != minhaLista.end(); ++it)
    {
        cout << *it << " "; // Imprime cada elemento da lista
    }
    cout << endl;

    // Remoção de elementos da lista utilizando o iterator
    list<int>::iterator it = minhaLista.begin();
    advance(it, 1); // Avança o iterator para o segundo elemento da lista
    minhaLista.erase(it); // Remove o segundo elemento da lista

    //Verificação do tamanho da lista
    cout << "Tamanho da lista: " << minhaLista.size() << endl;

    //Verificação se a lista está vazia
    cout << "Lista vazia? " << (minhaLista.empty() ? "Sim" : "Nao") << endl;

    //Acesso ao primeiro e último elemento da lista
    cout << "Primeiro elemento: " << minhaLista.front() << endl;
    cout << "Ultimo elemento: " << minhaLista.back() << endl;

    // Limpeza da lista
    minhaLista.clear();

    // Verificação do tamanho da lista após a limpeza
    cout << "Tamanho da lista apos a limpeza: " << minhaLista.size() << endl;
    return 0;
}
