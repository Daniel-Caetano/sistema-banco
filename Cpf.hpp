#pragma once
#include "Cpf.hpp"
#include <iostream>

class Cpf {
private:
  std::string numCpf;

public:
  explicit Cpf(std::string cpf);
  std::string getCPF() const;

private:
  void valida_cpf();
};