#include <iostream>
#define tam 10

using namespace std;

void imprimeVetor (int x[])
{
    for(int i = 0; i < tam; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
}

//junta os dois subarrays criados ao dividir o vetor principal
void Merge (int vetor[tam], int indiceEsquerdo, int meio, int indiceDireito)
{
    int i, j, k;

    int n1 = meio - indiceEsquerdo + 1; // tamanho do primeiro vetor auxiliar
    int n2 = indiceDireito - meio; //tamanho do segundo vetor auxiliar

    //cria dois arrays temporarios
    int vetorEsquerdo[n1], vetorDireito[n2];

    //passa os elementos do vetor principal para o primeiro vetor auxiliar(esquerda)
    for(i = 0; i < n1; i++)
    {
        vetorEsquerdo[i] = vetor[indiceEsquerdo + i];
    }

    //passa os elementos do vetor principal para o segundo vetor auxiliar(direito)
    for(j = 0; j < n2; j++)
    {
        vetorDireito[j] = vetor[meio + 1 + j];
    }

    //reseta as variaveis
    i = 0;
    j = 0;
    k = indiceEsquerdo;

    while(i < n1 && j < n2)
    {
        //caso o valor da esquerda seja menor
        if(vetorEsquerdo[i] <= vetorDireito[j])
        {
            //passo para o meu vetor principal o valor menor
            vetor[k] = vetorEsquerdo[i];

            //incrementa o auxiliar para passar a analise para os proximos valores do vetor auxiliar
            i++;
        }
        else
        {
            //passo para o meu vetor principal o valor menor
            vetor[k] = vetorDireito[j];

            //incrementa o auxiliar para passar a analise para os proximos valores do vetor auxiliar
            j++;
        }

        //aumenta o indice de posicionamento no vetor
        k++;
    }

    //se faltarem alguns elementos do array esquerdo, passa eles para o array principal
    while(i < n1)
    {
        vetor[k] = vetorEsquerdo[i];
        i++;
        k++;
    }

    //se faltarem alguns elementos do array direito, passa eles para o array principal
    while(j < n2)
    {
        vetor[k] = vetorDireito[j];
        j++;
        k++;
    }
}

void mergeSort(int vetor[tam], int indiceEsquerdo, int indiceDireito)
{
    if(indiceEsquerdo < indiceDireito)
    {
        //encontra o meio
        int meio = indiceEsquerdo + (indiceDireito - indiceEsquerdo) / 2;

        //da metade pra tras
        mergeSort(vetor, indiceEsquerdo, meio);

        //da metade pra frente
        mergeSort(vetor, meio + 1, indiceDireito);

        //une os dois subarrays que foram criados
        Merge(vetor, indiceEsquerdo, meio, indiceDireito);
    }
}

int main()
{
    int vetor[tam] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    imprimeVetor(vetor);
    cout << endl;

    mergeSort(vetor, 0, tam - 1);
    imprimeVetor(vetor);

    return 0;
}
