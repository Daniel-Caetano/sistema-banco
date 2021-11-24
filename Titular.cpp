#include "Titular.hpp"
#include <iostream>

Titular::Titular(Cpf numCpf, std::string nome) : numCpf(numCpf), nome(nome) {
  verifica_tamanho_nome();
}
void Titular::verifica_tamanho_nome() {
  if (nome.size() < 5) {
    std::cout << "Nome muito curto!!" << std::endl;
    exit(1);
  }
}

std::string Titular::getNome() const { return nome; }
