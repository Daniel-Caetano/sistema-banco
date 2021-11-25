#pragma once
#include "Cpf.hpp"
#include <iostream>
#include <string>

class Pessoa {
protected:
  Cpf numCpf;
  std::string nome;

public:
  Pessoa(Cpf numCpf, std::string nome);
  std::string getNome() const;

private:
  void verifica_tamanho_nome();
};