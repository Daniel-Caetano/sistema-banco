#include "Funcionario.hpp"
#include <iostream>

Funcionario::Funcionario(Cpf numCpf, std::string nome, float salario)
    : Pessoa(numCpf, nome), salario(salario) {}

std::string Funcionario::getNome() { return nome; }

float Funcionario::getSalario() const { return salario; }
