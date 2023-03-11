#include <iostream>
#include <locale.h>

using namespace std;

void altera(int & n1, int & n2)
{
    n1 = 100;
    n2 = 200;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1 = 0, n2 = 0;

    cout <<"Digite um número: " << endl;
    cin >> n1;

    cout <<"Digite outro número: " << endl;
    cin >> n2;

    cout <<"\nPrimeiro número: " << n1 << endl;
    cout <<"Segundo número: " << n2 << endl;

    altera(n1, n2);
    cout  <<"------------------------------------------------------------------------------------------------------------------------" << endl;
    cout <<"Primeiro número alterado: " << n1 << endl;
    cout <<"Segundo número alterado: " << n2 << endl;

    return 0;
}



