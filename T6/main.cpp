#include "silo_pulmao.hpp"

int main() {
    string produtor;
    cout << "Insira seu nome de produtor:" << endl;
    cin >> produtor;
    
    vector <Silo> silos;
    for (int i=0; i<8; i++){
        Silo n = Silo(produtor,i+1);
        silos.push_back(n);
    }
    SiloPulmao siloPulmao;

    while(true) {
        int silo, quantidade;
        string tipo;

        cout << "\nBem vindo " << produtor << ", selecione qual opção você quer escolher" << endl;
        cout << "1. Adicionar Carga" << endl;
        cout << "2. Retirar Carga" << endl;
        cout << "3. Mostrar Cargas no silo" << endl;
        cout << "4. Mostrar todas as cargas" << endl;
        cout << "5. Adicionar Carga(silo pulmao)" << endl;
        cout << "6. Retirar Carga(silo pulmao)" << endl;
        cout << "7. Mostrar carga(silo pulmao)" << endl;
        cout << "8. Sair" << endl;

        char ch;
        cin >> ch;

        if (ch == '1'){
            cout << "\nSelecione qual silo você quer carregar:" << endl;
             cin >> silo;
            cout << "insira a quantidade em kg:" << endl;
             cin >> quantidade;
            if (silo - 1 < 8 && silo - 1 >=0){
                silos.at(silo -1).adicionaCarga(quantidade);
                cout << quantidade << " KG adicionado(s) ao silo: " << silo << endl;
            }else{
                cout <<  "Operaçao invalida" << endl;
            }
            continue;
        }

        if (ch == '2'){
            cout << "Selecione qual silo você quer descarregar:" << endl;
            cin >> silo;
            cout << "insira a quantidade em kg:" << endl;
            cin >> quantidade;
            if (silo - 1 < 8 && silo - 1 >=0){
                silos.at(silo -1).retiraCarga(quantidade);
                cout << quantidade << " KG retirados(s) do silo: " << silo << endl;
            }else{
                cout <<  "Operaçao invalida" << endl;
            }
            continue;
        }

        if (ch == '3'){
            cout << "Selecione qual silo você quer mostrar:" << endl;
            cin >> silo;
            if (silo - 1 < 8 && silo - 1 >=0){
                silos.at(silo -1).displayCarga();
            }else{
                cout <<  "Operaçao invalida" << endl;
            }
            continue;
        }

        if (ch == '4'){
            for(int i = 0; i<8; i++){
                silos.at(i).displayCarga();
            }
            continue;
        }

        if (ch == '5'){
            cout << "Insira o tipo do arroz:" << endl;
            cin >> tipo;
            cout << "insira a quantidade em kg:" << endl;
            cin >> quantidade;
            siloPulmao.adicionaCargaPulmao(quantidade, tipo);
            cout << "Carga adicionada\n" << endl;
            continue;
        }

        if (ch == '6'){
            cout << "Insira a quantidade em kg:" << endl;
            cin >> quantidade;
            siloPulmao.retiraCarga(quantidade);
            continue;
        }

        if (ch == '7'){
            siloPulmao.displayCargaPulmao();
            continue;
        }

        if (ch == '8'){
            break;
        }        

    }
    
    return 0;
}