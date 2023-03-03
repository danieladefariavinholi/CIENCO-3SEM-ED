/*3. Fa�a um programa em C++ que receba o n�mero de horas trabalhadas e o valor do sal�rio m�nimo.
Calcule e mostre o sal�rio a receber seguindo as regras abaixo:
a. A hora trabalhada vale a metade do sal�rio m�nimo;
b. O sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado
pelo valor da hora trabalhada
c. O imposto equivale a 3% do sal�rio bruto;
d. O sal�rio a receber equivale ao sal�rio bruto menos o imposto.
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    float salMin, hora, hrTrabalhada, salBruto, imposto, salario;

    cout <<"Informe o n�mero de horas trabalhadas: ";
    cin >> hora;

    cout <<"Informe o valor do sal�rio m�nimo: ";
    cin >> salMin;

    hrTrabalhada = salMin / 2;
    salBruto = hrTrabalhada * hora;
    imposto = 0.3 * salBruto;
    salario = salBruto - imposto;

    cout <<"O sal�rio a receber � R$" <<salario;

    return 0;
}
