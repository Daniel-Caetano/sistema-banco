#pragma once
#include "Cpf.hpp"
#include <iostream>

class Titular {
private:
  std::string cpf;
  std::string nome;
  Cpf numCpf;

public:
  Titular(Cpf numCpf, std::string nome);
  std::string getNome() const;

private:
  void verifica_tamanho_nome();
};