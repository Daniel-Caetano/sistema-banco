#pragma once
#include "Cpf.hpp"
#include "Pessoa.hpp"
#include <iostream>

class Funcionario : public Pessoa {
private:
  float salario;

public:
  Funcionario(Cpf numCpf, std::string nome, float salario);
  std::string getNome();
};