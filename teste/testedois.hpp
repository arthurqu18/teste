#ifndef TESTEDOIS_H
#define TESTEDOIS_H

#include <string>


class Cadastro {
    public:
        void registroCliente(Cliente cliente) { _cliente = cliente;};
    
    private:
        Cliente _cliente;
};

struct Cliente {
    //std::string email;
    std::string nome;
    std::string senha;
    //std::string endereco;
    //std::string cpf;
};

struct Loja {
    std::string email;
    std::string nome;
    std::string senha;
    std::string endereco;
    unsigned cnpj;
};



#endif

/*class Cadastro {
    public:
        Cadastro(unsigned);
    
};*/