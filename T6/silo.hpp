#ifndef SILO_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Silo {
    protected:
        string m_produtor; 
        int m_silo, m_quantidade;
    public:
        Silo() : m_produtor(""), m_silo(0), m_quantidade(0) {};
        Silo(string produtor, int silo) : m_produtor(produtor), m_silo(silo), m_quantidade(0) {};
        ~Silo() {};
        void adicionaCarga(int quantidade);
        void retiraCarga(int quantidade);
        void displayCarga();
};  

#endif 