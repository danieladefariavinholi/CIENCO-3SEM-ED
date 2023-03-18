#include <iostream>

using namespace std;

#define TAMANHO 5

int maior(int a[])
{
    int i, maxi;

    //achar o maior valor do array
    maxi = a[0];
    i = 1;

    while(i < TAMANHO)
    {
        if(maxi < a[i])
        {
            maxi = a[i];
        }
        i = i + 1;
    }

    return maxi;


}
int main()
{
    int i, valor[TAMANHO];
    i = 0;

    while(i < TAMANHO)
    {
        cout << "Entre um numero inteiro: ";
        cin >> valor[i];
        i = i + 1;
    }

    cout << "O maior eh " << maior(valor) << endl;

    return 0;
}
