#include "Terreno.h"
#include <string>
using namespace std;

Terreno::Terreno()
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

Terreno::Terreno(string rua, int numero, string bairro, string cep, string cidade, double valor, string aouv, int tipodeimovel)
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

string Terreno::getRua(){
    return this->Rua;
}

int Terreno::getNumero(){
    return this->Numero;
}

string Terreno::getBairro(){
    return this->Bairro;
}

string Terreno::getCEP(){
    return this->CEP;
}

double Terreno::getValor(){
    return this->Valor;
}

string Terreno::getCidade(){
    return this->Cidade;
}

string Terreno::getAouV(){
    return this-> AouV;
}

void Terreno::setRua(string rua){
    this->Rua = rua;
}

void Terreno::setNumero(int numero){
    this->Numero = numero;
}

void Terreno::setBairro(string bairro){
    this->Bairro = bairro;
}

void Terreno::setCEP(string cep){
    this->CEP = cep;
}

void Terreno::setCidade(string cidade){
    this->Cidade = cidade;
}

void Terreno::setAouV(string aouv){
    this->AouV = aouv;
}

Terreno::~Terreno()
{
    //dtor
}
