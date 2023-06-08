    #include "testedois.cpp"
    #include <iostream>

    using namespace std;


    int main() {
        int opcao;
        Cliente cliente;
        Cadastro cd;

        cin >> opcao;
            if (opcao == 1) {
                    cin >> cliente.nome;
                    cin >> cliente.senha;
                    cd.registroCliente(cliente);
            }

    return 0;
    }
