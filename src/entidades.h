#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"


class Sessao {
    private:
        Data data;
        Horario horario;

    public:
        void setData(const Data &valor);
        string getData(void) const{
            return data.getValor();
        }
};

inline void Sessao::setData(const Data &valor) {
    this->data = valor;
}


#endif // ENTIDADES_H_INCLUDED
