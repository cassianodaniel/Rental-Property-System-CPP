#include "Imovel.h"
#include <string>

using namespace std;

Imovel::Imovel()
{
    this->TipoDeImovel = 0;
}

int Imovel::getTipoImovel()
{
    return this->TipoDeImovel;
}

void Imovel::setTipoImovel(int t)
{
    this->TipoDeImovel = t;
}

Imovel::~Imovel()
{
    //dtor
}
