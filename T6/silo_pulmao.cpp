#include "silo_pulmao.hpp"

void SiloPulmao::adicionaCargaPulmao(int quantidade, string tipo){
    if( 50000 - m_quantidade >= quantidade){
        m_quantidade += quantidade;
        m_tipo = tipo;
    }
    else{
        cout << "Sem espaço para carregar." << endl;
    }
};

void SiloPulmao::displayCargaPulmao(){
    cout << "Produtor:" << m_produtor << endl;
    cout << "Quantidade em kg:" << m_quantidade << endl;
    cout << "Tipo de arroz:" << m_tipo << endl;
};