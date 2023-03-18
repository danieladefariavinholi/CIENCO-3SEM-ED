/*6. Faça um programa em C++ para ler e armazenar em um vetor a temperatura
média de todos os dias do ano. Calcular e escrever:
a) Menor temperatura do ano
b) Maior temperatura do ano
c) Temperatura média anual
d) O número de dias no ano em que a temperatura foi inferior a média
anual*/

#include <iostream>
#include <locale>
#define n 365

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float temp[n], menor = 10000, maior = -10000, media = 0;
    int inferiorMedia = 0;

    for(int i = 0; i < n; i++)
    {
        cout <<"Informe a temperatura do dia " << i + 1 << ": ";
        cin >> temp[i];
        media = media + temp[i];
    }


    for(int i = 0; i < n; i++)
    {
        if(temp[i] < menor)
        {
            menor = temp[i];
        }
        if(temp[i] > maior)
        {
            maior = temp[i];
        }
    }

    cout << endl;
    cout << "A menor temperatura do ano foi " << menor << endl;
    cout << "A maior temperatura do ano foi " << maior << endl;

    media = media / n;
    cout <<"A média das temperaturas no ano foi " << media << endl;

    for(int i = 0; i < n; i++)
    {
        if(temp[i] < media)
        {
            inferiorMedia++;
        }
    }

    cout << inferiorMedia << " dias no ano em que a temperatura foi inferior a média anual" << endl;

    return 0;
}
