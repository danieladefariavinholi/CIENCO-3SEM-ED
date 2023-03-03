/*Em uma eleição presidencial existem dois candidatos. Os votos são informados através de códigos. Os dados utilizados para a contagem dos
votos têm-se a seguinte codificação: 1,2= voto para os respectivos candidatos; 3= voto nulo; 4= voto em branco; Elabore um programa em C++
que leia o código do candidato em um voto. Como finalizador do conjunto de votos, tem-se o valor 0. Calcule e escreva: (1) percentual de votos para
cada candidato; (2) percentual de votos nulos; (3) percentual de votos em branco; */

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    int voto, quant = 0, cand1 = 0, cand2 = 0, nulo = 0, branco = 0;

    while(voto != 0)
    {
        cout <<"\nDigite seu voto: " << endl <<"1 para candidato 1. \n2 para candidato 2. \n3 para nulo. \n4 para branco. \n0 para sair." << endl;
        cin >> voto;

        quant++;

        if(voto == 1)
        {
            cand1++;
        }
        else if(voto == 2)
        {
            cand2++;
        }
        else if(voto == 3)
        {
            nulo++;
        }
        else if(voto == 4)
        {
            branco++;
        }
        else if(voto == 0)
        {
            quant--;
        }
        else
        {
            cout <<"O código informado é inválido!\n";
            quant--;
        }
    }

    cout <<"O percentual de votos para o candidato 1 é " <<((cand1 * 100) / quant) <<"%" << endl;
    cout <<"O percentual de votos para o candidato 2 é " <<((cand2 * 100) / quant) <<"%" << endl;
    cout <<"O percentual de votos nulos é " <<((nulo * 100) / quant) <<"%" << endl;
    cout <<"O percentual de votos em branco é " <<((branco * 100) / quant) <<"%" << endl;


    return 0;
}
