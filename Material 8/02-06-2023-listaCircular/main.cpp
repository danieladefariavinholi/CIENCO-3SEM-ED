#include <iostream>

using namespace std;

//Defini��o da estrutura do n� da lista encadeada
struct Node
{
    int dado; //dado do n�
    Node* proximo; // ponteiro para o proximo n�
};

//Fun��o para criar um novo n� com o dado fornecido
Node* criarNo(int dado)
{
    Node* novoNo = new Node;
    novoNo->dado = dado;
    novoNo->proximo = nullptr;
    return novoNo;
}

//Fun��o para inserir um novo n� no inicio da lista
void inserirNoInicio(Node** cabeca, int dado)
{
    //cria um novo n�
    Node* novoNo = criarNo(dado);

    if(*cabeca == nullptr)
    {
        //se a lista estiver vazia, o novo n� ser� o inicio e o fim da lista
        *cabeca = novoNo;
        novoNo->proximo = novoNo; // apornta o proximo n� pra ele mesmo
    }
    else
    {
        //se a lista n�o estiver vazia, insere o novo n� no inicio e atualiza os ponteiros
        novoNo->proximo = *cabeca;
        Node* atual = *cabeca;
        while(atual->proximo != *cabeca)
        {
            atual = atual->proximo;
        }
        atual->proximo = novoNo;
        *cabeca = novoNo;
    }
}

//fun��o para remover um n� com o dado fornecido na lista
void removerNoInicio(Node** cabeca)
{
    //verifica se a lista est� vazia
    if(*cabeca == nullptr)
    {
        cout << "Lista vazia. Nenhum no removido" << endl;
        return;
    }

    //verifica se ha um n� na lista
    else if((*cabeca)->proximo == *cabeca)
    {
        Node* temp = *cabeca;
        *cabeca = (*cabeca)->proximo;
        delete *cabeca;
        *cabeca = nullptr;
        cout << "No removido. Lista vazia" << endl;
        return;
    }

    //remove o n� do inicio e atualiza os ponteiros
    else
    {
         Node * atual = (*cabeca);
         while(atual->proximo != *cabeca)
         {
             atual = atual->proximo;
         }
         atual->proximo = (*cabeca)->proximo;
         Node* temp = *cabeca;
         *cabeca = (*cabeca)->proximo;
         delete temp;
         cout << "No removido" << endl;
    }

}

//fun��o para imprimir os elementos da lista
void imprimeLista(Node* cabeca)
{
    if(cabeca == nullptr)
    {
        cout << "Lista vazia" << endl;
        return;
    }
    cout << "Elementos da lista: ";
    Node* atual = cabeca;
    do
    {
        cout << atual->dado << " ";
        atual = atual->proximo;
    }
    while(atual != cabeca);

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
    removerNoInicio(&cabeca);

    //imprime os elementos da lista
    imprimeLista(cabeca);

    return 0;
}
