/*1. Crie uma estrutura chamada pessoa que seja capaz de
armazenar o nome, o endereço, o CPF e a idade de 5 pessoas. */

#include <iostream>
#include <string>
#include <locale.h>
#define n 5

using namespace std;

struct pessoa
{
    string nome;
    string endereco;
    string CPF;
    int idade;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    pessoa dados[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Informe seu nome: ";
        getline(cin, dados[i].nome);

        cout << "Informe seu endereço: ";
        getline(cin, dados[i].endereco);

        cout << "Informe o CPF: ";
        cin >> dados[i].CPF;

        cout << "Informe a idade: ";
        cin >> dados[i].idade;

        cout << endl;
        cin.ignore();
    }

    cout << endl << endl;

    for(int i = 0; i < n; i++)
    {
        cout << "Nome: " << dados[i].nome << endl;
        cout << "Endereço: " << dados[i].endereco << endl;
        cout << "CPF: " << dados[i].CPF << endl;
        cout << "Idade: " << dados[i].idade << endl << endl;

    }


    return 0;
}
