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

    //define o proximo do novo nó como o nó atual no inicio da lista
    novoNo->proximo = *cabeca;

    //atualiza o poteiro para o novo nó como o novo nó no inicio da lista
    *cabeca = novoNo;
}

//função para remover um nó com o dado fornecido na lista
void removerNo(Node** cabeca, int dado)
{
    //verifica se a lista está vazia
    if(*cabeca == nullptr)
    {
        cout << "Lista vazia. Nenhum no removido" << endl;
        return;
    }

    //verifica se o primeiro nó contém o dado a ser removido
    if((*cabeca)->dado == dado)
    {
        Node* temp = *cabeca;
        *cabeca = (*cabeca)->proximo;
        delete temp;
        cout << "No removido" << endl;
        return;
    }

    //procura o nó a ser removido na lista
    Node* anterior = *cabeca;
    Node * atual = (*cabeca)->proximo;
    while(atual != nullptr && atual->dado != dado)
    {
        anterior = atual;
        atual = atual->proximo;
    }

    //se o nó foi encontrado, remove-o da lista
    if(atual != nullptr)
    {
        anterior->proximo = atual->proximo;
        delete atual;
        cout << "No removido" << endl;
    }
    else
    {
        cout << "No nao encontrado na lista" << endl;
    }
}

//função para imprimir os elementos da lista
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
    Node* cabeca = nullptr; //ponteiro para o nó da lista

    //inserção de elementos na lista
    inserirNoInicio(&cabeca, 10);
    inserirNoInicio(&cabeca, 20);
    inserirNoInicio(&cabeca, 30);

    //imprime os elementos da lista
    imprimeLista(cabeca);

    //remove um nó da lista
    removerNo(&cabeca, 20);

    //imprime os elementos da lista
    imprimeLista(cabeca);

    return 0;
}
