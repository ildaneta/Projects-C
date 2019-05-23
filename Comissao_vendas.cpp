#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int matricula_vendedor, anos_trabalhados;
    string nome_vendedor;
    float mes1, mes2, mes3, comissao_mes1, comissao_mes2, comissao_mes3, total_comissao;

    cout << "======================================= \n";
    cout << "         Comissão de Vendas \n";
    cout << "======================================= \n";
    cout << "\n";
    cout << "Informe os dados abaixo: \n";
    cout << "Nome: ";
    cin >> nome_vendedor;
    cout << "Matrícula: ";
    cin >> matricula_vendedor;
    cout << "Quantos anos trabalhados na empresa? [Apenas número]: ";
    cin >> anos_trabalhados;
    cout << "\n";
    cout << "Insira o valor de venda do 1º mês: R$";
    cin >> mes1;
    cout << "Insira o valor de venda do 2º mês: R$";
    cin >> mes2;
    cout << "Insira o valor de venda do 3º mês: R$";
    cin >> mes3;

    if (anos_trabalhados >= 10){
        comissao_mes1 = mes1 * 0.1;
        comissao_mes2 = mes2 * 0.12;
        comissao_mes3 = mes3 * 0.15;
        total_comissao = (comissao_mes1 + comissao_mes2 + comissao_mes3);
    }

    else{
        comissao_mes1 = mes1 * 0.1;
        comissao_mes2 = mes2 * 0.1;
        comissao_mes3 = mes3 * 0.1;

        total_comissao = (comissao_mes1 + comissao_mes2 + comissao_mes3);
    }

    system("clear");

    cout << "\n";
    cout << "================================================ \n";
    cout << "Seguem abaixo os dados para visualização \n";
    cout << "\n";
    cout << "Matrícula: " <<matricula_vendedor<< "\n";
    cout << "Nome: "<<nome_vendedor<< "\n";
    cout << "Tempo de casa: " <<anos_trabalhados<< " anos \n";
    cout << "\n";
    cout << "Valor recebido no 1º mês: R$" <<mes1<< "\n";
    cout << "Valor recebido no 2º mês: R$" <<mes2<< "\n";
    cout << "Valor recebido no 3º mês: R$" <<mes3<< "\n";
    cout << "\n";
    cout << "Valor da comissão do 1º mês: R$" <<comissao_mes1<< "\n";
    cout << "Valor da comissão do 2º mês: R$" <<comissao_mes2<< "\n";
    cout << "Valor da comissão do 3º mês: R$" <<comissao_mes3<< "\n";
    cout << "\n";
    cout << "Valor total das comissões recebidas: R$" <<total_comissao<< "\n";
    cout << "================================================ \n";

    return 0;
}
