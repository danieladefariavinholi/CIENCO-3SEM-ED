/*1. Elabore um programa em C++ que solicite o peso e a altura de uma
determinada pessoa. Ap�s a digita��o, exibir se esta pessoa est� ou n�o com
seu peso ideal, conforme tabela abaixo:
IMC
(IMC = peso / altura�)
MENSAGEM
imc < 20         Abaixo do peso
20 > = imc < 25  Peso Ideal
IMC > = 25       Acima do Peso*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    float peso, altura, imc;

    cout << "Informe seu peso: ";
    cin >> peso;

    cout << "Informe sua altura: ";
    cin >> altura;

    imc = peso / (altura * altura);

    if (imc < 20)
    {
        cout << "O IMC  � " << imc << " , ent�o est� abaixo do peso.";
    }
    else if (20 >= imc && imc < 25)
    {
        cout << "O IMC  � " << imc << " , ent�o est� no peso ideal.";
    }
    else
    {
        cout << "O IMC  � " << imc << " , ent�o est� acima do peso.";
    }

    return 0;
}
