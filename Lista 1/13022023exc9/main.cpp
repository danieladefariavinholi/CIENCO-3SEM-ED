/*Fa�a um programa em C++ que leia dez conjuntos de dois valores, o primeiro
representando o n�mero do aluno e o segundo a sua altura em cent�metros.
Encontre o aluno mais alto e o mais baixo. Exiba o n�mero do aluno mais
baixo o n�mero de aluno mais alto e as respectivas alturas.*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    int cont = 0, numAlto = 0, numBaixo = 0, num = 0;
    float alto = 0, baixo = 99999, altura = 0;

    while(cont < 10)
    {
        cout <<"Informe o n�mero do aluno: " << endl;
        cin >> num;
        cout <<"Informe a altura do aluno: " << endl;
        cin >> altura;

        if(altura > alto)
        {
            alto = altura;
            numAlto = num;
        }
        else{}

        if(baixo > altura)
        {
            baixo = altura;
            numBaixo = num;
        }
        else{}

        cont++;
    }

    cout <<"O aluno n�mero "<< numAlto <<" � o mais alto da turma com "<< alto;
    cout <<"\nO aluno n�mero "<< numBaixo <<" � o mais baixo da turma com "<< baixo;

    return 0;
}
