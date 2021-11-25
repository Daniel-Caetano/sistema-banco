#include "Conta.hpp"
#include <iostream>

int Conta::qtdContas = 0;

Conta::Conta(std::string numeroConta, Titular titular)
    : numeroConta(numeroConta), titular(titular), saldo(0) {
  qtdContas++;
}
Conta::~Conta() { qtdContas--; }

float Conta::getSaldo() const { return saldo; }

std::string Conta::getNumero() const { return numeroConta; }

int Conta::getQtdContas() { return qtdContas; }

void Conta::sacar(float valorSacar) {
  if (valorSacar <= 0) {
    std::cout << "Não pode sacar valor menor ou igual a zero" << std::endl;
    return;
  }

  float tarifaSaque = valorSacar * taxaSaque();
  float valorTotalSaque = valorSacar + tarifaSaque;

  if (valorTotalSaque > saldo) {
    std::cout << "\nSaldo insuficiente" << std::endl;
    return;
  }
  saldo -= valorTotalSaque;
}

void Conta::depositar(float valorDepositar) {
  if (valorDepositar <= 0) {
    std::cout << "Não pode depositar valor menor ou igual a zero" << std::endl;
    return;
  }
  this->saldo += valorDepositar;
}