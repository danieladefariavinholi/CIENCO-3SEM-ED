#include <iostream>
#include <list>
#include <iterator>

using namespace std;

void ImprimirLista(const list<int>& lista)
{
    list<int>::const_iterator elemento;// [classe] :: [método]
    if (lista.empty())
    {
        cout << "Lista vazia\n";
    }
    else
    {
        elemento = lista.begin(); //aponta para o primeiro elemento.
        do{
            cout << *elemento << " ";
            elemento++;
        }while (elemento != lista.end());
        cout << endl;
    }
}

int main()
{
   list<int> lista;

    lista.push_back(1);
    lista.push_back(5);
    lista.push_front(3);
    lista.push_front(2);
    ImprimirLista(lista);
    cout << "A lista tem " << lista.size() << " elementos " << endl << endl;
    lista.sort();
    ImprimirLista(lista);
    lista.remove(5);
    ImprimirLista(lista);
    lista.reverse();
    ImprimirLista(lista);
    lista.push_back(2);
    ImprimirLista(lista);
    lista.push_front(2);
    ImprimirLista(lista);
    lista.sort();
    ImprimirLista(lista);

}
