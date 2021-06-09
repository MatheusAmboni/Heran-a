#include <string>
#include <iostream>
using namespace std;

class Cliente {
    private:
    string nome;

    public: 
    Cliente() {};
}




class ContaCorrente {
    protected:
    float saldo;

    public:
    
    Conta() : saldo(1) {};


    ~ContaCorrente() {};

    void depositar(float , float , float ){
        
    };

    bool transferir(conta:ContaCorrente);
    bool sacar(float valor);
};

class ContaEspecial : public ContaCorrente {
    private:
        float limite;

    public:
    ContaEspecial() {};
    ~ContaEspecial() {};

}