#include "Gerente.hpp"

Gerente::Gerente(Cpf cpf, std::string nome, float salario,
                 short int diaPagamento, std::string senha)
    : Funcionario(cpf, nome, salario, diaPagamento), Autenticavel(senha) {}

float Gerente::bonificacao() const { return getSalario() * 0.5; }
