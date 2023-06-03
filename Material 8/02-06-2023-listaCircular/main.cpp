#include <iostream>

using namespace std;

//Definição da estrutura do nó da lista encadeada
struct Node
{
    int dado; //dado do nó
    Node* proximo; // ponteiro para o proximo nó
};

//Função para criar um novo nó com o dado fornecido
Node* criarNo(int dado)
{
    Node* novoNo = new Node;
    novoNo->dado = dado;
    novoNo->proximo = nullptr;
    return novoNo;
}

//Função para inserir um novo nó no inicio da lista
void inserirNoInicio(Node** cabeca, int dado)
{
    //cria um novo nó
    Node* novoNo = criarNo(dado);

    if(*cabeca == nullptr)
    {
        //se a lista estiver vazia, o novo nó será o inicio e o fim da lista
        *cabeca = novoNo;
        novoNo->proximo = novoNo; // apornta o proximo nó pra ele mesmo
    }
    else
    {
        //se a lista não estiver vazia, insere o novo nó no inicio e atualiza os ponteiros
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

//função para remover um nó com o dado fornecido na lista
void removerNoInicio(Node** cabeca)
{
    //verifica se a lista está vazia
    if(*cabeca == nullptr)
    {
        cout << "Lista vazia. Nenhum no removido" << endl;
        return;
    }

    //verifica se ha um nó na lista
    else if((*cabeca)->proximo == *cabeca)
    {
        Node* temp = *cabeca;
        *cabeca = (*cabeca)->proximo;
        delete *cabeca;
        *cabeca = nullptr;
        cout << "No removido. Lista vazia" << endl;
        return;
    }

    //remove o nó do inicio e atualiza os ponteiros
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

//função para imprimir os elementos da lista
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
    Node* cabeca = nullptr; //ponteiro para o nó da lista

    //inserção de elementos na lista
    inserirNoInicio(&cabeca, 3);
    inserirNoInicio(&cabeca, 5);
    inserirNoInicio(&cabeca, 7);

    //imprime os elementos da lista
    imprimeLista(cabeca);

    //remove um nó da lista
    removerNoInicio(&cabeca);

    //imprime os elementos da lista
    imprimeLista(cabeca);

    return 0;
}
