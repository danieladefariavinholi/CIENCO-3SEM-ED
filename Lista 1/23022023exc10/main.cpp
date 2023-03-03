/*Em um cinema, certo dia, cada espectador respondeu a um question�rio, que perguntava a sua idade (ID) e a opini�o em rela��o ao filme (OP),
seguindo os seguintes crit�rios:

OP    SIGNIFICADO
1     OTIMO
2     BOM
3     REGULAR
4     RUIM

Ao final da pesquisa ser� indicado quando a idade do usu�rio for informada como negativa (idade inexistente). Construa um programa em C++ que, lendo
esses dados, calcule e apresente:
A. Quantidade de pessoas que respondeu a pesquisa
B. M�dia de idade das pessoas que responderam a pesquisa
C. Porcentagem de cada uma das respostas
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    int op, id = 1, quant = 0, media = 0, otimo = 0, bom = 0, regular = 0, ruim = 0;

    while(id > 0)
    {
        cout <<"Informe sua opini�o sobre o filme de acordo com a legenda abaixo: \nOpini�o \tSignificado \n1 \t\tOTIMO \n2 \t\tBOM \n3 \t\tREGULAR \n4 \t\tRUIM\n";
        cin >> op;
        cout <<"Informe sua idade: ";
        cin >> id;

        if(id < 0)
        {
            cout <<"Idade inexistente!";
            break;
        }
        else
        {
            media = media + id;
            quant++;
        }


        if(op == 1)
        {
            otimo++;
        }
        else if(op == 2)
        {
            bom++;
        }
        else if(op == 3)
        {
            regular++;
        }
        else if(op == 4)
        {
            ruim++;
        }
        else
        {
            quant--;
            cout <<"\nC�digo inv�lido!\n";
        }
    }

    cout <<"\nA quantidade de pessoas que responderam essa pesquisa � " << quant;
    cout <<"\nA m�dia de idade das pessoas que responderam a pesquisa � " << (media / quant);
    cout <<"\nA porcentagem das respostas para �timo foi "<< ((otimo * 100) / quant) <<"%";
    cout <<"\nA porcentagem das respostas para bom foi "<< ((bom * 100) / quant) <<"%";
    cout <<"\nA porcentagem das respostas para regular foi "<< ((regular * 100) / quant) <<"%";
    cout <<"\nA porcentagem das respostas para ruim foi "<< ((ruim * 100) / quant) <<"%";


    return 0;
}







