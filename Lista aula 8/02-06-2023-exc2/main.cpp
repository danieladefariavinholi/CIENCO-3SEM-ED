/* Construa uma lista de funcionários em C++:
– O programa deve pedir quantos funcionários serão cadastrados; -nome
– O programa deve avisar se lista vazia;
– O programa deve imprimir esta lista na ordem de cadastro;
– O programa deve imprimir a lista ordenada;
– O programa deve imprimir a lista reversa;
– O programa deve mostrar quantos funcionários estão cadastrados */

#include <iostream>
#include <list>
#include <algorithm>

 using namespace std;

int main() {

    setlocale(LC_ALL,"PORTUGUESE");
   list<string> listaFuncionarios;

    int num;
   cout << "Informe quantos funcionários serão cadastrados: ";
   cin >> num;

    if (num <= 0) {
        cout << "A lista está vazia.\n";
        return 0;
    }

    for (int i = 0; i < num; i++) {
        string nome;

        cout << "Informe o nome do funcionário " << i + 1 << ": ";
        cin >> nome;

        listaFuncionarios.push_back(nome);
    }

    cout << "\nFuncionários cadastrados na ordem de cadastro:\n";
    for (const string& funcionario : listaFuncionarios) {
        cout << "Nome: " << funcionario << endl;
    }

    listaFuncionarios.sort();

  cout << "\nFuncionários cadastrados em ordem alfabética:\n";
    for (const string& funcionario : listaFuncionarios) {
        cout << "Nome: " << funcionario << endl;
    }

    cout << "\nFuncionários cadastrados em ordem reversa:\n";
    for (auto it = listaFuncionarios.rbegin(); it != listaFuncionarios.rend(); ++it) {
    cout << "Nome: " << *it << endl;
    }

    cout << "\nTotal de funcionários cadastrados: " << listaFuncionarios.size() << endl;

    return 0;
}
