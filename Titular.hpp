#pragma once
#include "Cpf.hpp"
#include "Pessoa.hpp"
#include <iostream>

class Titular : Pessoa {
private:
public:
  Titular(Cpf numCpf, std::string nome);
};