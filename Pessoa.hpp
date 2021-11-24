#pragma once
#include "Cpf.hpp"

#include <iostream>

class Pessoa {
protected:
  std::string cpf;
  std::string nome;
  Cpf numCpf;

public:
  Pessoa(Cpf numCpf, std::string nome);
  std::string getNome() const;

private:
  void verifica_tamanho_nome();
};