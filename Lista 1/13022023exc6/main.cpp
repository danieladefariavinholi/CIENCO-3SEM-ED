/*6. Escreva um programa em C++ que mostre o quadrado dos números inteiros
no intervalo de 1 a 20.*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    int cont = 1;

    cout <<"O quadrado dos números inteiros no intervalo de 1 a 20" << endl;

    while(cont <= 20)
    {
        cout << cont * cont << endl;
        cont++;
    }

    return 0;
}
