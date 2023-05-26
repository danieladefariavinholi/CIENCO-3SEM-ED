#include <iostream>
#include <queue>

using namespace std;

int main()
{
    /*
    empty = vazio
    size = tamanho da fila
    front = primeiro da fila
    back = ultimo da fila
    push = adiciona elementos na fila
    pop = retira elementos da fila
    */

    queue <string> pessoas;

    pessoas.push("RODRIGO"); //push adiciona elementos na fila
    pessoas.push("ANDRE");
    pessoas.push("MARIA");
    pessoas.push("ANA");
    pessoas.push("JOSE");
    pessoas.push("RITA");

    //SIZE MOSTRA O TAMANHO DA FILA
    cout << "Tamanho da fila: " << pessoas.size() << endl;
    cout << "Primeira da fila: " << pessoas.front() << endl;
    cout << "Ultima pessoa da fila: " << pessoas.back() << endl << endl;

    while(!pessoas.empty())
    {
        cout << "Primeira pessoa " << pessoas.front() << endl;
        pessoas.pop(); // retira elementos da fila
    }

    return 0;
}
