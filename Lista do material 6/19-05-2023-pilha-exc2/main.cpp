/*/ 2. Escreva um programa em C++ que leia uma sequ�ncia de n�meros inteiros positivos do
usu�rio e imprima-os na ordem inversa utilizando uma pilha.*/

#include <iostream>
#include <stack>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    stack <int> elementos;
    int elem, aux = 1, cont = 0;

    cout << "Digite uma sequ�ncia de n�meros inteiros positivos (digite 0 para finalizar): " << endl;
    while(aux != 0)
    {
        cin >> aux;
        if(aux == 0)
        {
            break;
        }
        else
        {
            elem = aux;
            elementos.push(elem);
            cont++;
        }
    }

    cout << "\nN�meros na ordem inversa: " << endl;
    for(int i = 0; i <= cont; i++)
    {
        cout << elementos.top() << " ";
        elementos.pop();
    }

    return 0;
}
