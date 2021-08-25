#ifndef TESTE_H_INCLUDED
#define TESTE_H_INCLUDED

#include "entidades.h"

class TesteSessao {
    public:
        bool sucesso(const Data &valor, const Horario &horario);
        bool teste(string, string);
};

class TesteEmail {
    public:
        bool sucesso(const Email &valor);
        bool teste(string);

};


#endif // TESTE_H_INCLUDED
