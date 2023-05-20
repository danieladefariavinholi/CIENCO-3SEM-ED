/* 1. Escreva um programa em C++ que implemente uma pilha e permita ao usu�rio realizar
as seguintes opera��es:
� Inserir um elemento na pilha.
� Remover o elemento do topo da pilha.
� Verificar o elemento do topo da pilha sem remov�-lo.
� Verificar se a pilha est� vazia.
� Exibir o tamanho da pilha*/

#include <iostream>
#include <locale.h>
#include <stack>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    stack <string> elementos;
    int op;
    string elem;

    do
    {
        cout << "Escolha uma op��o: " << endl;
        cout << "1. Inserir elemento" << endl;
        cout << "2. Remover elemento do topo" << endl;
        cout << "3. Verificar o elemento do topo" << endl;
        cout << "4. Verificar se a pilha est� vazia" << endl;
        cout << "5. Exibir o tamanho da pilha" << endl;
        cout << "0. Sair" << endl;
        cout << "Op��o: ";
        cin >> op;

        if(op == 1)
        {
            cout << "\nDigite o elemento a ser inserido: ";
            cin >> elem;
            elementos.push(elem);
            cout << endl;
        }
        else if(op == 2)
        {
            if(elementos.empty())
            {
                cout << "\nN�o tem nenhum elemento na pilha" << endl;
                cout << endl;
            }

            else
            {
                cout << "\nElemento " << elementos.top() << " removido do topo" << endl;
                elementos.pop();
                cout << endl;
            }
        }
        else if(op == 3)
        {
            if(elementos.empty())
            {
                cout << "\nN�o tem nenhum elemento na pilha" << endl;
                cout << endl;
            }
            else
            {
                cout << "\nElemento do topo: " << elementos.top() << endl;
                cout << endl;
            }
        }
        else if(op == 4)
        {
            if(elementos.empty())
            {
                cout << "\nA pilha est� vazia" << endl;
                cout << endl;
            }
            else
            {
                cout << "\nA pilha n�o est� vazia" << endl;
                cout << endl;
            }
        }
        else if(op == 5)
        {
            cout << "\nO tamanho da pilha � de " << elementos.size() << endl;
            cout << endl;
        }
        else if(op == 0)
        {
            break;
        }
        else if(op != 0 || op != 1 || op != 2 || op != 3 || op != 4 || op != 5)
        {
            cout << "\nN�mero digitado n�o corresponde a nenhuma das op��es! Escolha outra op��o!" << endl;
            cout << endl;
        }
    }
    while(op != 0);

    return 0;
}
