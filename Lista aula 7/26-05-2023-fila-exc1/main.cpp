/* 1. Escreva um programa em C++ que simule um sistema de atendimento em uma loja. O programa deve utilizar
uma fila para gerenciar a ordem de atendimento dos clientes.
� O programa deve oferecer as seguintes funcionalidades:
� Inserir cliente na fila:
      � O programa deve solicitar ao usu�rio o nome do cliente que deseja ser atendido e inserir o cliente na fila de atendimento.
� Atender pr�ximo cliente:
      � O programa deve remover o pr�ximo cliente da fila e exibir uma mensagem com o nome do cliente que est� sendo atendido.
� Exibir fila de espera:
      � O programa deve exibir a lista de clientes que est�o aguardando na fila, na ordem em que foram inseridos.
� Encerrar o programa:
      � O programa deve permitir ao usu�rio encerrar o programa */

#include <iostream>
#include <queue>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    queue <string> pessoas;
    queue <string> auxiliar;

    string nome;
    int aux;

    while(aux != 0)
    {
        cout << "Digite 1 - para inserir cliente na fila" << endl;
        cout << "Digite 2 - para atender pr�ximo cliente" << endl;
        cout << "Digite 3 - para exibir fila de espera" << endl;
        cout << "Digite 0 - para encerrar o programa" << endl;
        cin >> aux;
        cout << endl;

        if(aux == 1)
        {
            cout << "Digite o nome do cliente: ";
            cin >> nome;
            pessoas.push(nome);
            cout << "Cliente " << pessoas.back() << " foi adicionado a fila de espera" << endl << endl;
        }
        else if(aux == 2)
        {
            if(pessoas.empty() == false)
            {
                cout << "Cliente a ser atendido: " << pessoas.front() << endl << endl;
                pessoas.pop();
            }
            else
            {
                cout << "N�o possuem clientes na fila!" << endl << endl;
            }
        }
        else if(aux == 3)
        {
            if(pessoas.empty() == false)
            {
                auxiliar = pessoas;
                cout << "Clientes a serem atendidos: " << endl;
                while(!auxiliar.empty())
                {
                    cout << auxiliar.front() << endl;
                    auxiliar.pop();
                }
                cout << endl;
            }
            else
            {
                cout << "N�o possuem clientes na fila!" << endl << endl;
            }
        }
        else if(aux == 0)
        {
            break;
        }
        else
        {
            cout << "O n�mero digitado n�o corresponde a nenhuma das op��es! Tente outro!" << endl << endl;
        }
    }

    return 0;
}
