#include "Casa.h"
#include <string>
using namespace std;

Casa::Casa()
{
    this->Rua = "Não configurado.";
    this->Numero = 0;
    this->Bairro = "Não configurado.";
    this->CEP = "Não configurado.";
    this->Cidade = "Não configurado.";
    this->Valor = 0;
    this->AouV = "Não configurado.";
    this->TipoDeImovel = 0;
}

Casa::Casa(string rua, int numero, string bairro, string cep, string cidade, double valor, string aouv, int tipodeimovel)
{
    this->Rua = rua;
    this->Numero = numero;
    this->Bairro = bairro;
    this->CEP = cep;
    this->Cidade = cidade;
    this->Valor = valor;
    this->AouV = aouv;
    this->TipoDeImovel = tipodeimovel;
}

string Casa::getRua(){
    return this->Rua;
}

int Casa::getNumero(){
    return this->Numero;
}

string Casa::getBairro(){
    return this->Bairro;
}

string Casa::getCEP(){
    return this->CEP;
}

double Casa::getValor(){
    return this->Valor;
}

string Casa::getCidade(){
    return this->Cidade;
}

string Casa::getAouV(){
    return this-> AouV;
}

void Casa::setRua(string rua){
    this->Rua = rua;
}

void Casa::setNumero(int numero){
    this->Numero = numero;
}

void Casa::setBairro(string bairro){
    this->Bairro = bairro;
}

void Casa::setCEP(string cep){
    this->CEP = cep;
}

void Casa::setCidade(string cidade){
    this->Cidade = cidade;
}

void Casa::setAouV(string aouv){
    this->AouV = aouv;
}

Casa::~Casa()
{
    //dtor
}
