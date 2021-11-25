#include "Titular.hpp"
#include "Pessoa.hpp"
#include <iostream>

Titular::Titular(Cpf numCpf, std::string nome, std::string senha)
    : Pessoa(numCpf, nome), Autenticavel(senha) {}