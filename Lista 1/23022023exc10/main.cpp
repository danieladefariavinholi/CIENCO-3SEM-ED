/*Em um cinema, certo dia, cada espectador respondeu a um questionário, que perguntava a sua idade (ID) e a opinião em relação ao filme (OP),
seguindo os seguintes critérios:

OP    SIGNIFICADO
1     OTIMO
2     BOM
3     REGULAR
4     RUIM

Ao final da pesquisa será indicado quando a idade do usuário for informada como negativa (idade inexistente). Construa um programa em C++ que, lendo
esses dados, calcule e apresente:
A. Quantidade de pessoas que respondeu a pesquisa
B. Média de idade das pessoas que responderam a pesquisa
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
        cout <<"Informe sua opinião sobre o filme de acordo com a legenda abaixo: \nOpinião \tSignificado \n1 \t\tOTIMO \n2 \t\tBOM \n3 \t\tREGULAR \n4 \t\tRUIM\n";
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
            cout <<"\nCódigo inválido!\n";
        }
    }

    cout <<"\nA quantidade de pessoas que responderam essa pesquisa é " << quant;
    cout <<"\nA média de idade das pessoas que responderam a pesquisa é " << (media / quant);
    cout <<"\nA porcentagem das respostas para ótimo foi "<< ((otimo * 100) / quant) <<"%";
    cout <<"\nA porcentagem das respostas para bom foi "<< ((bom * 100) / quant) <<"%";
    cout <<"\nA porcentagem das respostas para regular foi "<< ((regular * 100) / quant) <<"%";
    cout <<"\nA porcentagem das respostas para ruim foi "<< ((ruim * 100) / quant) <<"%";


    return 0;
}







