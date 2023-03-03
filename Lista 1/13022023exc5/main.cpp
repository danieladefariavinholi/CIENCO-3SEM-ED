/*5. Construa um programa em C++ que calcule e apresente quanto deve ser
pago por um produto considerando a leitura do preço de etiqueta (PE) e o
código da condição de pagamento (CP). Utilize para os cálculos a tabela de
condições de pagamento a seguir:*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

   float PE;
   int CP;

   cout <<"Informe o preço da etiqueta: ";
   cin >> PE;

   cout <<"Informe o código da condição de pagamento: " << endl;
   cout <<"Código \t\tCondição de pagamento" <<endl;
   cout <<"1      \t\tA vista em dinheiro ou cheque, com 10% de desconto" <<endl;
   cout <<"2      \t\tA vista com cartão de crédito, com 5% de desconto" <<endl;
   cout <<"3      \t\tEm 2 vezes, preço normal de etiqueta sem juros" <<endl;
   cout <<"4      \t\tEm 3 vezes, preço da etiqueta com acréscimo de 10%" <<endl;
   cin >> CP;

   if(CP == 1)
   {
       cout <<"O valor a ser pago é R$" << PE - (PE * 0.1);
   }
   else if(CP == 2)
   {
       cout <<"O valor a ser pago é R$" << PE - (PE * 0.05);
   }
   else if(CP == 3)
   {
       cout <<"O valor a ser pago é R$" << PE << " dividido em 2x de R$" << PE/2;
   }
   else if(CP == 4)
   {
       cout <<"O valor a ser pago é R$" << PE + (PE * 0.1) << " dividido em 3x de R$" << (PE + (PE * 0.1))/3;
   }
   else
   {
       cout <<"O código informado é inválido!";
   }

    return 0;
}
