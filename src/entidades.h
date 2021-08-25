#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"

//! Essa Classe tem atributos da sessao
class Sessao {
    private:
        Data data;
        Horario horario;
        Email email;

    public:
        void setData(const Data &valor);
        string getData(void) const{
            return data.getValor();
        }

        void setHorario(const Horario &valor);
        string getHorario(void) const{
            return horario.getValor();
        }

};

inline void Sessao::setData(const Data &valor) {
    this->data = valor;
}

inline void Sessao::setHorario(const Horario &valor) {
    this->horario = valor;
}
//! Classe de Participantes
class Participante {
    private:
        Matricula matricula;
        Nome nome;
        Nome sobrenome;
        Email email;
        Telefone telefone;
        Senha senha;

    public:
        void setMatricula(const Matricula &valor);
        string getMatricula(void) const{
            return matricula.getValor();
        }

        void setNome(const Nome &valor);
        string getNome(void) const{
            return nome.getValor();
        }

        void setSobrenome(const Nome &valor);
        string getSobrenome(void) const{
            return sobrenome.getValor();
        }

        void setEmail(const Email &valor);
        string getEmail(void) const{
            return email.getValor();
        }

        void setTelefone(const Telefone &valor);
        string getTelefone(void) const{
            return telefone.getValor();
        }

        void setSenha(const Senha &valor);
        string getSenha(void) const{
            return senha.getValor();
        }

};

inline void Participante::setMatricula(const Matricula &valor) {
    this->matricula = valor;
}

inline void Participante::setNome(const Nome &valor) {
    this->nome = valor;
}

inline void Participante::setSobrenome(const Nome &valor) {
    this->sobrenome = valor;
}

inline void Participante::setEmail(const Email &valor) {
    this->email = valor;
}

inline void Participante::setTelefone(const Telefone &valor) {
    this->telefone = valor;
}

inline void Participante::setSenha(const Senha &valor) {
    this->senha = valor;
}



#endif // ENTIDADES_H_INCLUDED
