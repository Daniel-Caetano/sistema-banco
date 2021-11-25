#pragma once
#include "Cpf.hpp"
#include "Pessoa.hpp"
#include <string>

class Funcionario : public Pessoa {
private:
  float salario;

  short int diaPagamento;

public:
  Funcionario(Cpf numCpf, std::string nome, float salario,
              short int diaPagamento);
  std::string getNome();
  float getSalario() const;
  virtual float bonificacao() const = 0;
};