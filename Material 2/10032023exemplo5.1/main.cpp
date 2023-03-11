#include <iostream>
#include <locale.h>

using namespace std;

void mensagem(int n)
{
    cout << "Número: " << n << endl;
}

void mensagem()
{
    cout <<"Exemplo de sobrecarga da função" << endl;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    mensagem();
    mensagem(10);

    return 0;
}


