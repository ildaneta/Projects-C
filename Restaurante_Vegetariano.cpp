#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int qtd_filiais;

    cout << "Deseja inserir quantas filiais? \n";
    cin >> qtd_filiais;
    cout << "\n";

    int num_filial[qtd_filiais];
    float mes1[qtd_filiais] = {}, mes2[qtd_filiais] = {}, mes3[qtd_filiais] = {},  total_filial[qtd_filiais]={};
    float total_empresa = 0;

  // Caso o código seja compilado em linux deverá ser trocado por “clear”
    system("cls");

    for(int i = 1; i <= qtd_filiais; i++) {
        cout << "Insira o numero da filial " << i << " [Caso deseje sair tecle 0]: \n";
        cin >> num_filial[i];

         if(num_filial[1] == 0){

	// Caso o código seja compilado em linux deverá ser trocado por “clear”
            system("cls");

            cout << "\n";
            cout << "*** NÃO houve o cadastro de nenhuma filial ***\n";

             exit(0);
        }

        if(num_filial[i] == 0){
	        // Caso o código seja compilado em linux deverá ser trocado por “clear”
            system("cls");

            cout << "\n";
            goto inicio;
         }
        cout << "Valor do 1 mes: R$ \n";
        cin >> mes1[i];
        cout << "Valor do 2 mes: R$ \n";
        cin >> mes2[i];
        cout << "Valor do 3 mes: R$ \n";
        cin >> mes3[i];
        cout << "\n";
        cout << "\n";

        total_filial[i] = mes1[i] + mes2[i] + mes3[i];
        total_empresa = total_empresa + total_filial[i];
    }

    // Caso o código seja compilado em linux deverá ser trocado por “clear”
    system("cls");

    inicio:
    for(int i = 1; i <= qtd_filiais; i++){

        if(num_filial[i] == 0){
            cout << "\n";
            goto fim;
            exit(0);
         }

         cout << "Checagem dos dados: ";
         cout << "\n";

         cout << "\n";
         cout << "---------------------------------------------------------- \n";
         cout << "Numero da filial: " << num_filial[i] <<"\n";
         cout << "O valor do mes 1 foi: " << mes1[i] << "\n";
         cout << "O valor do mes 2 foi: " << mes2[i] << "\n";
         cout << "O valor do mes 3 foi: " << mes3[i] << "\n";
         cout << "\n";
         cout << "O valor total das vendas da filial " << num_filial[i] <<" foi: R$ " << total_filial[i] << "\n";
         cout << "----------------------------------------------------------- \n";
         cout << "\n";

         if(num_filial[i] == 0){
            cout << "\n";
            goto fim;
            exit(0);
         }
        }
    fim:
    cout << " *** O total recebido pela(s) venda(s) da(s) filiais foi(ram): R$ " << total_empresa;
    cout << "\n";

    return 0;
}
