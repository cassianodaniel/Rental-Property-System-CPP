#include "Apartamento.h"
#include <string>
using namespace std;

Apartamento::Apartamento()
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

Apartamento::Apartamento(string rua, int numero, string bairro, string cep, string cidade, double valor, string aouv, int tipodeimovel)
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

string Apartamento::getRua(){
    return this->Rua;
}

int Apartamento::getNumero(){
    return this->Numero;
}

string Apartamento::getBairro(){
    return this->Bairro;
}

string Apartamento::getCEP(){
    return this->CEP;
}

double Apartamento::getValor(){
    return this->Valor;
}

string Apartamento::getCidade(){
    return this->Cidade;
}

string Apartamento::getAouV(){
    return this-> AouV;
}

void Apartamento::setRua(string rua){
    this->Rua = rua;
}

void Apartamento::setNumero(int numero){
    this->Numero = numero;
}

void Apartamento::setBairro(string bairro){
    this->Bairro = bairro;
}

void Apartamento::setCEP(string cep){
    this->CEP = cep;
}

void Apartamento::setCidade(string cidade){
    this->Cidade = cidade;
}

void Apartamento::setAouV(string aouv){
    this->AouV = aouv;
}

Apartamento::~Apartamento()
{
    //dtor
}
