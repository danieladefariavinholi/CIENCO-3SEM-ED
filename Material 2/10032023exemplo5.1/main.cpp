#include <iostream>
#include <locale.h>

using namespace std;

void mensagem(int n)
{
    cout << "N�mero: " << n << endl;
}

void mensagem()
{
    cout <<"Exemplo de sobrecarga da fun��o" << endl;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    mensagem();
    mensagem(10);

    return 0;
}


