#include "Pessoa.hpp"
#include <iostream>

Pessoa::Pessoa(Cpf numCpf, std::string nome) : numCpf(numCpf), nome(nome) {
  verifica_tamanho_nome();
}
void Pessoa::verifica_tamanho_nome() {
  if (nome.size() < 5) {
    std::cout << "Nome muito curto!!" << std::endl;
    exit(1);
  }
}

std::string Pessoa::getNome() const { return nome; }