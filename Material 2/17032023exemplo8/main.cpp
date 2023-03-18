#include <iostream>

using namespace std;

int main()
{

    char nome[] = "daniela";
    int i = 0;
    /* '\0' é um caracter null, com valor numerico 0 [e considerado false
    uma string é um array de caracteres, apesar de ser um array, deve-se ficar atento
    ao fato de que as strings tem no elemento seguinte a ultima letra da palavra
    frase armazenada, um caracter '\0' */

    while(nome[i] != '\0')
    {
        cout << nome[i];
        i++;
    }

    return 0;
}
