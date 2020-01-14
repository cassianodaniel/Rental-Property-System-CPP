#ifndef TERRENO_H
#define TERRENO_H
#include <Imovel.h>
#include <string>

using namespace std;

class Terreno : protected Imovel
{    public:
        Terreno();
        Terreno(string, int, string, string, string, double, string, int);
        virtual ~Terreno();
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

#endif // TERRENO_H
