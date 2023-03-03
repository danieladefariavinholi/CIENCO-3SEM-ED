/*5. Construa um programa em C++ que calcule e apresente quanto deve ser
pago por um produto considerando a leitura do pre�o de etiqueta (PE) e o
c�digo da condi��o de pagamento (CP). Utilize para os c�lculos a tabela de
condi��es de pagamento a seguir:*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

   float PE;
   int CP;

   cout <<"Informe o pre�o da etiqueta: ";
   cin >> PE;

   cout <<"Informe o c�digo da condi��o de pagamento: " << endl;
   cout <<"C�digo \t\tCondi��o de pagamento" <<endl;
   cout <<"1      \t\tA vista em dinheiro ou cheque, com 10% de desconto" <<endl;
   cout <<"2      \t\tA vista com cart�o de cr�dito, com 5% de desconto" <<endl;
   cout <<"3      \t\tEm 2 vezes, pre�o normal de etiqueta sem juros" <<endl;
   cout <<"4      \t\tEm 3 vezes, pre�o da etiqueta com acr�scimo de 10%" <<endl;
   cin >> CP;

   if(CP == 1)
   {
       cout <<"O valor a ser pago � R$" << PE - (PE * 0.1);
   }
   else if(CP == 2)
   {
       cout <<"O valor a ser pago � R$" << PE - (PE * 0.05);
   }
   else if(CP == 3)
   {
       cout <<"O valor a ser pago � R$" << PE << " dividido em 2x de R$" << PE/2;
   }
   else if(CP == 4)
   {
       cout <<"O valor a ser pago � R$" << PE + (PE * 0.1) << " dividido em 3x de R$" << (PE + (PE * 0.1))/3;
   }
   else
   {
       cout <<"O c�digo informado � inv�lido!";
   }

    return 0;
}
