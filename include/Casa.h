#ifndef CASA_H
#define CASA_H
#include <Imovel.h>
#include <string>

using namespace std;

class Casa : protected Imovel
{
    public:
        Casa();
        Casa(string, int, string, string, string, double, string, int);
        virtual ~Casa();
        string getRua();
        void setRua(string);
        int getNumero();
        void setNumero(int);
        string getBairro();
        void setBairro(string);
        string getCEP();
        void setCEP(string);
        string getCidade();
        void setCidade(string);
        double getValor();
        void setValor(double);
        string getAouV();
        void setAouV(string);
    protected:
        string Rua;
        int Numero;
        string Bairro;
        string CEP;
        string Cidade;
        double Valor;
        string AouV;
    private:
};

#endif // CASA_H
