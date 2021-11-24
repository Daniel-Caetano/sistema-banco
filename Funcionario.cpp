#include "Funcionario.hpp"
#include "Pessoa.hpp"
#include <iostream>

Funcionario::Funcionario(Cpf numCpf, std::string nome, float salario)
    : Pessoa(numCpf, nome), salario(salario) {}