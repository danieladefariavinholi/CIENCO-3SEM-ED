#include <iostream>
#include <locale.h>
#include "my_math1.h"

using namespace std;

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    int n = 0;

    cout << "Digite o n�mero para calcular: ";
    cin >> n;

    cout << "Fatorial de " << n << ": " << fatorial(n) << endl;
    cout << "Quadrado com lado " << n << ": " << area_quadrado(n) << endl;
    cout << "�rea ret�ngulo: " << area_retangulo(n, n) << endl;

    return 0;
}
