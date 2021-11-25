#pragma once
#include "Cpf.hpp"
#include "Pessoa.hpp"
#include <string>

class Funcionario : public Pessoa {
private:
  float salario;

public:
  Funcionario(Cpf numCpf, std::string nome, float salario);
  std::string getNome();
  float getSalario() const;
  virtual float bonificacao() const = 0;
};