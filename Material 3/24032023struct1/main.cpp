#include <iostream>
#include <cstdlib>

using namespace std;

struct data
{
    int dia;
    int mes;
    int ano;
};


int main()
{
    data hoje;
    hoje.dia = 24;
    hoje.mes = 3;
    hoje.ano = 2023;

    cout << "Hoje eh " << hoje.dia << "/" << hoje.mes << "/" << hoje.ano << endl;
    system("pause");

    return 0;
}
