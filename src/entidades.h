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

class Peca {
    private:
        Codigo identificador;
        Nome nome;
        Tipo tipo;
        Classificacao classificacao;

    public:
        void setCodigo(const Codigo &valor);
        string getCodigo(void) const{
            return identificador.getValor();
        }

        void setNome(const Nome &valor);
        string getNome(void) const{
            return nome.getValor();
        }

        void setTipo(const Tipo &valor);
        string getTipo(void) const{
            return tipo.getValor();
        }

        void setClassificacao(const Classificacao &valor);
        string getClassificacao(void) const{
            return classificacao.getValor();
        }
};

inline void Peca::setCodigo(const Codigo &valor) {
    this->identificador = valor;
}

inline void Peca::setNome(const Nome &valor) {
    this->nome = valor;

inline void Peca::setTipo(const Tipo &valor) {
    this->tipo = valor;
}

inline void Peca::setClassificacao(const Classificacao &valor) {
    this->classificacao = valor;
}

class Sala {
    private:
        Codigo identificador;
        Nome nome;
        Capacidade capacidade;

    public:
        void setCodigo(const Codigo &valor);
        string getCodigo(void) const{
            return identificador.getValor();
        }

        void setNome(const Nome &valor);
        string getNome(void) const{
            return nome.getValor();
        }
        void setCapacidade(const Capacidade &valor);
        string getCapacidade(void) const{
            return capacidade.getValor();
        }

};
inline void Sala::setCodigo(const Codigo &valor) {
    this->identificador = valor;
}

inline void Sala::setNome(const Nome &valor) {
    this->nome = valor;

inline void Sala::setCapacidade(const Capacidade &valor) {
    this->capacidade = valor;
}
#endif // ENTIDADES_H_INCLUDED
