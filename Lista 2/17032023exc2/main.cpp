/*Escreva um programa em C++ que permita a leitura das notas de uma
turma de 20 alunos. Calcular a m�dia da turma e contar quantos alunos
obtiveram nota acima desta m�dia calculada. Escrever a m�dia da turma
e o resultado da contagem*/

#include <iostream>
#include <locale>
#define alunos 20

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float notas[alunos], media = 0, acima = 0, abaixo = 0;

    for(int i = 0; i < alunos; i++)
    {
        cout << "Informe a nota do aluno " << i + 1 << ": ";
        cin >> notas[i];
        media = media + notas[i];
    }

    media = media / alunos;

    for(int i = 0; i < alunos; i++)
    {
        if(notas[i] > media)
        {
            acima++;
        }
        else
        {
            abaixo++;
        }
    }

    cout << "A m�dia � "<< media << endl;
    cout << acima << " alunos obtiveram notas maiores que a m�dia da turma" << endl;
    cout << abaixo << " alunos obtiveram notas menores que a m�dia da turma" << endl;
    return 0;
}
