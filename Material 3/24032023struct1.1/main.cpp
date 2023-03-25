#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

struct pessoa
{
    //char nome[100];
    string nome;
    int idade;
};


int main()
{
    pessoa p;

    cout << "Qual seu nome: " ;
    getline(cin, p.nome); // le uma linha inteira de carcter de um fluxo de entrada
    //cin.getline(p[0].nome, sizeof(p[0].nome));

    cout <<"Quantos anos voce tem? ";
    cin >> p.idade;

    cout << "Idade: " << p.idade << " anos" << endl;
    cout << "Nome: " << p.nome << endl;
    return 0;
}
