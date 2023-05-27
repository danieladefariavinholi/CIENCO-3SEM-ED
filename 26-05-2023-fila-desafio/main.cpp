/* Escreva um programa em C++ que simule um sistema de atendimento em um banco.
O programa deve permitir que o usuário realize as seguintes operações:

Abrir uma nova conta:
O programa deve solicitar ao usuário o nome do cliente e o saldo inicial da conta. Em seguida, deve criar uma nova conta com os dados fornecidos e adicionar
a conta a uma fila de espera para ser atendida por um atendente.

Atender o próximo cliente:
O programa deve remover a próxima conta da fila de espera e exibir as informações do cliente que está sendo atendido, incluindo o nome e o saldo atual da
conta. Em seguida, o atendente deve solicitar ao cliente a operação que deseja realizar, que pode ser depósito, saque ou consulta de saldo.

Após o cliente escolher a operação desejada, o programa deve solicitar o valor a ser depositado, sacado ou consultado e atualizar o saldo da conta
correspondente.

Encerrar o programa:
O programa deve permitir ao usuário encerrar o programa.

Dica:
// Estrutura para representar uma conta bancária
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
        cout << "Opções disponíveis: " << endl;
        cout << "1 - Abrir uma nova conta" << endl;
        cout << "2 - Atender próximo cliente" << endl;
        cout << "3 - Encerrar o programa" << endl;
        cout << "Digite a opção desejada: ";
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


               cout << "\n1 - Depósito" << endl;
               cout << "2 - Saque" << endl;
               cout << "3 - Consultar saldo" << endl;
               cout << "Digite a opção desejada: ";
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
                   cout << "\nO saldo na conta é R$" << contanova.saldo << endl;
               }
            }
            else
            {
                cout << "\nNão existem clientes na fila!" << endl;
            }
        }
        else if(aux == 3)
        {
            break;
        }
        else if(aux != 1 || aux != 2 || aux != 3)
        {
            cout << "\nA opção escolhida é inválida! Tente outra!" << endl;
        }
        cout << endl;
    }

    return 0;
}
