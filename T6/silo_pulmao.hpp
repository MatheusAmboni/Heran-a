#ifndef SILO_PULMAO_H
#include "silo.hpp"

using namespace std;

class SiloPulmao: public Silo{
    private:
       string m_tipo;
    public:
        SiloPulmao(): m_tipo(""){};
        ~SiloPulmao(){};
        SiloPulmao(string tipo): m_tipo(tipo){};
        void adicionaCargaPulmao(int quantidade, string tipo);
        void displayCargaPulmao();
};  

#endif

