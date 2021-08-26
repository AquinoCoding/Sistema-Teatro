#include <string>
#include <stdexcept>
#include <ctype.h>
#include <vector>
#include <iostream>
#include <sstream>
#include "dominios.h"


using namespace std;
//using std::find;
//using std::string;

bool Telefone::validarValor(string valor) {

    string ddd = valor.substr(1,2);
    int tamanho = valor.length();
    int i;
    string invNumber = "000000000";

    vector<string> arr = {"11", "12", "13", "14", "15", "16", "17", "18", "19", "21", "22", "24", "27", "28", "32", "33",
				"34", "35", "37", "38", "41", "42", "43", "44", "45", "46", "47", "48", "49", "51", "53",
				"54", "55", "61", "62", "63", "64", "65", "66", "67", "68", "69", "71", "73", "74", "75",
				"77", "79", "81", "82", "83", "84", "85", "86", "87", "88", "89", "91", "92", "93", "94",
				"95", "96", "97", "98", "99"};


    if( valor != invNumber && (tamanho - 5 ) == 9){
        for(i = 0; i <= 66; i++){
            if (arr[i] == ddd){};

    return true;};
    };


    throw invalid_argument("Erro no parametro da classe Telefone.");
}

void Telefone::setValor(string valor) {
    validarValor(valor);
    this->telefone = valor;
}

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

// Tipo
bool Tipo::validarValor(string valor) {
    if(valor.compare("auto") == 0 || valor.compare("farsa") == 0 ||
        valor.compare("comédia") == 0 || valor.compare("melodrama") == 0 ||
        valor.compare("drama") == 0 || valor.compare("monólogo") == 0 ||
        valor.compare("musical") == 0 || valor.compare("opera") == 0 ||
        valor.compare("revista") == 0)
        return true;
    throw invalid_argument("Erro no parametro da classe Tipo.");

}

void Tipo::setValor(string valor) {
    validarValor(valor);
    this->tipo = valor;
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

//Data
void Data::tokenize(std::string const &str, const char delim,
            std::vector<std::string> &out) {
    // construct a stream from the string
    stringstream ss(str);

    string s;
    while (std::getline(ss, s, delim)) {
        out.push_back(s);
    }
}

bool Data::validarValor(string valor) {

    std::vector<std::string> out;
    tokenize(valor, '/', out);

    if ((out[0].length() == 2 && out[1].length() == 2 && out[2].length() == 4) &&
        (stoi(out[0]) >= 1 && stoi(out[0]) <= 31 && stoi(out[1]) >= 1 && stoi(out[1]) <= 12) &&
        (stoi(out[2]) >= 2000 && stoi(out[2]) <= 9999))
            return true;



    throw invalid_argument("Erro no parametro da classe Data.");

}

void Data::setValor(string valor) {
    validarValor(valor);
    this->data = valor;
}

// ############################################ ERRO ######################


//Horario
bool Horario::validarValor(string valor) {



    return true;
}

void Horario::setValor(string valor) {
    validarValor(valor);
    this->horario = valor;
}


