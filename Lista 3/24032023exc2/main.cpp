/*2. Suponha que voc� est� desenvolvendo um programa para armazenar
informa��es sobre animais em um zool�gico. Crie uma estrutura chamada
Animal que deve armazenar as seguintes informa��es sobre cada animal:
� Nome do animal (string)
� Esp�cie do animal (string)
� Idade do animal (int)
� Peso do animal em kg (float)
Em seguida, crie um typedef para uma lista de animais chamada ListaAnimais,
que deve ser um vetor de 10 elementos do tipo Animal.
Por fim, crie um programa que pede ao usu�rio para digitar os dados de 10
animais e armazena esses dados em uma vari�vel do tipo ListaAnimais.
Ao final, o programa deve exibir os dados de cada um dos 10 animais na tela*/

#include <iostream>
#include <locale>
#define n 10

using namespace std;

typedef struct Animal
{
    string nome, especie;
    int idade;
    float peso;
};

typedef struct ListaAnimais
{
    Animal tipoAnimal;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    ListaAnimais listaAnimais[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Informe o nome do animal: ";
        cin >> listaAnimais[i].tipoAnimal.nome;

        cout << "Informe a esp�cie do animal: ";
        cin >> listaAnimais[i].tipoAnimal.especie;

        cout << "Informe a idade do animal: ";
        cin >> listaAnimais[i].tipoAnimal.idade;

        cout << "Informe o peso do animal: ";
        cin >> listaAnimais[i].tipoAnimal.peso;

        cout << endl;
    }

    cout << endl << endl;

     for(int i = 0; i < n; i++)
    {
        cout << "Animal " << i + 1 << endl;
        cout << "Nome do animal: " << listaAnimais[i].tipoAnimal.nome << endl;

        cout << "Esp�cie do animal: " << listaAnimais[i].tipoAnimal.especie << endl;

        cout << "Idade do animal: " << listaAnimais[i].tipoAnimal.idade << endl;

        cout << "Peso do animal: " << listaAnimais[i].tipoAnimal.peso << endl;

        cout << endl;
    }
    return 0;
}
