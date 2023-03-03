/*7. Escreva um programa em C++ que escreva todos os números múltiplos de 5, no intervalo de 1 a 500.*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    int cont = 1;

    cout <<"Os números múltiplos de 5 no intervalo de 1 a 500" << endl;
    while(cont <= 500)
    {
        if(cont % 5 == 0)
        {
            cout << cont << endl;
        }
        cont++;
    }

    return 0;
}
