#ifndef IMOVEL_H
#define IMOVEL_H
#include <string>

using namespace std;

class Imovel
{
    public:
        Imovel();
        void setTipoImovel(int);
        int getTipoImovel();
        virtual ~Imovel();
    protected:
        int TipoDeImovel;
    private:
};

#endif // IMOVEL_H
