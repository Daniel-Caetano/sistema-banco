#pragma once
#include "Autenticavel.hpp"
#include "Funcionario.hpp"

class Gerente final : public Funcionario, public Autenticavel {
public:
  Gerente(Cpf cpf, std::string nome, float salario, short int diaPagamento,
          std::string senha);
  float bonificacao() const;
};
