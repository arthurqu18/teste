#include "testedois.hpp"
#include <iostream>

#include <string>
#include <fstream>

using namespace std;

void Cadastro::registroCliente(Cliente c) {
    string name, senha;
    fstream file;

    file.open("reigistroclientes.txt", ios::app);
    if (file.is_open()) {
        name = c.nome;
        senha = c.senha;
        file <<name<<"," <<senha<<"\n";
        file.close();
    }
    else {cout << "nao abriu"<<endl;};
}