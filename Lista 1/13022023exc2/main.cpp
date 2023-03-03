/* Elaborar um programa em C++ em que dada a idade de um nadador,
classifique-o em uma das seguintes categorias: infantil A (de 5 a 7 anos),
infantil B (de 8 a 10 anos), juvenil A (de 11 a 13 anos), juvenil B (14 a 17
anos) e senior (maior que 17 anos)*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    int idade;

    cout <<"Informe a idade do nadador para saber a categoria: ";
    cin >> idade;

    if(idade < 5)
    {
        cout <<"Não existe categorias para esta idade";
    }
    else if(idade >= 5 && idade <= 7)
    {
        cout <<"A categoria adequada é Infantil A";
    }
    else if(idade >= 8 && idade <= 10)
    {
        cout <<"A categoria adequada é Infantil B";
    }
    else if(idade >= 11 && idade <= 13)
    {
        cout <<"A categoria adequada é Juvenil A";
    }
    else if(idade >= 14 && idade <= 17)
    {
        cout <<"A categoria adequada é Juvenil B";
    }
    else
    {
        cout <<"A categoria adequada é Senior";
    }

    return 0;
}
