#pragma once
#include "Cpf.hpp"
#include "Pessoa.hpp"
#include <iostream>

class Funcionario : Pessoa {
private:
  float salario;

public:
  Funcionario(Cpf numCpf, std::string nome, float salario);
};