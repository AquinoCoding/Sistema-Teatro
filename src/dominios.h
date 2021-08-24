/*
    @author: Igor Silva de Oliveira Cardoso

*/

#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Codigo {
    private:
        string codigo;
        bool validarValor(string);
    public:
        void setValor(string);
		string getValor() const {
            return codigo;
		}
};

class Data {
    private:
        string data;
        bool validarValor(string);

    public:
        void setValor(string);
		string getValor() const {
            return data;
		}
};

class Nome {
    private:
        string nome;
        bool validarValor(string);
    public:
        void setValor(string);
        string getValor() const{
            return nome;
        }
};

class Senha {
    private:
        string senha;
        bool validarValor(string);
    public:
        void setValor(string);
        string getValor() const {
            return senha;
        }
};

class Telefone {
    private:
        string telefone;
        bool validarValor(string);
    public:
        void setValor(string);
        string getValor() const{
            return telefone;
        }
};

class Tipo {
    private:
        string tipo;
        bool validarValor(string);
    public:
        void setValor(string valor);
        string getValor() const{
            return tipo;
        }
};

class Email {
    private:
        string email;
        bool validarValor(string);

    public:
        void setValor(string);
            string getValor() const {
                return email;
            }
};

class Horario {

    private:
        static const int timeMax = 23;
        static const int timeMin = 00;

        string horario;
        bool validarValor(string);

    public:
        void setValor(string horario);
		string getValor() const {
            return horario;
		}
};

class Capacidade {
    private:
        int capacidade;
        bool validarValor(int);

    public:
        void setValor(int);
        int getValor() const {
                return capacidade;
        }
};

class Cargo {
    private:
        string cargo;
        bool validarValor(string);

    public:
        void setValor(string);
		string getValor() const {
            return cargo;
		}
};

class Classificacao {
    private:
        string classificacao;
        bool validarValor(string);
    public:
        void setValor(string);
		string getValor() const {
            return classificacao;
		}
};

#endif // DOMINIOS_H_INCLUDED
