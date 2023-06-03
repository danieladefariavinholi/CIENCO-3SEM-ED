#include <iostream>

using namespace std;

//Defini��o da estrutura do n� da lista encadeada
struct Node
{
    int dado; //dado do n�
    Node* proximo; // ponteiro para o proximo n�
    Node* anterior; // ponteiro para o n� anterior
};

//Fun��o para criar um novo n� com o dado fornecido
Node* criarNo(int dado)
{
    Node* novoNo = new Node;
    novoNo->dado = dado;
    novoNo->proximo = nullptr;
    novoNo->anterior = nullptr;
    return novoNo;
}

//Fun��o para inserir um novo n� no inicio da lista
void inserirNoInicio(Node** cabeca, int dado)
{
    //cria um novo n�
    Node* novoNo = criarNo(dado);

    //atualiza os poneiros do novo n� e don� atual no inicio da lista
    novoNo->proximo = *cabeca;
    if(*cabeca != nullptr)
    {
        (*cabeca)->anterior = novoNo;
    }

    //atualiza o poteiro para o novo n� como o novo n� no inicio da lista
    *cabeca = novoNo;
}

//fun��o para remover um n� com o dado fornecido na lista
void removerNo(Node** cabeca, int dado)
{
    //verifica se a lista est� vazia
    if(*cabeca == nullptr)
    {
        cout << "Lista vazia. Nenhum no removido" << endl;
        return;
    }

    //verifica se o primeiro n� cont�m o dado a ser removido
    if((*cabeca)->dado == dado)
    {
        Node* temp = *cabeca;
        *cabeca = (*cabeca)->proximo;
        if(*cabeca != nullptr)
        {
            (*cabeca)->anterior = nullptr;
        }
        delete temp;
        cout << "No removido" << endl;
        return;
    }

    //procura o n� a ser removido na lista
    Node * atual = *cabeca;
    while(atual != nullptr && atual->dado != dado)
    {
        atual = atual->proximo;
    }

    //se o n� foi encontrado, remove-o da lista
    if(atual != nullptr)
    {
        if(atual->anterior != nullptr)
        {
            atual->anterior->proximo = atual->proximo;
        }
        if(atual->proximo != nullptr)
        {
            atual->proximo->anterior = atual->anterior;
        }
        delete atual;
        cout << "No removido" << endl;
    }
    else
    {
        cout << "No nao encontrado na lista" << endl;
    }
}

//fun��o para imprimir os elementos da lista
void imprimeLista(Node* cabeca)
{
    cout << "Elementos da lista: ";
    while(cabeca != nullptr)
    {
        cout << cabeca->dado << " ";
        cabeca = cabeca->proximo;
    }
    cout << endl;
}


int main()
{
    Node* cabeca = nullptr; //ponteiro para o n� da lista

    //inser��o de elementos na lista
    inserirNoInicio(&cabeca, 3);
    inserirNoInicio(&cabeca, 5);
    inserirNoInicio(&cabeca, 7);

    //imprime os elementos da lista
    imprimeLista(cabeca);

    //remove um n� da lista
    removerNo(&cabeca, 5);

    //imprime os elementos da lista
    imprimeLista(cabeca);
    return 0;
}
