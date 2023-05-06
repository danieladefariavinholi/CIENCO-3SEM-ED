#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void imprimeVetor (int vetor[])
{
    cout << endl;

    cout << "Vetor: ";
    for(int i = 0; i < 5; i++)
    {
        cout << vetor[i] << "  ";
    }
}

void bubbleSort3 (int vetor[])
{
    int aux = 0, troca = 1, n = 1;


    while(troca == 1 && n <= 5)
    {
        //ordenado de forma decrescente
        //laço com a quanidade de elementos  vetar e enquanto houver troca
        troca = 0;
            for(int y = 0; y <= 3; y++)
            {
                if(vetor[y] < vetor[y + 1])
                {
                    troca = 1;
                    aux = vetor[y];
                    vetor[y] = vetor[y + 1];
                    vetor[y + 1] = aux;
                }

            }
        n++;
    }

}

int main()
{
    int vetor[5];

    for(int i = 0; i < 5; i++)
    {
        cout << "Digite o numero" << endl;
        cin >> vetor[i];
    }

   bubbleSort3(vetor);
   imprimeVetor(vetor);

    return 0;
}
