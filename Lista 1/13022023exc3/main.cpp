/*3. Faça um programa em C++ que receba o número de horas trabalhadas e o valor do salário mínimo.
Calcule e mostre o salário a receber seguindo as regras abaixo:
a. A hora trabalhada vale a metade do salário mínimo;
b. O salário bruto equivale ao número de horas trabalhadas multiplicado
pelo valor da hora trabalhada
c. O imposto equivale a 3% do salário bruto;
d. O salário a receber equivale ao salário bruto menos o imposto.
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    float salMin, hora, hrTrabalhada, salBruto, imposto, salario;

    cout <<"Informe o número de horas trabalhadas: ";
    cin >> hora;

    cout <<"Informe o valor do salário mínimo: ";
    cin >> salMin;

    hrTrabalhada = salMin / 2;
    salBruto = hrTrabalhada * hora;
    imposto = 0.3 * salBruto;
    salario = salBruto - imposto;

    cout <<"O salário a receber é R$" <<salario;

    return 0;
}
