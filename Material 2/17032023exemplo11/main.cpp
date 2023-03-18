#include <iostream>

using namespace std;

#define LIN 2
#define COL 2

int main()
{
    int matriz[LIN][COL], i , j;

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            cout << "Digite um numero inteiro: ";
            cin >> matriz[i][j];
        }
    }

    cout << "========================================================================" << endl;

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            cout << "O valor na posicao " << i << " " << j << " " << " eh: "
                 << matriz[i][j] << endl;
        }
    }

    return 0;
}
