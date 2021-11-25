#include "Funcionario.hpp"
#include <iostream>

Funcionario::Funcionario(Cpf numCpf, std::string nome, float salario,
                         short int diaPagamento)
    : Pessoa(numCpf, nome), salario(salario), diaPagamento(diaPagamento) {}

std::string Funcionario::getNome() { return nome; }

float Funcionario::getSalario() const { return salario; }
