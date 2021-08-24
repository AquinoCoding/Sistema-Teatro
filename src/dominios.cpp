#include <string>
#include <stdexcept>
#include <ctype.h>
#include <vector>

#include "dominios.h"

using namespace std;
//using std::find;
//using std::string;


// Capacidade
bool Capacidade::validarValor(int valor) {
    if(valor == 100 || valor == 200 || valor == 300 || valor == 400 || valor == 500)
        return true;
    throw invalid_argument("Erro no parametro da classe Capacidade.");
}

void Capacidade::setValor(int valor) {
    validarValor(valor);
    this->capacidade = valor;
}

// Cargo
bool Cargo::validarValor(string valor) {
    //vector<string> cargos = {"ator", "cenógrafo", "figurinista", "maquiador", "sonoplasta", "iluminador"};

    //if(*find(cargos.begin(), cargos.end(), valor) == valor)
    //    return true;

    if(valor.compare("ator") == 0 || valor.compare("cenógrafo") == 0 ||
        valor.compare("figurinista") == 0 || valor.compare("maquiador") == 0 ||
        valor.compare("sonoplasta") == 0 || valor.compare("iluminador") == 0)
        return true;
    throw invalid_argument("Erro no parametro da classe Cargo.");
}

void Cargo::setValor(string valor) {
    validarValor(valor);
    this->cargo = valor;
}

// Classificacao
bool Classificacao::validarValor(string classificacao) {
    if(classificacao.compare("livre") == 0 || classificacao.compare("10") == 0 ||
        classificacao.compare("12") == 0 || classificacao.compare("14") == 0 ||
        classificacao.compare("16") == 0 || classificacao.compare("18") == 0)
        return true;
    throw invalid_argument("Erro no parametro da classe Classificacao.");
}

void Classificacao::setValor(string classificacao) {
	validarValor(classificacao);
	this->classificacao = classificacao;
}

// Codigo
bool Codigo::validarValor(string valor) {
    int i, maiuscula=0, numero=0, tamanho = valor.length();

    if(tamanho == 6) {
        for(i = 0; i < tamanho; i++) {
            if(valor[i] >= 65 && valor[i] <= 90) {
                maiuscula++;
            }
            else if(valor[i] >= 48 && valor[i] <= 57) {
                numero++;
            }
        }

        if(maiuscula == 2 && numero == 4) return true;
    }
    throw invalid_argument("Erro no parametro da classe Codigo.");
}

void Codigo::setValor(string valor) {
    validarValor(valor);
    this->codigo = valor;
}

//Data
bool Data::validarValor(string valor) {
    return true;
}
void Data::setValor(string valor) {
    validarValor(valor);
    this->data = valor;
}

//Email
bool Email::validarValor(string valor) {
    int i, parte_local=0, dominio=0, tamanho=valor.length();
    bool flag=false;

    if(valor[0] != '.' && valor[tamanho-1] != '.') {
        for(i = 0; i < tamanho; i++) {
            if(valor[i] != '@' && !flag)
                parte_local++;
            else if(valor[i] != '@' && flag == false) parte_local++;
            else {
                dominio++;
                flag = true;
            }
        }

        if(parte_local <= 64 && dominio <= 255) return true;
    }
    throw invalid_argument("Erro no parametro da classe Email.");
}

void Email::setValor(string valor) {
    validarValor(valor);
    cout << "Fioiii";
    this->email = valor;
}

// 00, 01, 02, 03, 04, 05
//Horario
bool Horario::validarValor(string valor) {
    return true;
}

void Horario::setValor(string valor) {
    validarValor(valor);
    this->horario = valor;
}

