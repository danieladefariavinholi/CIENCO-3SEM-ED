#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

typedef struct data
{
    //para declarar que um num seja apenas positivo (incluindo 0), usamos o modificador unsigned:
    unsigned short dia;
    unsigned short mes;
    unsigned int ano;
} Data;

typedef struct aniversario
{
    string nome;
    Data nascimento;
} Aniversario;

int main()
{
    Aniversario alguem;

    cout << "Digite o nome de alguem: ";
    getline(cin, alguem.nome);
    cout << "Digite o dia que esta pessoa nasceu: ";
    cin >> alguem.nascimento.dia;
    cout << "Digite o mes que a pessoa nasceu: ";
    cin >> alguem.nascimento.mes;
    cout << "Digite o ano que esta pessoa nasceu: ";
    cin >> alguem.nascimento.ano;
    system("cls");

    cout << alguem.nome << endl << "nasceu em " ;
    cout << alguem.nascimento.dia << "/" << alguem.nascimento.mes << "/" << alguem.nascimento.ano;
    return 0;
}
