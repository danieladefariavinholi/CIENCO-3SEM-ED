/*4. Construa um programa em C++ que calcule o novo sal�rio de um funcion�rio.
Considere que o funcion�rio dever� receber um reajuste de 15% caso seu
sal�rio seja menor que 1000. Se o sal�rio for maior ou igual a 1000, mas
menor ou igual a 1500, o reajuste deve ser de 10%. Caso o sal�rio seja maior
que 1500, o reajuste deve ser de 5%.*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    float salario;

    cout <<"Informe o valor do sal�rio para saber o reajuste: ";
    cin >> salario;

    if(salario < 1000)
    {
        cout <<"O novo sal�rio ser� R$" << (salario + (salario * 0.15));
    }
    else if(salario >= 1000 && salario <= 1500)
    {
        cout <<"O novo sal�rio ser� R$" << (salario + (salario * 0.1));
    }
    else
    {
        cout <<"O novo sal�rio ser� R$" << (salario + (salario * 0.05));
    }


    return 0;
}
