/*Faça um programa em C++ que leia dez conjuntos de dois valores, o primeiro
representando o número do aluno e o segundo a sua altura em centímetros.
Encontre o aluno mais alto e o mais baixo. Exiba o número do aluno mais
baixo o número de aluno mais alto e as respectivas alturas.*/

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
        cout <<"Informe o número do aluno: " << endl;
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

    cout <<"O aluno número "<< numAlto <<" é o mais alto da turma com "<< alto;
    cout <<"\nO aluno número "<< numBaixo <<" é o mais baixo da turma com "<< baixo;

    return 0;
}
