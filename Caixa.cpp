#include "Caixa.hpp"

Caixa::Caixa(Cpf cpf, std::string nome, float salario, short int diaPagamento)
    : Funcionario(cpf, nome, salario, diaPagamento) {}

float Caixa::bonificacao() const { return getSalario() * 0.1; }
