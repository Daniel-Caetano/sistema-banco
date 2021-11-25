#pragma once
#include "Autenticavel.hpp"
#include "Cpf.hpp"
#include "Pessoa.hpp"
#include <iostream>
#include <string>

class Titular : public Pessoa, public Autenticavel {
private:
public:
  Titular(Cpf numCpf, std::string nome, std::string senha);
};