/* Escreva um programa em C++ que simule um sistema de atendimento em um banco.
O programa deve permitir que o usu�rio realize as seguintes opera��es:

Abrir uma nova conta:
O programa deve solicitar ao usu�rio o nome do cliente e o saldo inicial da conta. Em seguida, deve criar uma nova conta com os dados fornecidos e adicionar
a conta a uma fila de espera para ser atendida por um atendente.

Atender o pr�ximo cliente:
O programa deve remover a pr�xima conta da fila de espera e exibir as informa��es do cliente que est� sendo atendido, incluindo o nome e o saldo atual da
conta. Em seguida, o atendente deve solicitar ao cliente a opera��o que deseja realizar, que pode ser dep�sito, saque ou consulta de saldo.

Ap�s o cliente escolher a opera��o desejada, o programa deve solicitar o valor a ser depositado, sacado ou consultado e atualizar o saldo da conta
correspondente.

Encerrar o programa:
O programa deve permitir ao usu�rio encerrar o programa.

Dica:
// Estrutura para representar uma conta banc�ria
struct Conta {
 string cliente;
 double saldo;
};
queue <Conta> filaEspera;

Conta novaConta;
novaConta.cliente = nome;
novaConta.saldo = saldoInicial;
filaEspera.push(novaConta);
*/

#include <iostream>
#include <queue>
#include <locale.h>

using namespace std;

struct Conta
{
    string cliente;
    double saldo;
};

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    queue <Conta> fila;
    Conta novaConta;
    string nome;
    double saldoInicial, saldo;
    int aux, op;

    while(aux != 3)
    {
        cout << "Op��es dispon�veis: " << endl;
        cout << "1 - Abrir uma nova conta" << endl;
        cout << "2 - Atender pr�ximo cliente" << endl;
        cout << "3 - Encerrar o programa" << endl;
        cout << "Digite a op��o desejada: ";
        cin >> aux;

        if(aux == 1)
        {
            cout << "\nInforme o nome: ";
            cin >> nome;
            cout << "Informe o saldo inicial: R$";
            cin >> saldoInicial;
            novaConta.cliente = nome;
            novaConta.saldo = saldoInicial;
            fila.push(novaConta);
        }
        else if(aux == 2)
        {
            if(fila.empty() == false)
            {

                Conta contanova = fila.front();
                fila.pop();

               cout << "\nCliente: " << contanova.cliente << endl;
               cout << "Saldo: R$" << contanova.saldo << endl;


               cout << "\n1 - Dep�sito" << endl;
               cout << "2 - Saque" << endl;
               cout << "3 - Consultar saldo" << endl;
               cout << "Digite a op��o desejada: ";
               cin >> op;

               if(op == 1)
               {
                   cout << "\nInforme o valor que deseja depositar: R$";
                   cin >> saldo;
                   contanova.saldo = contanova.saldo + saldo;
                   cout << "\nSaldo atual: " << contanova.saldo << endl;
               }
               else if(op == 2)
               {
                   cout << "\nInforme o valor que deseja sacar: R$";
                   cin >> saldo;
                   contanova.saldo = contanova.saldo - saldo;
                   cout << "\nSaldo atual: " << contanova.saldo << endl;
               }
               else if(op == 3)
               {
                   cout << "\nO saldo na conta � R$" << contanova.saldo << endl;
               }
            }
            else
            {
                cout << "\nN�o existem clientes na fila!" << endl;
            }
        }
        else if(aux == 3)
        {
            break;
        }
        else if(aux != 1 || aux != 2 || aux != 3)
        {
            cout << "\nA op��o escolhida � inv�lida! Tente outra!" << endl;
        }
        cout << endl;
    }

    return 0;
}
