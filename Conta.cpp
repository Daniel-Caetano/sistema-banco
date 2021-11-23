#include "Conta.hpp"
#include <iostream>

int Conta::qtdContas = 0;

Conta::Conta(std::string numeroConta, std::string cpfTitular,
             std::string nomeTitular)
    : numeroConta(numeroConta), cpfTitular(cpfTitular),
      nomeTitular(nomeTitular), saldo(0) {
  qtdContas++;
}
float Conta::getSaldo() const { return saldo; }
std::string Conta::getNome() const { return nomeTitular; }
std::string Conta::getCPF() const { return cpfTitular; }
std::string Conta::getNumero() const { return numeroConta; }
int Conta::getQtdContas() { return qtdContas; }
void Conta::sacar(float valorSacar) {
  if (valorSacar <= 0) {
    std::cout << "Não pode sacar valor menor ou igual a zero" << std::endl;
    return;
  }
  if (saldo <= 0 || valorSacar > saldo) {
    std::cout << "\nSaldo insuficiente" << std::endl;
    return;
  }
  saldo -= valorSacar;
}
void Conta::depositar(float valorDepositar) {
  if (valorDepositar <= 0) {
    std::cout << "Não pode depositar valor menor ou igual a zero" << std::endl;
    return;
  }
  this->saldo += valorDepositar;
}