#include <iostream>
#include <locale.h>

using namespace std;

int troca(int & n1, int & n2)
{
    int aux;

    aux = n1;
    n1 = n2;
    n2 = aux;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;

    cout <<"Entre com o número 1: ";
    cin >> n1;

    cout <<"Entre com o número 2: ";
    cin >> n2;

    cout << "Você entrou com " << n1 << " e " << n2 << endl;

    troca(n1, n2);

    cout << "Trocados, eles são " << n1 << " e " << n2 << endl;

    return 0;
}
