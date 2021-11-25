#include "Cpf.hpp"
#include <iostream>

Cpf::Cpf(std::string cpf) : numCpf(cpf) {}

void Cpf::valida_cpf() {
  if (numCpf.size() != 11) {
    std::cout << "\nCPF invalido!" << std::endl;
    exit(1);
  }
}

std::string Cpf::getCPF() const { return numCpf; }