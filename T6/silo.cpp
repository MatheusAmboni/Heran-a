#include "silo.hpp"

void Silo::displayCarga(){
    cout << "Produtor:" << m_produtor << endl;
    cout << "Silo:" << m_silo << endl;
    cout << "Quantidade em kg:" << m_quantidade << endl;
    cout << "\n" << endl;
}

void Silo::adicionaCarga(int quantidade){
    if( 200000 - m_quantidade >= quantidade){
        m_quantidade += quantidade;
    }
    else{
        cout << "Sem espaço para carregar." << endl;
    }
};

void Silo::retiraCarga(int quantidade){
    if(m_quantidade >= quantidade){
        m_quantidade -= quantidade;
    }
    else{
        cout << "Carga excedente!" << endl;
    }
};